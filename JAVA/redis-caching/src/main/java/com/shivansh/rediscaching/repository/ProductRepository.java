package com.shivansh.rediscaching.repository;

import com.shivansh.rediscaching.entity.Product;
import org.springframework.data.jpa.repository.JpaRepository;

public interface ProductRepository extends JpaRepository<Product, Long> {
}
