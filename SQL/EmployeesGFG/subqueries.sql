use gfg;
select* from products;

-- Basic subquery : Find the average rating of the products
select avg(rating) as 'avg_rating' from products;

-- Subquery in WHERE clause : Find the brand names with a rating higher than the average rating
select brand_name, rating from products where rating > (select avg(rating) as 'avg_rating' from products);

-- Subquery in SELECT clause : Retrieve the product name along with the average rating of products
select product_name,rating,
	(select avg(rating) from products) as 'avg_rating'
from products;

-- Subquery with multiple results : Find the total rating count of products for each brand compared to the overall average rating count
select brand_name,
	(select sum(rating_count) from products where brand_name = p.brand_name) as 'total_rating_count'
from (select distinct brand_name from products) as p;

select brand_name , sum(rating_count) as 'total_rating_count'
from products
group by brand_name;