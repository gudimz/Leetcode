SELECT Departments.Name FROM
Departments JOIN Employee ON Departments.Id = Employee.ExtidDepartments
GROUP BY Departments.Name
HAVING COUNT(*) < 5;