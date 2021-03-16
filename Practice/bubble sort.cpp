Annotate
std::string alphabetSoup(std::string str) 
{
  int temp;
   for (int i = 0; i < str.size()-1; i++) 
       for (int j = 0; j < str.size()-i-1; j++) 
           if (str[j] > str[j+1])
           {
             temp = str[j];
  					 str[j] = str[j+1];
  					 str[j+1] = temp;
						}
  return str;
}