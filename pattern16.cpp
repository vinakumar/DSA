#include <iostream>
using namespace std;

// ****
// ***
// **
// *
int main()
{
    int row ;
    cin>>row;
    int i = row;
    while(i >0)
    {
        int j = i;
        while(j>0)
        {
            cout<<"*";
            j--;
        }
        cout<<endl;

        i--;
    }
}