#include <iostream>

using namespace std;

int main()
{
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    cout << ((a > b) ? (a > 0 ? a : a*(-1)) : (b > 0 ? b : b*(-1))) ;

    return 0;
}
