--***************************
--*  182. Duplicate Emails  *
--***************************

SELECT Email FROM Person GROUP BY Email HAVING COUNT(*) > 1;

--************************************
--*  184. Department Highest Salary  *
--************************************

SELECT D.Name AS "Department",E.Name AS "Employee",Salary FROM Employee E INNER JOIN Department D ON E.DepartmentId=D.Id WHERE Salary IN (SELECT MAX(Salary) FROM Employee E2 WHERE E2.DepartmentId=E.DepartmentId);
