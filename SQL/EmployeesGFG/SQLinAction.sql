create database gfg;
use gfg;
show tables;

select * from products;

select product_name, brand_name from products;

select product_name, brand_name, marked_price, discounted_price,  
marked_price - discounted_price as discounted_amount
from products;

select distinct(brand_name) as unique_brand_name from products;

select distinct(product_tag), brand_name from products where brand_tag = 'Adidas';
