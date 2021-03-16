Check Factors
Write a function that returns true if all integers in an array are factors of a number, and false otherwise.
Examples
checkFactors([2, 3, 4], 12) ➞ true
// Since 2, 3, and 4 are all factors of 12.
checkFactors([1, 2, 3, 8], 12) ➞ false
// 8 is not a factor of 12.
-----------------------------------------------------
bool checkFactors(std::vector<int> factors, int num) {
for(int a=0;a<factors.size();a++)
	if(factors[a] % num ==0)
		return true;
}
--------------------------------------------------------
foreach:
bool checkFactors(std::vector<int> factors, int num) {
	for (auto i : factors)
		if (num % i != 0)
			return false;
	return true;
}