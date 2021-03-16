#include <iostream>
#include <vector>
#include <ctime>
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
bool kisa(int degerr,vector <int> deger){
    sort(deger.begin(),deger.end(),greater<int>());   //// büyükten küçüğe sıralıyor.
    int i=0;
    int j= deger.size()-1;      // j ye vectorun son degerını atıyoruz  
    int cikan;
    while(i!=j){     // i ve je ortada bulusmadıgı surece yanı eşit olmadıgı surece devam etsın istiyoruz
        cikan = deger[i] - deger[j];             // vectorun ilk ve son degerını topluyoruz cikan a atıyoruz
        if (cikan < degerr){                   // eger cikan deger degerr den küçükse sağa kaydırıyoruz yani i++;
            i++;
        } 
        else if (cikan > degerr){              // eer cıkan deger büyükse sağa
            j--;
        }
        else if(cikan == degerr) {              // eger deger varsa return true
            return true;
        }
    }
    return false;
}
int main()
{
    vector <int> array={10,3,7,5};
    int k = 3;
    cout << kisa(k,array) ;
    return 0;
}