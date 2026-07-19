/* Write your T-SQL query statement below */
SELECT P.project_id ,
    ISNULL(
        ROUND(1.0 * SUM(E.experience_years)/COUNT(P.project_id),2),0) AS average_years 
FROM Project P
LEFT JOIN Employee E
ON P.employee_id = E.employee_id 
GROUP BY P.project_id