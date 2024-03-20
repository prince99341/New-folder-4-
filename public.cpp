#include <iostream>
#include<math.h>
using namespace std;
int main()
{
    int n, i;
    cout << "entyer n: ";
    cin >> n;
    for (i = 0; i <= n; i++)
    {
        if (pow(2,i)== n)
        {
            cout << n << "yes"<<endl;
            break;
        }
        if (pow(2,i) > n)
        {
            cout << n << " no"<<endl;
            break;
        }
    }
    return 0;
}