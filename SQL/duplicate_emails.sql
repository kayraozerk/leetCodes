Select Person.email
From Person
Inner Join Person as Person2
On Person.id != Person2.id AND Person.email = Person2.email
Group by Person.email;