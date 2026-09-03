WITH RankedOrders AS (
    SELECT customer_number,
           RANK() OVER (ORDER BY COUNT(order_number) DESC) as ranking
    FROM Orders
    GROUP BY customer_number
)
SELECT customer_number
FROM RankedOrders
WHERE ranking = 1;