use swiggy;
select * from restaurants;

-- 1. List the top 5 cuisines as per the revenue generated by top 5 restaurants of every cuisine
select cuisine, sum(rating_count * cost) as 'revenue'
from (select *, cost * rating_count,
      row_number() over (partition by cuisine order by cost * rating_count desc) as 'rank'
      from restaurants
) as t
where t.rank < 6
group by cuisine
order by  revenue desc;

-- 2. What is the total revenue generated by top 1% restaurants
select sum(cost*rating_count) as 'revenue'
from (select *,cost*rating_count,
      row_number() over (order by cost*rating_count desc) as 'rank'
      from restaurants
) as t
where t.rank <= ((select count(*) from restaurants)/100);

-- 3. Check the same for top 20% restaurants
select sum(cost*rating_count) as 'revenue'
from (select *,cost*rating_count,
      row_number() over (order by cost*rating_count desc) as 'rank'
      from restaurants
) as t
where t.rank <= ((select count(*) from restaurants)*20/100);

-- 4. What % of the revenue is generated by top 20% of restaurants with respect to total revenue
with
    q1 as (
            select sum(cost*rating_count) as 'top_revenue'
            from (select *,cost*rating_count,
            row_number() over (order by cost*rating_count desc) as 'rank'
            from restaurants
        ) as t
        where t.rank <= ((select count(*) from restaurants)*20/100)
    ),
    q2 as (
            select sum(cost*rating_count) as 'total_revenue' from restaurants
    )

select round(top_revenue/total_revenue*100,2) as 'revenue %' from q1,q2;
