#include <iostream>

using namespace std;

int main()
{
   int a, b, c, d, e;
   cout << "Enter five numbers: ";
   cin >> a >> b >> c >> d >> e;
   int max = a;
   if (b > max) max = b;
   if (c > max) max = c;
   if (d > max) max = d;
   if (e > max) max = e;
   cout << "Max number : " << max << endl;
    return 0;
}
