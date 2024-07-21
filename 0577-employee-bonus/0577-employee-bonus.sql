# Write your MySQL query statement below

SELECT e.name, t.bonus FROM Employee AS e
LEFT JOIN Bonus as t ON e.empID = t.empID 
WHERE (t.bonus < 1000) OR (t.bonus IS NULL);