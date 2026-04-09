#include <iostream>
using namespace std;

// 1234554321
// 1234**4321
// 123****321
// 12******21
// 1********1
int main()
{   
    int row = 1;
    int n;
    cin>>n;
    while(row<=n)
    {
        int col = 1;
        // int start = n-row +1;
        // while(start)
        // {
        //     cout<<row;
        //     start--;
        // }
        while(col<=n-row+1)
        {
            cout<<col;
            col = col +1;
        }
        int start = row -1;
        while(start)
        {
            cout<<"*";
            start--;
        }
        int start1 = row - 1;

        while(start1)
        {
            cout<<"*";
            start1--;
        }
        int col2 = 1;

        while(col2<=n-row+1)
        {
            cout<<n-row-col2+2;
            col2 = col2+1;
        }
        cout<<endl;
        row = row +1;
    }

}