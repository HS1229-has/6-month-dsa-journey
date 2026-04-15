# Write your MySQL query statement below
SELECT p.product_name , e.year , e.price FROM Sales AS e LEFT JOIN Product AS p ON p.product_id=e.product_id;