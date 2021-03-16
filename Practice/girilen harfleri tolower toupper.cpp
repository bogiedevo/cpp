int main()
{
string string;
cin >> string ;

for(int i =0;i <= string.size();i++){
    if(islower(string[i])){
       string[i] = toupper(string[i]);
    }
    else{
        string[i] =tolower(string[i]);
    }
}
cout << string << endl;
    return 0;
}