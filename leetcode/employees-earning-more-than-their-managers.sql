# Write your MySQL query statement below



select ea.name as Employee from employee ea 
    where ea.salary > (select eb.salary from employee eb where eb.id = ea.managerId);


