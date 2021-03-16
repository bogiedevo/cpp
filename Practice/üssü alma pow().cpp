To the Power of _____
Create a function that takes a base number and an exponent number and returns the calculation.
Examples
calculateExponent(5, 5) ➞ 3125
---------------
double calculateExponent(double num1, double num2) {
	double retNum=1;                      
	for(int i=0;i<num2;++i)
	{
	retNum*=	num1;                        // 1.4 =4 = 4.4=16 ............
	}
	return retNum;
}
------kolayca------------
return(pow(num1,num2));