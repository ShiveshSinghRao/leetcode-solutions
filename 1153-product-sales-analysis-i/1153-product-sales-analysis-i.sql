# Write your MySQL query statement below
select c.product_name, s.year, s.price
from sales s , product c
where s.product_id=c.product_id;