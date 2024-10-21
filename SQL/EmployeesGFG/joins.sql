DROP DATABASE IF EXISTS users;
CREATE DATABASE users;

CREATE TABLE IF NOT EXISTS users.users_2021  (UserID INT PRIMARY KEY, Name VARCHAR(50));
CREATE TABLE IF NOT EXISTS users.users_2022  (UserID INT PRIMARY KEY, Name VARCHAR(50));
CREATE TABLE IF NOT EXISTS users.users_2023  (UserID INT PRIMARY KEY, Name VARCHAR(50));

INSERT INTO users.users_2021 (UserID, Name) VALUES 
	(1, 'Ashish'), (2, 'Laura'), (7, 'Prakash');
INSERT INTO users.users_2022 (UserID, Name) VALUES 
	(1, 'Ashish'), (2, 'Laura'), (3, 'Charlie'), (4, 'Grace');
INSERT INTO users.users_2023 (UserID, Name) VALUES 
	(1, 'Ashish'), (2, 'Laura'), (3, 'Charlie'), (4, 'Grace'), (5, 'Henry');

use users;
select * from users_2021;
select * from users_2022;
select * from users_2023;

-- Inner Join
select * from users_2021 as t_2021 
inner join
users_2022 as t_2022
on t_2021.UserID = t_2022.UserID;

-- Join 3 tables
select * from users_2021 as t_2021 
inner join
users_2022 as t_2022
on t_2021.UserID = t_2022.UserID
inner join 
users_2023 as t_2023
on t_2023.UserID = t_2021.UserID;

-- Left Join - this is left outer join
select * from users_2021 as t_2021 
left join
users_2022 as t_2022
on t_2021.UserID = t_2022.UserID;

-- Right Join - this is right outer join
select * from users_2021 as t_2021 
right join
users_2022 as t_2022
on t_2021.UserID = t_2022.UserID;

-- Cross Inner Join
select * from users_2021 as t_2021 
left join
users_2022 as t_2022
on t_2021.UserID = t_2022.UserID
union 
select * from users_2021 as t_2021 
right join
users_2022 as t_2022
on t_2021.UserID = t_2022.UserID;