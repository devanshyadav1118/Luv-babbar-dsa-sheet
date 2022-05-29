#include <iostream>
using namespace std;
int main()
{ // two pointer
  int arr[5] = {1, 2, 3, 4, 5};
  int n = 5;
  int s = 0;
  int e = n - 1;
  while (s < e)
  {
    swap(arr[s], arr[e]);
    s++;
    e--;
  }

  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }

  return 0;
}
// NO OF METHODS 
//  two pointer approch
// for loop from n-1 to 0