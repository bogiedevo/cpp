Even Number Generator
Create a function that finds all even numbers from 1 to the given number.
Examples
findEvenNums(8) ➞ [2, 4, 6, 8]
findEvenNums(4) ➞ [2, 4]
-----------------------------------------
std::vector<int> findEvenNums(int num) {
	std::vector<int> sayilar;
	for(int i=1;i<=num;i++)
		if(i % 2==0)
		sayilar.push_back(i);
return  sayilar;		
}
--------------------------------------------------------
std::vector<int> findEvenNums(int num) {
	std::vector<int> ret;
	for(int i = 2; i <= num; i += 2)
		ret.push_back(i);
	return ret;
}