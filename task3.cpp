#include <iostream>

using namespace std;

int main()
{
    int num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
    cout << ((num1+num2)%2==0 ? (num1+num2)*2 : (num1+num2)/2 );

    return 0;
}
