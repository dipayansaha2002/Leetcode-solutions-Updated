# Write your MySQL query statement below
SELECT e2.employee_id, 
       e2.name, 
       COUNT(e1.employee_id) AS reports_count, 
       ROUND(AVG(e1.age)) AS average_age
FROM employees e1 JOIN employees e2
ON e1.reports_to = e2.employee_id
GROUP BY employee_id
ORDER BY employee_id;