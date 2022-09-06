#include <iostream>
using namespace std;

int main() {

  int i, x;
  float arr[100];

  cout << "Enter total number of elements: ";
  cin >> x;
  cout << endl;

  // NUmber entered by the user 
  for(i = 0; i < x; ++i) {
    cout << "Enter Number " << i + 1 << " : ";
    cin >> arr[i];
  }

  // for storing the largest number 
  for(i = 1;i < x; ++i) {

    // < to find the largest
    if(arr[0] < arr[i])
      arr[0] = arr[i];
  }

  cout << endl << "Largest element = " << arr[0];

  return 0;
}