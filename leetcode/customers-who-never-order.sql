# Write your MySQL query statement below

select c.name as Customers from customers c where id
    not in (select o.customerId from Orders o);
