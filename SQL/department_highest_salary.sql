Select d.name as Department, e.name as Employee, e.Salary as Salary
From Employee as e
Left join Department as d
ON e.departmentId = d.id
Where (d.id,e.Salary) in (Select departmentId, max(Salary) From Employee Group By departmentId);