/* Write your T-SQL query statement below */
SELECT E.name,B.bonus
FROM Employee E
LEFT JOIN  Bonus B
ON E.empId = B.empId 
WHERE B.empId IS NULL OR B.bonus < 1000