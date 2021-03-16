Burrrrrrrp
Create a function that returns the string "Burp" with the amount of "r's" determined by the input parameters of the function.

Examples
longBurp(3) ➞ "Burrrp"

longBurp(5) ➞ "Burrrrrp"

longBurp(9) ➞ "Burrrrrrrrrp"
////////////////////////////////////////////////
string longBurp(int num) {
    string sonuc="Bu";
for(int i=0;i < num;i++){
    sonuc.push_back('r');
}
sonuc.push_back('p');
return sonuc;
}