# Write your MySQL query statement below
select a.machine_id,round(AVG(b.timestamp-a.timestamp),3) as processing_time
from Activity a JOIN Activity b on a.machine_id =b.machine_id and a.process_id = b.process_id
where a.activity_type='start' And b.activity_type='end'
group by a.machine_id;