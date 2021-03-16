Word Numbers!
Create a function that returns a number, based on the string provided. Here is a list of all digits (if you are non english speaker):

String	Number
"one"	1
"two"	2
------------------------------------------
int word(std::string s){
	std::vector<std::string> arr={"zero","one","two","three","four","five","six","seven","eight","nine"};
	for(int i=0;i<arr.size();++i)
	if(s==arr[i])
	return i;
	return 0;
}