--*****************************
--*  177. Nth Highest Salary  *
--*****************************

CREATE FUNCTION getNthHighestSalary(N INT) RETURNS INT
BEGIN
  DECLARE output INT;
  SET N = N-1;
  SELECT DISTINCT Salary INTO output FROM Employee ORDER BY Salary DESC LIMIT 1 OFFSET N;
  RETURN output;
END
