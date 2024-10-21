USE practise;
CREATE TABLE Sales (
    sale_id INT PRIMARY KEY,
    product_id INT,
    quantity_sold INT,
    sale_date DATE,
    total_price DECIMAL(10, 2)
);

INSERT INTO Sales (sale_id, product_id, quantity_sold, sale_date, total_price) VALUES
(1, 101, 5, '2024-01-01', 2500.00),
(2, 102, 3, '2024-01-02', 900.00),
(3, 103, 2, '2024-01-02', 60.00),
(4, 104, 4, '2024-01-03', 80.00),
(5, 105, 6, '2024-01-03', 90.00);

CREATE TABLE Products (
    product_id INT PRIMARY KEY,
    product_name VARCHAR(100),
    category VARCHAR(50),
    unit_price DECIMAL(10, 2)
);

INSERT INTO Products (product_id, product_name, category, unit_price) VALUES
(101, 'Laptop', 'Electronics', 500.00),
(102, 'Smartphone', 'Electronics', 300.00),
(103, 'Headphones', 'Electronics', 30.00),
(104, 'Keyboard', 'Electronics', 20.00),
(105, 'Mouse', 'Electronics', 15.00);

SELECT * FROM Sales;

SELECT * FROM Products;

SELECT * FROM products WHERE category = 'Electronics';

SELECT sale_id,total_price FROM sales WHERE sale_date = '2024-01-03';

SELECT
product_id, product_name
FROM
    Products
WHERE
    unit_price > 100;

SELECT SUM(total_price) AS total_revenue FROM Sales;

SELECT AVG(unit_price) AS average_unit_price FROM products;

SELECT sale_id,product_id,total_price FROM sales WHERE quantity_sold > 4;

SELECT product_name,unit_price FROM Products ORDER BY unit_price DESC;

SELECT ROUND(SUM(total_price),2) AS total_sales FROM sales;

SELECT sale_id,DATE_FORMAT(sale_date,'%Y-%m-%d') FROM Sales;

SELECT SUM(s.total_price) FROM Sales AS s
INNER JOIN Products AS p
ON s.product_id = p.product_id
WHERE p.category = 'Electronics';

SELECT SUM(s.quantity_sold) FROM Sales AS s
INNER JOIN Products AS p
on s.product_id = p.product_id
WHERE p.category = 'Electronics';

SELECT p.product_name,s.total_price
FROM Sales AS s
INNER JOIN Products AS p
on s.product_id = p.product_id;

-- SQL Practise for Intermediate
SELECT category,SUM(s.total_price)
FROM Sales AS s
INNER JOIN Products AS p
on s.product_id = p.product_id
GROUP BY p.category;

-- SELECT p.category,MAX(AVG(s.total_price)) 
-- FROM Sales AS s
-- INNER JOIN Products AS p
-- on s.product_id = p.product_id
-- GROUP BY p.category; wrong

SELECT category
FROM Products
GROUP BY category
ORDER BY AVG(unit_price) DESC
LIMIT 1;

SELECT p.product_name
FROM Sales AS s
INNER JOIN Products AS p
on s.product_id = p.product_id
GROUP BY p.product_name
HAVING SUM(s.total_price) > 500;

-- This is doubt 
SELECT DATE_FORMAT(s.sale_date, '%Y-%m') AS month,
COUNT(*) AS sales_count
FROM Sales s;

SELECT AVG(s.quantity_sold)
FROM Sales AS s
INNER JOIN Products AS p
on s.product_id = p.product_id
WHERE p.unit_price > 100;

SELECT p.product_name,SUM(s.total_price) AS total_revenue
FROM Sales AS s
INNER JOIN Products AS p
on s.product_id = p.product_id
GROUP BY p.product_name;

SELECT s.sale_id,p.product_name
FROM Sales AS s
INNER JOIN Products AS p
on s.product_id = p.product_id;

SELECT p.product_name,SUM(s.total_price)
FROM Sales AS s
INNER JOIN Products AS p
on s.product_id = p.product_id
GROUP BY p.product_name;

SELECT p.product_name,SUM(s.total_price)
FROM Sales AS s
INNER JOIN Products AS p
on s.product_id = p.product_id
GROUP BY p.product_name
ORDER BY  SUM(s.total_price) DESC;