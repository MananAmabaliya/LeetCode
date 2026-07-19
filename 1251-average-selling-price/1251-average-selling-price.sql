/* Write your T-SQL query statement below */
SELECT
    p.product_id,
    ISNULL(ROUND( 1.0 * SUM(p.price * U.units) / SUM(U.units),2),0) AS average_price
FROM Prices p
left JOIN UnitsSold u
ON p.product_id = u.product_id and purchase_date BETWEEN start_date AND end_date
GROUP BY p.product_id;