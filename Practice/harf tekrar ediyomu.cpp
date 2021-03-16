Double Letters
Create a function that takes a word and returns true if the word has two consecutive identical letters.
Examples
double_letters("loop") ➞ true
double_letters("yummy") ➞ true
double_letters("orange") ➞ false
----------------------------------------------
bool double_letters(std::string word) {
 for(int i=0;i<word.length();i++){
	 if(word[i]==word[i+1])  -----------------(keen)=k -> e =x e -> e = ok gibi
		 return true;
 }
}
---------------------------------------------------
anlamadım:
bool double_letters(const std::string &word)
{
	return std::adjacent_find(word.begin(), word.end()) != word.end();
}