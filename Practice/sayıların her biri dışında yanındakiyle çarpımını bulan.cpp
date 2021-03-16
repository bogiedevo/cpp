vector <int> deger(vector <int> degerler){
    vector <int> sonuc;     //sonucu atayabileceğimiz bir vector olusturuyoruz
    int carpim = 1;         // etkisiz eleman olsuturuyoruz
    for (int sayi:degerler){      //degerler vektorunun en basından baslayıp sonuna kadar teker teker hepsini çarpıyoruz carptıklarımızı carpim a atıyoruz
        carpim*=sayi;
    }
    for(int sayi:degerler){         //yine degerler vektoru icinde sayi donduruyoruz her sayıyı once carpim dan cıkan sonucla her degerı bölüyoruz sonuc vektörüne
                                     atıyoruz
        sonuc.push_back(carpim/sayi);
    }
    return sonuc;
}
int main()
{
    vector <int> array={1,2,3,4,5};
    vector <int> sonuc;
    sonuc = deger(array);               //degerleri sonuc vektorune atadık 
  
    for (int i:sonuc){                    // yazdırdık
        cout << i <<endl;
    }
    
    
    /////////////////////////////////////////////////////////////////////////
    vector <int> kisa (vector <int> degerler){
    vector <int> sonuc(degerler.size(),1);
    int sol=1;
    int sag=1;
    int i=1;
    int j= degerler.size()-2;
    for (;i <degerler.size();i++,j--){
        sol *= degerler[i-1];
        sag *= degerler[j+1];

        sonuc [i] *= sol;
        sonuc [j] *= sag;
    }
    return sonuc;
}