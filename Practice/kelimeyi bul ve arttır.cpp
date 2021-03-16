Find the Index
Create a function that takes an array and a string as arguments and return the index of the string.
Examples
findIndex(["hi", "edabit", "fgh", "abc"], "fgh") ➞ 2
findIndex(["Red", "blue", "Blue", "Green"], "blue") ➞ 1
findIndex(["a", "g", "y", "d"], "d") ➞ 3
----------------------------------------------------------------------------------
using namespace std;
int findIndex(vector<string> arr, string str) {
	int base=0;
	while(str != arr[base])    // kelime vectordekı sayı olana kadar base i arttır
		base++;
	return base;
}