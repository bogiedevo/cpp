int main()
{
  string a = "bOgIEeEeE";
  string b= "BOGIE";
  char c[]="";
  for(int i =0;i < a.length();i++){
      if(islower(a[i])){
          a[i] = a[i] -32;
      }
  }
  cout << a << endl;

    return 0;
}