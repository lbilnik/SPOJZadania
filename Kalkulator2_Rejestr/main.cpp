#include <iostream>

using namespace std;

int a=0,b=0,c=0,d=10;

int main()
{
    char x;
    int *tab;
    tab = new int [d];
    while (cin>>x)
{
    cin>>a>>b;
    switch (x)
    {
        case 'z':
        tab[a]=b;
        break;

        case '+':
        c=tab[a]+tab[b];
        cout<<c<<endl;
        break;

        case '-':
        c=tab[a]-tab[b];
        cout<<c<<endl;
        break;

        case '*':
        c=tab[a]*tab[b];
        cout<<c<<endl;
        break;

        case '/':
        c=tab[a]/tab[b];
        cout<<c<<endl;
        break;

        case '%':
        c=tab[a]%tab[b];
        cout<<c<<endl;
        break;
    }
}
    delete [] tab;
    return 0;
}
