use swiggy;
select * from restaurants;

-- 1. Rank every restaurants from most expensive to least expensive
select *, rank() over(order by cost desc) as 'rank' from restaurants; 

-- 2. Rank every restaurants from most visited to least visited
select *, rank() over(order by rating_count desc) as 'rank' from restaurants;

-- 3. Rank every restaurants from most expensive to least expensive as per their city
select *, rank() over(partition by city order by cost desc) as 'rank' from restaurants; 

-- 4. Dense-rank every restaurant from most expensive to least expensive as per their city
select *, dense_rank() over(partition by city order by cost desc) as 'rank' from restaurants; 

-- 5. Row-number every restaurant from most expensive to least expensive as per their city 
select *, row_number() over(partition by city order by cost desc) as 'rank' from restaurants; 

-- 6. Rank every restaurant from most expensive to least expensive as per their city along with its city 
select *, concat(city,' - ',row_number() over(partition by city order by cost desc)) as 'rank' from restaurants; 

-- 7. Find top 5 restaurants of every city as per their revenue
select * from
    (select *,
        cost*rating_count as 'revenue',
        row_number() over (partition by city order by cost*rating_count desc) as 'rank'
    from restaurants)
as t
where t.rank < 6;

-- 8. Find top 5 restaurants of every cuisine as per their revenue
select * from
    (select *,
        cost*rating_count as 'revenue',
        row_number() over (partition by cuisine order by cost*rating_count desc) as 'rank'
    from restaurants)
as t
where t.rank < 6;