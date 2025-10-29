Select c.name as Customers
From Customers as c
Left outer join Orders as o
ON c.id = o.customerId
Where o.customerId is NULL;
