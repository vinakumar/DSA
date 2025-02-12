#include <iostream>
using namespace std;

// D
// CD
// BCD
// ABCD
int main()
{
    int n;
    int row = 1;
    cin >> n;

    while (row <= n)
    {
        int col = 1;
        char ch = 'A' + n - row;
        while (col <= row)
        {
            cout << ch;
            ch = ch + 1;
            col = col + 1;
        }
        cout << endl;
        row = row + 1;
    }
}