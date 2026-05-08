-- Last updated: 08/05/2026, 09:28:15
# Write your MySQL query statement below

select EmployeeUNI.unique_id, Employees.name from Employees left join EmployeeUNI on EmployeeUNI.id = Employees.id
