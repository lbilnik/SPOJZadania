#include <iostream>
//poprawne
using namespace std;

int main()
{

    int ile_r, n;

    cin>>ile_r;
    for (int i=0; i<ile_r; i++)
    {
    cin>>n;
        if (n==0)
        {
        cout<<0<<" "<<1<<endl;
        }
        if (n==1)
        {
        cout<<0<<" "<<1<<endl;
        }
        if (n==2)
        {
        cout<<0<<" "<<2<<endl;
        }
        if (n==3)
        {
        cout<<0<<" "<<6<<endl;
        }
        if (n==4)
        {
        cout<<2<<" "<<4<<endl;
        }
        if (n==5)
        {
        cout<<2<<" "<<0<<endl;
        }
        if (n==6)
        {
        cout<<2<<" "<<0<<endl;
        }
        if (n==7)
        {
        cout<<4<<" "<<0<<endl;
        }
        if (n==8)
        {
        cout<<2<<" "<<0<<endl;
        }
        if (n==9)
        {
        cout<<8<<" "<<0<<endl;
        }
        else if (n>9)
        {
        cout<<0<<" "<<0<<endl;
        }
    }
}

/*
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    int ile_r, ostatnia, przedostatnia;
    int n;
    unsigned long long wynik;

    cin>>ile_r;
    for (int i=0; i<ile_r; i++)
    {
        cin>>n;
        wynik=1;

        if (n<=65)
        {
            for (int j=1; j<=n; j++)
        {
            wynik=wynik*j;
        }
            cout<<wynik<<endl;
            ostatnia = wynik%10;
            przedostatnia = ((wynik-ostatnia)/10)%10;
            cout<<przedostatnia<<" "<<ostatnia<<endl;
        }
        else
        {
            for (int j=1; j<=n; j++)
        {
            wynik=(wynik*j)-(n);
        }
            cout<<wynik<<endl;
            ostatnia = wynik%10;
            przedostatnia = ((wynik-ostatnia)/10)%10;
            cout<<przedostatnia<<" "<<ostatnia<<endl;
        }
    }
    return 0;
}
*/
