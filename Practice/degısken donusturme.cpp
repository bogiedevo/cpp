Değişken Dönüştürme
#include <sstream> //String kütüphanemiz; C++ inlude edilmeden string kullanılamaz
#include <iostream> //derleme kütüphanesi
#include <conio.h>  // genellikle konsolu dondurmak - durdurmak için kullanılır
using namespace std; 
int main() 
{ 
int y = 123 ; 
stringstream x ; //bir stringstream tanımladık
x << y <<endl;  //y yi x e aktardırk
string deisken = x.str(); //degisken adında bir string  değişken tanımladık ve streamımızı içine attık
cout <<"sayı = "<<deisken<<endl;  // sonucu yazdırdık ....
_getch(); //Konsolu beklettik 
} 