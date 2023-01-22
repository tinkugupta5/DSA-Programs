#include <iostream>
using namespace std;

int main()
{
    int n = 3;
    int i = 1;

    while (i <= n)
    {
        int j = 1;
        while (j <= n)
        {

            /* code */
            char ch = 'A' + j - 1;
            cout << ch;
            j = j + 1;
        }

        cout << endl;
        i = i + 1;
    }
}