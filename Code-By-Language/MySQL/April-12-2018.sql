/****************************************************
** 181. Employees Earning More Than Their Managers **
*****************************************************/
SELECT E1.Name AS "Employee" FROM Employee E1 LEFT JOIN Employee E2 ON E1.ManagerId=E2.Id WHERE E1.salary > E2.salary;
