#include <iostream>

using namespace std;

int main()
{
   int num1, num2, num3;
    cout << "Enter three numbers: ";
    cin >> num1 >> num2 >> num3;
    if (num1 == 0 || num2 == 0 || num3 == 0)
    {
        cout << "0";
    }
    else if ((num1 > 0 && num2 > 0 && num3 > 0) ||
             (num1 < 0 && num2 < 0 && num3 > 0 ) ||
             (num1 > 0 && num2 < 0 && num3 < 0) ||
             (num1 < 0 && num2 > 0 && num3 <0))
    {
        cout << "+";
    }
    else
        {
            cout << "-";
        }


    return 0;
}
