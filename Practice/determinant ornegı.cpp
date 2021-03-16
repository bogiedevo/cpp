Create a function to calculate the determinant of a 2 * 2 matrix. The determinant of the following matrix is: ad - bc:

[[a, b], [c, d]]
Examples
calc_determinant([
  [1, 2],
  [3, 4]
]) ➞ -2
------------------------
int calc_determinant(std::vector<std::vector<int>> arr) {
	return arr[0][0]*arr[1][1] - arr[0][1]*arr[1][0];
}