#include <iostream>
using namespace std;

int main() 
{
    int n, t1 = 0, t2 = 1, nT = 0;

    cout << "Enter the number of terms: ";
    cin >> n;

    cout << "The Fibonacci Series is: ";

    for (int i = 1; i <= n; ++i) 
    {
        if(i == 1) 
        {
            cout << t1 << ", ";
            continue;
        }
        if(i == 2) 
        {
            cout << t2 << ", ";
            continue;
        }

        nT = t1 + t2;
        t1 = t2;
        t2 = nT;
        
        cout << nT << ", ";
    }
    return 0;
}
