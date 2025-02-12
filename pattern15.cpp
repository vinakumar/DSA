#include <iostream>
using namespace std;

int main()
{
    int n;
    int row = 1;
    cin>>n;
    while(row<=n)
    {
        // print spaces
        int col = 1;
        int space = n - row;
        while(space)
        {
            cout<<" ";
            space = space - 1;
        }
        while(col<=row)
        {
            cout<<"*";
            col = col +1;
        }
        cout<<endl;
        row = row +1;
    }
}