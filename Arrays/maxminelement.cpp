#include <iostream>
using namespace std;
int main()
{
    int arr[] = {1000, 11, 445, 1, 330, 3000};
    int n = 6;
    int maxi = INT_MIN;
    int mini = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        mini = min(mini, arr[i]);
        maxi = max(maxi, arr[i]);
    }
    cout << maxi << " " << mini;

    return 0;
}
// traverse the array and compare i and j=i+1   (compare using IF/ELSE statement)
// using max and min function