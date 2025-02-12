#include <iostream>
using namespace std;

void checkCharacterType(char ch)
{
    if(ch >= 'a' && ch<= 'z')
    {
        cout<<ch<<" is lowercase letter.\n";
    }
    else if (ch >= 'A' && ch<= 'Z')
    {
        cout<<ch<<" is a uppercase letter.\n";
    }
    else if(ch >= '0' && ch <= '9')
    {
        cout<<ch<<" is a digit.\n";
    }
    else
    {
        cout<<ch<<" is a special character.\n";
    }
    
}
int main() {
    char ch;
    cout<<"Enter any character.\n";
    cin>>ch;
    checkCharacterType(ch);
    return 0; 

}