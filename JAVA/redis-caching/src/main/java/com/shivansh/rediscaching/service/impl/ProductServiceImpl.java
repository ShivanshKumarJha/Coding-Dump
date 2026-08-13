package com.shivansh.rediscaching.service.impl;

import com.shivansh.rediscaching.dto.ProductRequestDto;
import com.shivansh.rediscaching.dto.ProductResponseDto;
import com.shivansh.rediscaching.entity.Product;
import com.shivansh.rediscaching.exception.ProductNotFoundException;
import com.shivansh.rediscaching.repository.ProductRepository;
import com.shivansh.rediscaching.service.ProductService;
import org.springframework.cache.annotation.CacheEvict;
import org.springframework.cache.annotation.CachePut;
import org.springframework.cache.annotation.Cacheable;
import org.springframework.stereotype.Service;

import java.util.List;

@Service
public class ProductServiceImpl implements ProductService {

    private final ProductRepository productRepository;

    public ProductServiceImpl(ProductRepository productRepository) {
        this.productRepository = productRepository;
    }

    @Override
    public List<ProductResponseDto> getAllProducts() {
        simulateSlowDBCall();
        return productRepository.findAll()
                .stream()
                .map(this::toResponseDto)
                .toList();
    }

    @Override
    // value is the cache name(means bucket) and key is the key associated with this cache
    @Cacheable(value = "products", key = "#id")
    public ProductResponseDto getProductById(Long id) {
        simulateSlowDBCall();
        Product product = findByIdOrThrow(id);
        return toResponseDto(product);
    }

    @Override
    public ProductResponseDto createProduct(ProductRequestDto requestDto) {
        validate(requestDto);
        Product product = toEntity(requestDto);
        simulateSlowDBCall();
        Product saved = productRepository.save(product);
        return toResponseDto(saved);
    }

    @Override
    @CachePut(value = "products", key = "#id")
    public ProductResponseDto updateProduct(Long id, ProductRequestDto requestDto) {
        validate(requestDto);
        simulateSlowDBCall();
        Product existing = findByIdOrThrow(id);
        existing.setName(requestDto.getName().trim());
        existing.setDescription(requestDto.getDescription());
        existing.setPrice(requestDto.getPrice());
        Product saved = productRepository.save(existing);
        return toResponseDto(saved);
    }

    @Override
    @CacheEvict(value = "products", key = "#id")
    public void deleteProduct(Long id) {
        simulateSlowDBCall();
        Product existing = findByIdOrThrow(id);
        productRepository.delete(existing);
    }


    private Product findByIdOrThrow(Long id) {
        return productRepository.findById(id)
                .orElseThrow(() -> new ProductNotFoundException(id));
    }

    private void validate(ProductRequestDto requestDto) {
        if (requestDto == null) {
            throw new IllegalArgumentException("Request body is required");
        }
        if (requestDto.getName() == null || requestDto.getName().trim().isEmpty()) {
            throw new IllegalArgumentException("Product name is required");
        }
        if (requestDto.getPrice() == null) {
            throw new IllegalArgumentException("Product price is required");
        }
        if (requestDto.getPrice().signum() < 0) {
            throw new IllegalArgumentException("Product price cannot be negative");
        }
    }

    private Product toEntity(ProductRequestDto dto) {
        Product product = new Product();
        product.setName(dto.getName().trim());
        product.setDescription(dto.getDescription());
        product.setPrice(dto.getPrice());
        return product;
    }

    private ProductResponseDto toResponseDto(Product product) {
        ProductResponseDto dto = new ProductResponseDto();
        dto.setId(product.getId());
        dto.setName(product.getName());
        dto.setDescription(product.getDescription());
        dto.setPrice(product.getPrice());
        dto.setCreatedAt(product.getCreatedAt());
        dto.setUpdatedAt(product.getUpdatedAt());
        return dto;
    }

    private void simulateSlowDBCall() {
        try {
            Thread.sleep(500); // Simulate a 500ms delay
        } catch (InterruptedException e) {
            Thread.currentThread().interrupt();
        }
    }
}
