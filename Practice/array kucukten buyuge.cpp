#include <iostream>
     #include <algorithm>
     #include <functional>
     #include <iterator>
     using namespace std;

     int main() {
          int liste[] = { 7, 12, 3, 1, 8, 2, 4 }; 
          sort (liste, liste+7); 
          copy(liste, liste+7, ostream_iterator<int>(cout," "));
          cout << endl;
     }

     // : 1 2 3 4 7 8 12