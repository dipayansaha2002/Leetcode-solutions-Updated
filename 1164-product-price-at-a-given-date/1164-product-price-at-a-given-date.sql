# Write your MySQL query statement below
SELECT T1.product_id, IFNULL(T2.new_price,10) AS price
FROM (SELECT DISTINCT product_id FROM Products) AS T1 
  LEFT JOIN
            (SELECT product_id, new_price
              FROM Products
              WHERE (product_id, change_date) IN (SELECT product_id, MAX(change_date) AS last_date
FROM Products
WHERE change_date <= '2019-08-16'
GROUP BY product_id)) AS T2
ON T1.product_id = T2.product_id;
