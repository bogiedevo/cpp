Create a function which returns the number of true values there are in an array.
Examples
countTrue({true, false, false, true, false}) ➞ 2
countTrue({false, false, false, false}) ➞ 0
countTrue({}) ➞ 0
-------------------------------------------------
benim yaptıgım:
int countTrue( std::vector<bool> arr ) {
	int b=0;
	for(int a=0 ;a <arr.size();a++)
	{
		if(a == 1 ){
			b=b+1;
		}
	}
	std::cout << b ;
}

----------------------------------------------------
:D