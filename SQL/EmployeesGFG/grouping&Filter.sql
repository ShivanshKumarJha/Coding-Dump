use gfg;
select * from products;

-- finding the name of unique brands
select distinct(brand_name) from products;

-- finding the number of unique brands
select count(distinct(brand_name)) from products;

-- finding the number of products in each brand
select brand_tag , count(product_tag) as total_products from products group by brand_tag;

-- finding the top 5 brand who has the most number of products | different product in their inventory
select brand_tag , count(product_tag) as total_products 
from products 
group by brand_tag
order by total_products desc 
limit 5;

-- finding the top 5 brand who sold the most number of products
select brand_tag , sum(rating_count) as 'products_sold'
from products 
group by brand_tag
order by products_sold desc 
limit 5;

-- finding the top 5 most expensive brands based on their discounted price
select brand_tag,round(avg(discounted_price)) as 'average_price'
from products 
group by brand_tag
order by average_price desc
limit 5;

-- finding the top 5 least expensive brands based on their discounted price
select brand_tag,round(avg(discounted_price)) as 'average_price'
from products 
group by brand_tag
order by average_price 
limit 5;

-- finding the top 10 best-selling product categories
select product_tag,sum(rating_count) as 'products_sold'
from products 
group by product_tag
order by products_sold desc
limit 10;

-- finding the top 10 brands who gives maximum discount
select brand_tag, round(avg(discount_percent)) as 'average_discount'
from products
group by brand_tag
order by average_discount desc 
limit 10;

-- finding the top 5 most expensive product categories
select product_tag, round(avg(discounted_price)) as 'product_price'
from products
group by product_tag
order by product_price desc
limit 5;

-- Brand report card
select brand_tag,
	sum(rating_count) as 'people_rated',
	min(marked_price) as 'min_mar_price',
	round(avg(marked_price)) as 'avg_mar_price',
	max(marked_price) as 'max_mar_price'
from products
group by brand_tag;

-- which product category of any brand is sold the most?
select brand_tag, product_tag, sum(rating_count) as 'products_sold'
from products
group by brand_tag, product_tag
order by products_sold desc limit 10;

-- list top 5 brands which has sold most number of tshirts
select brand_tag, sum(rating_count) as 'people_ordered'
from products
where product_tag = 'tshirts'
group by brand_tag
order by people_ordered desc 
limit 5;

-- list top 5 brands which has sold most number of shirts
select brand_tag, sum(rating_count) as 'people_ordered'
from products
where product_tag = 'shirts'
group by brand_tag
order by people_ordered desc 
limit 5;

-- list top 5 brands which has sold most number of jeans
select brand_tag, sum(rating_count) as 'people_ordered'
from products
where product_tag = 'jeans'
group by brand_tag
order by people_ordered desc 
limit 5;

-- list top 5 brands which has sold most number of dresses
select brand_tag, sum(rating_count) as 'people_ordered'
from products
where product_tag = 'dresses'
group by brand_tag
order by people_ordered desc 
limit 5;

-- most popular product name listed in myntra
select product_name,count(product_name) as 'name_count'
from products
group by product_name
order by name_count desc 
limit 1;

-- number of products sold for every rating(0-5)
select rating, count(*) as 'products_sold'
from products
group by rating 
order by rating asc;

-- number of products sold for every rating by nike
select rating, count(rating) as 'products_sold'
from products
where brand_tag = 'nike'
group by rating
order by rating asc;

-- number of products sold for every rating in tshirt category
select rating, sum(rating_count) as 'products_sold'
from products
where product_tag = 'tshirts'
group by rating
order by rating asc;

-- relation between the price of the tshirt and its rating wrt to people rated
select rating, round(avg(rating_count)) as 'product_count',round(avg(discounted_price)) as 'avg_price'
from products
where product_tag = 'tshirts'
group by rating 
order by rating;

-- find the average rating for each product category (product tag) along with the number of products
-- and total rating count
select product_tag, round(avg(rating)) as 'avg_rating', sum(rating_count) as 'total_rating_count', 
count(*) as 'total_product'
from products 
group by product_tag
order by avg_rating desc;

-- find the brand with the highest average rating among products with a discounted price greater than 5000
select brand_tag, avg(rating) as 'avg_rating', sum(rating_count) as 'people_bought'
from products 
where discounted_price > 5000
group by brand_tag
order by avg_rating desc;