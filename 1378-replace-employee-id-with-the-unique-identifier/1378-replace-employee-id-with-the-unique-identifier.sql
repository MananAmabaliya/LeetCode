/* Write your T-SQL query statement below */
select el.unique_id,e.name
from Employees e
left join EmployeeUNI el
on e.id=el.id 

