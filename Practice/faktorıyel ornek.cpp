Return the Factorial
Create a function that takes an integer and returns the factorial of that integer. That is, the integer multiplied by all positive lower integers.
Examples
factorial(3) ➞ 6
factorial(5) ➞ 120
--------------------------------------------------------------------
int factorial(int n) {
if (n > 1 )
	return n*factorial(n-1);
}
----------------------------