#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool degerbul(int k,vector<int> array){
    sort(array.begin(), array.end());
    int i=0;
    int toplam;
    int j=array.size()-1;
   
    while(i != j ){
        toplam = array[i] + array[j];
        if(toplam > k){
            j--;
        }
        else if(toplam < k){
            i++;
        }
        else if(toplam ==k){
            return true;
        }
        }
return false;
}
int main()
{
vector<int> array={1,3,10,4};
int k =17;
cout << degerbul(k,array)<<endl;
    return 0;
}