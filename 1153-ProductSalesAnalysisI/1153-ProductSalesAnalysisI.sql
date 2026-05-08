-- Last updated: 08/05/2026, 09:28:28
# Write your MySQL query statement below

select product_name, year, price from Sales left join Product on Sales.product_id= Product.product_id;
