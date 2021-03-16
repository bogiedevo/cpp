Create a function that takes any nonnegative number as an argument and return it with it's digits in descending order. Descending order is when you sort from highest to lowest.

Examples
sortDescending(123) ➞ 321

sortDescending(2619805) ➞ 9865210

sortDescending(73065) ➞ 76530


//////////////////////////////////////
long long sortDescending(long long num) {
  auto s = std::to_string(num);
  sort(s.rbegin(), s.rend());                //rbegin rend
  return std::stoi(s, nullptr);              // stoi stringi inte çeviriyo 
}

//////////////////////////////////

long long sortDescending(long long num) {
	std::string s = std::to_string(num);

	sort(s.begin(), s.end(), std::greater<char>());

	long long x = stoll (s);
	
	return x;
}