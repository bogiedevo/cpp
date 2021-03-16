std::string getMiddle(std::string str) {
	return str.substr((str.size()-1)/2, (str.size()+1)%2+1);
}