
#include <iostream>
int main()
{
	using namespace std;
	int n, first, second, third, forth, fifth, sum;
	n = 23462;
	/*Now we will take out each digit of this number and then finally add the first and the second last digits*/
	first = n/10000;     //first digit
	n = n%10000;
	
	second = n/1000;     //second digit
	n = n%1000;
	
	third = n/100;       //third digit
	n = n%100;
	
	forth = n/10;        //forth digit
	fifth = n%10;        //fifth digit
	
	sum = first + forth;
	cout << "sum : " << sum << endl;
	return 0;
}