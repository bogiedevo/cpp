Add the Index
Given an array of numbers, create a function which returns the same array but with each element's index in the array added to itself. This means you add 0 to the number at index 0, add 1 to the number at index 1, etc...

Examples
addIndexes([0, 0, 0, 0, 0]) ➞ [0, 1, 2, 3, 4]
----------------------------------------------------
using namespace std;
vector<int> addIndexes(vector<int> arr) {
	for (int i=0;i<arr.size(); i++){arr[i]+=i;}   // i yi vector sizeına kadar arttırıyo ardından kısaca i yi iyle topluyo :
  	return arr;
}