#include <iostream>
using namespace std;

// ABCD
// EFGH
// IJKL
// MNOP

int main()
{
    int n;
    int row = 1;
    cin>>n;
    char ch = 'A';
    while(row<=n)
    {
        int col = 1;
        while(col<=n)
        {
            cout<<ch;
            ch = ch +1;
            col = col +1;
        }
        cout<<endl;
        row = row +1;
    }
}