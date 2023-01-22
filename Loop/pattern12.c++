#include <iostream>
using namespace std;

int main()
{
    int n = 3;
    int i = 1;
    char start = 'A';
    while (i <= n)
    {
        int j = 1;

        while (j <= n)
        {

            /* code */
            cout << start;
            start = start + 1;
            j = j + 1;
        }

        /* code */
        cout << endl;

        i = i + 1;
    }
}