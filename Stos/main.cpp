#include <iostream>
using namespace std;

int main()
{
    int a,b=0,tab[10];
    char znak;

    while (cin>>znak)
    {
        if(znak == '+')
        {
            cin>>a;

            if(b<10)
            {
                tab[b]=a;
                cout<<":)"<<'\n';
                b++;
            }
            else
            {
                cout<<":("<<'\n';
            }
        }
        if (znak == '-')
        {
            if(b<=10 && b>0)
            {
                cout<< tab[b-1]<<'\n';
                b--;
            }
            else
                cout<<":("<<'\n';
        }
    }
    return 0;
}
