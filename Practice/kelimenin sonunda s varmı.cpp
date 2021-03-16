Create a function that takes in a word and determines whether or not it is plural.
A plural word is one that ends in "s".

Examples
isPlural("changes") ➞ true

isPlural("change") ➞ false

isPlural("dudes") ➞ true

isPlural("magic") ➞ false
=====================
bool isPlural(std::string word) {
	char s = 's';
	if (word.back()== s)return true; 
  else return false;
}