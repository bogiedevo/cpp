Create a function that accepts an array of numbers and returns the last number in the array.

Examples
getLastItem([1, 2, 3], 3) ➞ 3

getLastItem([0], 1) ➞ 0
--------------------------------------------
using namespace std; 
int main() 
{ 
    int arr[] = { 4, 5, 7, 13, 25, 65, 98 }; 
    int f, l, n; 
    n = sizeof(arr) / sizeof(arr[0]);           // sayının uzunluğunu alıyor 
    l = arr[n - 1];                             // son elemanı buluyor
    cout << "Last element: " << l << endl; 
    return 0; 
}
fonction örnek:
////////////////////////////////////////////////////////////7
int printFirstLast(int arr[], int n) 
{ 
    int f = arr[0]; 
    int l = arr[n - 1]; 
    cout << "First element: " << f << endl; 
    cout << "Last element: " << l << endl; 
} 
  
int main() 
{ 
    int arr[] = { 4, 5, 7, 13, 25, 65, 98 }; 
    int n = sizeof(arr) / sizeof(arr[0]); 
    printFirstLast(arr, n); 
    return 0; 
} 
///////////////////////////////////////////////////////////////