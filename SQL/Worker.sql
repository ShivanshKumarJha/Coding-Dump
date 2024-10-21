CREATE DATABASE Organisation;
SHOW DATABASES;
USE Organisation;

CREATE TABLE Worker (
	WORKER_ID INT NOT NULL PRIMARY KEY AUTO_INCREMENT,
	FIRST_NAME CHAR(25),
	LAST_NAME CHAR(25),
	SALARY INT(15),
	JOINING_DATE DATETIME,
	DEPARTMENT CHAR(25)
);

INSERT INTO Worker
	(WORKER_ID, FIRST_NAME, LAST_NAME, SALARY, JOINING_DATE, DEPARTMENT) VALUES
		(001, 'Monika', 'Arora', 100000, '14-02-20 09.00.00', 'HR'),
		(002, 'Niharika', 'Verma', 80000, '14-06-11 09.00.00', 'Admin'),
		(003, 'Vishal', 'Singhal', 300000, '14-02-20 09.00.00', 'HR'),
		(004, 'Amitabh', 'Singh', 500000, '14-02-20 09.00.00', 'Admin'),
		(005, 'Vivek', 'Bhati', 500000, '14-06-11 09.00.00', 'Admin'),
		(006, 'Vipul', 'Diwan', 200000, '14-06-11 09.00.00', 'Account'),
		(007, 'Satish', 'Kumar', 75000, '14-01-20 09.00.00', 'Account'),
		(008, 'Geetika', 'Chauhan', 90000, '14-04-11 09.00.00', 'Admin');

CREATE TABLE Bonus (
	WORKER_REF_ID INT,
	BONUS_AMOUNT INT(10),
	BONUS_DATE DATETIME,
	FOREIGN KEY (WORKER_REF_ID)
		REFERENCES Worker(WORKER_ID)
        ON DELETE CASCADE
);

INSERT INTO Bonus
	(WORKER_REF_ID, BONUS_AMOUNT, BONUS_DATE) VALUES
		(001, 5000, '16-02-20'),
		(002, 3000, '16-06-11'),
		(003, 4000, '16-02-20'),
		(001, 4500, '16-02-20'),
		(002, 3500, '16-06-11');

CREATE TABLE Title (
	WORKER_REF_ID INT,
	WORKER_TITLE CHAR(25),
	AFFECTED_FROM DATETIME,
	FOREIGN KEY (WORKER_REF_ID)
		REFERENCES Worker(WORKER_ID)
        ON DELETE CASCADE
);

INSERT INTO Title
	(WORKER_REF_ID, WORKER_TITLE, AFFECTED_FROM) VALUES
 (001, 'Manager', '2016-02-20 00:00:00'),
 (002, 'Executive', '2016-06-11 00:00:00'),
 (008, 'Executive', '2016-06-11 00:00:00'),
 (005, 'Manager', '2016-06-11 00:00:00'),
 (004, 'Asst. Manager', '2016-06-11 00:00:00'),
 (007, 'Executive', '2016-06-11 00:00:00'),
 (006, 'Lead', '2016-06-11 00:00:00'),
 (003, 'Lead', '2016-06-11 00:00:00');

-- Q-1. Write an SQL query to fetch “FIRST_NAME” from Worker table using the alias name as <WORKER_NAME>.
    select first_name AS worker_name from worker;

-- Q-2. Write an SQL query to fetch “FIRST_NAME” from Worker table in upper case.
    select UPPER(FIRST_NAME) AS worker_name from worker;

-- Q-3. Write an SQL query to fetch unique values of DEPARTMENT from Worker table.
    select DISTINCT department from worker;

-- Q-4. Write an SQL query to print the first three characters of  FIRST_NAME from Worker table.
    select SUBSTRING(FIRST_NAME,1,3) AS worker_name from worker;

-- Q-5. Write an SQL query to find the position of the alphabet (‘b’) in the first name column ‘Amitabh’ from Worker table.
    select INSTR(first_name,'B') from worker where first_name = 'Amitabh';

-- Q-6. Write an SQL query to print the FIRST_NAME from Worker table after removing white spaces from the right side.
    select RTRIM(first_name) from worker;

-- Q-7. Write an SQL query to print the DEPARTMENT from Worker table after removing white spaces from the left side.
    select LTRIM(department) from worker;

-- Q-8. Write an SQL query that fetches the unique values of DEPARTMENT from Worker table and prints its length.
    select DISTINCT LENGTH(department),department from worker;

-- Q-9. Write an SQL query to print the FIRST_NAME from Worker table after replacing ‘a’ with ‘A’.
    select REPLACE(first_name,'a','A') from worker;

