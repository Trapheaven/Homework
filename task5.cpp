#include <iostream>

using namespace std;

int main()
{
     int Num;
    cout << "Enter a number: ";
    cin >> Num;
    switch (Num)
    {
    case 1 : case 2 : case 3 :
        cout << Num*10 << endl;
        break;
    case 4 : case 5 : case 6 :
        cout << Num*100 << endl;
        break;
    case 7 : case 8 : case 9 :
        cout << Num*1000 << endl;
        break;
    default :
        cout << "Invalid input" << endl;
    }

    return 0;
}
