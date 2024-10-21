use gfg;
select * from products;

select count(*) as total_products from products;

select avg(discounted_price) as average_discounted_price from products;
select avg(marked_price) as average_marked_price from products;

select max(discounted_price) as max_discounted_price from products;

select min(discounted_price) as max_discounted_price from products;

select sum(rating_count) as total_rating from products;

select count(distinct(brand_name)) as brands from products;