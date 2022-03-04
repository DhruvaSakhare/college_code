//To accept values in integer array and find addition of all even numbers in the array

#include <iostream>
   
using namespace std;
   
// Function
void evenSum(int arr[], int n)
{
    int even = 0;

    for (int i = 0; i < n; i++) {
        // Loop to find even sum
        if (arr[i] % 2 == 0)
            even = even + arr[i];
    }
   
    cout << "Even sum = " << even;
}
   
int main()
{   
    int n; int arr[n];
    cout << "Enter size of array: ";
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
   
    evenSum(arr, n);
   
    return 0;
}