Create a function that takes a number (from 1 to 12) and returns its corresponding month name as a string.
For example, if you're given 3 as input, your function should return "March", because March is the 3rd month.
-------------------------------------------------------------------------
std::string monthName(int num) {
	std::string months[12] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October","November","December"};
	return months[num-1];       // girilen sayıyıdan bir çıkarıp arraye uyguluyo 12 girdiği zaman 11 olup 11 index degerıne gıdıyor oda december oluyor:
    -------------------------