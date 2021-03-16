Count Instances of a Character in a String
Create a function that takes a character and a string as arguments and returns the number of times the character is found in the string.
Examples
charCount('a', "edabit") ➞ 1
charCount('c', "Chamber of secrets") ➞ 1
------------------------------------------------------------------------------------------
benimki:
int charCount(char myChar, std::string str) {
int a;
	for (int i=0;i >= str.length();i++){
		if(myChar == str[i] ){
			a+=a;
		}
		return a;
	}
		
}
-----------------------------------------------------------------------
:D
int charCount(char myChar, std::string str) {
	return std::count(str.begin(),str.end(),myChar);
}
---------------------------------------------------------------------------
	int count = 0;

	for (char c: str) {
		if (c == myChar) count++;
	}
	return count;
    
