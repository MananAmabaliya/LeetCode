/* Write your T-SQL query statement below */
SELECT R.contest_id,
   ROUND(100.0* COUNT(*)/(SELECT COUNT(*) FROM USERS),2) AS percentage 
FROM Users U
JOIN Register R
ON U.user_id =R.user_id 
GROUP BY contest_id 
ORDER BY percentage DESC,R.contest_id ASC
