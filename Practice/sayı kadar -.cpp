Convert Number to String of Dashes
Create a function that takes a number (from 1 - 60) and returns a corresponding string of hyphens.
Examples
Go(1) ➞ "-"
Go(5) ➞ "-----"
---------------------------------------------------------:d-
std::string Go(int num) {
	std::string base = "-";
	for(int i=1;i<num;i++)
		base += "-";
	return base;
}
-----------------------------------------------------------
std::string Go(int num)
{
	return std::string(num, '-');
}