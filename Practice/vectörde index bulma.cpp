Create a function that finds the index of the first occurence of a given item.
Examples
search([1, 5, 3], 3) ➞ 2            --If the item is not present, return -1.
search([1, 9, 9], 9) ➞ 1
search([1, 2, 3], 4) ➞ -1
---------------------------------------
int search(std::vector<int> arr, int item) {
	for(int i = 0; i < arr.size(); i++){
		if(arr[i] == item){
			return i;
		}
	}
	return -1;
}