--*****************************
--*  175. Combine Two Tables  *
--*****************************

SELECT FirstName, LastName, City, State FROM Person LEFT JOIN Address ON Person.PersonID = Address.PersonID;


--********************************
--*  176. Second Highest Salary  *
--********************************

(SELECT
	(
		SELECT DISTINCT Salary FROM Employee ORDER BY Salary DESC LIMIT 1 OFFSET 1
	)
AS SecondHighestSalary
);
