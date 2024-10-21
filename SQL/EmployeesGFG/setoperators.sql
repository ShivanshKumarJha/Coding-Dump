use users;
select * from users_2021;
select * from users_2022;
select * from users_2023;

-- UNION - will remove the duplicate values
select * from users_2021 union select * from users_2022;
select * from users_2021 union select * from users_2023;
select * from users_2022 union select * from users_2023;
select * from users_2021 union select * from users_2022 union select * from users_2023;

-- UNION ALL - will take the duplicate value also
select * from users_2021 union all select * from users_2022;
select * from users_2021 union all select * from users_2023;
select * from users_2022 union all select * from users_2023;
select * from users_2021 union all select * from users_2022 union all select * from users_2023;

-- EXCEPT | Show all the data of the dominating table which is not there in other table
select * from users_2021 except select * from users_2022;

-- INTERSECT
select * from users_2021 intersect select * from users_2022;

-- List the new users added in 2022
select * from users_2022 except select * from users_2021;

-- List the users who left us 
select * from users_2021 except select * from users_2022 except select * from users_2023;

-- List all the users that are there throughout the database for year 2021 & 2022
select * from users_2021 union select * from users_2022;

-- List all the users that are there throughout the database 
select * from users_2021 union select * from users_2022 union select * from users_2023;

-- List all the users that are there with us from last 3 years
select * from users_2021 intersect select * from users_2022 intersect select * from users_2023;

-- List all the users except that users who are there with us from 3 years
select * from users_2021 union select * from users_2022 union select * from users_2023
except 
select * from users_2021 intersect select * from users_2022 intersect select * from users_2023;