-- Q-10. Write an SQL query to print the FIRST_NAME and LAST_NAME from Worker table into a single column COMPLETE_NAME.
-- A space char should separate them.
    select CONCAT(first_name,' ',last_name) AS Complete_Name from worker;

-- Q-11. Write an SQL query to print all Worker details from the Worker table order by FIRST_NAME Ascending.
    select * from worker ORDER BY first_name;

-- Q-12. Write an SQL query to print all Worker details from the Worker table order by
-- FIRST_NAME Ascending and DEPARTMENT Descending.
    select * from worker ORDER BY first_name,department DESC;

-- Q-13. Write an SQL query to print details for Workers with the first name as “Vipul” and “Satish” from Worker table.
    select * from worker where first_name in('Vipul','Satish');

-- Q-14. Write an SQL query to print details of workers excluding first names, “Vipul” and “Satish” from Worker table.
    select * from worker where first_name not in('Vipul','Satish');

-- Q-15. Write an SQL query to print details of Workers with DEPARTMENT name as “Admin*”.
    select * from worker where department like 'Admin%';

-- Q-16. Write an SQL query to print details of the Workers whose FIRST_NAME contains ‘a’.
    select * from worker where first_name like '%a%';

-- Q-17. Write an SQL query to print details of the Workers whose FIRST_NAME ends with ‘a’.
    select * from worker where first_name like '%a';

-- Q-18. Write an SQL query to print details of the Workers whose FIRST_NAME ends with ‘h’ and contains six alphabets.
    select * from worker where first_name like '_____h';

-- Q-19. Write an SQL query to print details of the Workers whose SALARY lies between 100000 and 500000.
    select * from worker where salary between 100000 and 500000;

-- Q-20. Write an SQL query to print details of the Workers who have joined in Feb’2014.
    select * from worker where YEAR(joining_date) = 2014 AND MONTH(joining_date) = 02;

-- Q-21. Write an SQL query to fetch the count of employees working in the department ‘Admin’.
    select COUNT(*) from worker where department = 'Admin';

-- Q-22. Write an SQL query to fetch worker full names with salaries >= 50000 and <= 100000.
    select CONCAT(first_name,' ',last_name) AS Complete_Name,salary from worker where salary between 50000 and 100000;

-- Q-23. Write an SQL query to fetch the no. of workers for each department in the descending order.
    select department,COUNT(*) as numWorkers from worker GROUP BY department ORDER BY numWorkers desc;

-- Q-24. Write an SQL query to print details of the Workers who are also Managers.
    select *
    from worker AS w
    LEFT JOIN title t
    on w.WORKER_ID = t.WORKER_REF_ID
    where t.worker_title = 'Manager';

-- Q-25. Write an SQL query to fetch number (more than 1) of same titles in the ORG of different types.

-- Q-26. Write an SQL query to show only odd rows from a table.

-- Q-27. Write an SQL query to show only even rows from a table.

-- Q-28. Write an SQL query to clone a new table from another table.

-- Q-29. Write an SQL query to fetch intersecting records of two tables.

-- Q-30. Write an SQL query to show records from one table that another table does not have.
-- MINUS

-- Q-31. Write an SQL query to show the current date and time.
-- DUAL

-- Q-32. Write an SQL query to show the top n (say 5) records of a table order by descending salary.

-- Q-33. Write an SQL query to determine the nth (say n=5) highest salary from a table.

-- Q-34. Write an SQL query to determine the 5th highest salary without using LIMIT keyword.

-- Q-35. Write an SQL query to fetch the list of employees with the same salary.

-- Q-36. Write an SQL query to show the second highest salary from a table using sub-query.

-- Q-37. Write an SQL query to show one row twice in results from a table.

-- Q-38. Write an SQL query to list worker_id who does not get bonus.

-- Q-39. Write an SQL query to fetch the first 50% records from a table.

-- Q-40. Write an SQL query to fetch the departments that have less than 4 people in it.

-- Q-41. Write an SQL query to show all departments along with the number of people in there.

-- Q-42. Write an SQL query to show the last record from a table.

-- Q-43. Write an SQL query to fetch the first row of a table.

-- Q-44. Write an SQL query to fetch the last five records from a table.

-- Q-45. Write an SQL query to print the name of employees having the highest salary in each department.

-- Q-46. Write an SQL query to fetch three max salaries from a table using co-related subquery

-- DRY RUN AFTER REVISING THE CORELATED SUBQUERY CONCEPT FROM LEC-9.

-- Q-47. Write an SQL query to fetch three min salaries from a table using co-related subquery

-- Q-48. Write an SQL query to fetch nth max salaries from a table.

-- Q-49. Write an SQL query to fetch departments along with the total salaries paid for each of them.

-- Q-50. Write an SQL query to fetch the names of workers who earn the highest salary.