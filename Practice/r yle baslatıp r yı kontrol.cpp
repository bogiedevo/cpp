Strange Pair
A pair of strings form a strange pair if both of the following are true:

The 1st string's first letter = 2nd string's last letter.
The 1st string's last letter = 2nd string's first letter.
Create a function that returns true if a pair of strings constitutes a strange pair, and false otherwise.

Examples
isStrangePair("ratio", "orator") ➞ true
// "ratio" ends with "o" and "orator" starts with "o".
// "ratio" starts with "r" and "orator" ends with "r".
---------------------------------------------------
bool isStrangePair(std::string str1, std::string str2) {
if(str1[0]==str2.back() && str1.back() ==str2[0])
	return true;
	else
		return false;
}
kolay:
return str1.front() == str2.back() && str1.back() == str2.front();