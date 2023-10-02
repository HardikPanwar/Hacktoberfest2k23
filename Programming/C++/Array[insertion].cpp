#include <iostream>
using namespace std;

 int main() {
 
   int arr[100], size, pos, val, i, temp;
 
   cout << "Enter the size of an array (MAX 100) \n";
   cin  >> size;
   cout << "Enter an elements in an array \n";
   for(i = 0; i < size; i++) {
      cin >> arr[i];
   }
 
   cout << "Enter a position\n";
   cin  >> pos;
 
   cout << "Enter a value to insert\n";
   cin  >> val;
 
   for(i = size; i >= pos; i--) {
      arr[i] = arr[i-1];
   }
 
   size++;
   arr[pos] = val;
 
   cout << "Array after inserting a new value \n";
 
   for(i = 0; i < size; i++) {
      cout << arr[i] << " ";
   }
 
 
   return 0;
 }
