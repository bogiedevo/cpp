verilen sayıların a , b : bnin a dan buyuk olması ve ikisini harfle ekrana yadıran ve tekmi çiftmi onuda yazdıran program
::::::::::::::::::::::::::::::::
#include <iostream>
#include <cstdio>
using namespace std;
const char *sayilar []{"one" , "two" , "three" , "four" , "five" , "six" , "seven" , "eight" , "nine"};
int main() {
    int a;
    int b;
    cin >> a;
    cin >> b;
    while( b >= a){
        if((a >= 1) && (a <=9)){
            cout << sayilar[a-1] << endl;
        }
        else{
            if (a%2==0) {
            cout << "even" << endl;
            }
            else {
            cout << "odd"<< endl;
            } 
        }
        ++a;
    }
    // Complete the code.
    return 0;
}