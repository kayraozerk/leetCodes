Delete p1
From Person p1, Person q
Where p1.id > q.id AND p1.email = q.email;