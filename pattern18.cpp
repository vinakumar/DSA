#include <iostream>
using namespace std;

int main()
{
    int row = 1;
    int n;
    cin >> n;
    while (row <= n)
    {
        // Print space
        int space = n - row;
        while (space)
        {
            cout << " ";
            space--;
        }

        // Print triangle
        int col = 1;
        while (col <= row)
        {
            cout << col;
            col = col + 1;
        }

        // Print 3rd triangle
        int start = row -1;
        while(start)
        {
            cout<<start;
            start--;
        }
        cout<<endl;
        row = row +1;
    }
}