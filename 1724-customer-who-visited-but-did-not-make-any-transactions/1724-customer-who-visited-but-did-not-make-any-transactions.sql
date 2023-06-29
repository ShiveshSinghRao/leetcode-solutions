# Write your MySQL query statement below
SELECT a.customer_id, COUNT(a.customer_id) AS count_no_trans
FROM visits a
LEFT JOIN Transactions b ON a.visit_id = b.visit_id
WHERE b.visit_id IS NULL
GROUP BY a.customer_id;
