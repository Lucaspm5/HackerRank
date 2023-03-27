#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    int d;
    char n[10100];
    while (cin >> d >> n)
    {
        if (d == 0 && strcmp(n, "0"))
            break;

        int len = strlen(n);
        bool leading_zero = true;
        for (int i = 0; i < len; i++)
        {
            if (n[i] == d + '0')
                continue;

            if (n[i] == '0' && leading_zero)

                continue;

            leading_zero = false;
            cout << n[i];
        }
        if (leading_zero)
            cout << 0;

        cout << endl;
    }
    return 0;
}