-- Write your PostgreSQL query statement below
-- case 
--     select * from 
--     when id %2 == 1 and description !='boring'  then

select * from Cinema where (id %2) = 1 and description != 'boring' order by rating desc; 