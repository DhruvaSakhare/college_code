#include <iostream>
using namespace std;

void exc(int,int);

int a=3;
int b=4;
int main()
{
    cout << "Value of a before: " << a << endl;
    //cin >> a;
    cout << "Value of b before: " << b << endl;
    //cin >> b;

    exc(a, b);
    cout << "Value of a now: " << a << endl;
    cout << "Value of b now: " << b << endl;

    return 0;
}

void exc(int, int)
{
    int t;
    t=a;
    a=b;
    b=t;
}
