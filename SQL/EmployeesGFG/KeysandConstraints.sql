use practise;

-- 1.Primary Key
drop table if exists Employees;
create table if not exists Employees(
	employee_id INT PRIMARY KEY,
    name varchar(50),
    department varchar(50)
);

-- 2. Composite Key
drop table if exists Orders;
create table if not exists Orders(
	order_id SERIAL,
    customer_id INT,
    order_date DATE,
    PRIMARY KEY(order_id,customer_id)
);

-- 3. Foreign Key
drop table if exists Orders;
create table if not exists Orders(
	order_id SERIAL PRIMARY KEY,
    customer_id INT,
    order_date DATE,
    FOREIGN KEY(customer_id) REFERENCES Employees(employee_id)
);

-- 4. Unique Constraints
drop table if exists Employees;
create table if not exists Employees(
	employee_id INT PRIMARY KEY,	
    email varchar(50) UNIQUE,
    name varchar(50),
    department varchar(50)
);

-- 5. Unique Constraints as composite key
drop table if exists Employees;
create table if not exists Employees(
	employee_id INT PRIMARY KEY,	
    email varchar(50) UNIQUE,
	phone int UNIQUE,
    name varchar(50),
    department varchar(50),
    UNIQUE (email,phone)
);

-- 6. Check Constraints
drop table if exists Employees;
create table if not exists Employees(
	employee_id INT PRIMARY KEY,	
    email varchar(50) UNIQUE,
    age int CHECK (age >= 18),
	phone int UNIQUE,
    name varchar(50),
    department varchar(50),
    UNIQUE (email,phone)
);