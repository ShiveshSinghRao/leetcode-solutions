# Write your MySQL query statement below
SELECT emp.name, b.bonus
FROM employee emp
LEFT JOIN bonus b ON emp.empid = b.empid
WHERE b.bonus < 1000 OR b.bonus IS NULL;
