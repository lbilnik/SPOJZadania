#include <iostream>

using namespace std;

int main()
{
    int a,b,c;
    char x;

    while (cin>>x)
{
    cin>>a>>b;
    switch (x)
    {
        case '+':
        c=a+b;
        cout<<c<<endl;
        break;

        case '-':
        c=a-b;
        cout<<c<<endl;
        break;

        case '*':
        c=a*b;
        cout<<c<<endl;
        break;

        case '/':
        c=a/b;
        cout<<c<<endl;
        break;

        case '%':
        c=a%b;
        cout<<c<<endl;
        break;
    }
}
    return 0;
}
