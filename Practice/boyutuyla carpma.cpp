Multiply by Length
Create a function to multiply all of the values in an array by the amount of values in the given array.
Examples
multiplyByLength([2, 3, 1, 0]) ➞ [8, 12, 4, 0]
multiplyByLength([4, 1, 1]) ➞ ([12, 3, 3])
------------------------------------------------
std::vector<int> multiplyByLength(std::vector<int> arr) {
	for(int i=0;i<arr.size();i++){
		arr[i] *= arr.size();
	}
	return arr;
}