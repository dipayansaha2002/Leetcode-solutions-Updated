# Write your MySQL query statement below
SELECT class
FROM
    (SELECT class, COUNT(DISTINCT student) AS num
    FROM courses
    GROUP BY class) AS temp
WHERE num >= 5;