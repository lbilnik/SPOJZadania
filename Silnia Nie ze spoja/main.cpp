#include <iostream>
#include <cstdlib>
#include <math.h>

/*
int main()
{
    int n, t;
    long long silnia = 1;
    cin>>t;
    for (int j=0;j<t;j++)
    {
    cout<<"Podaj n: ";
    cin>>n;

    for (int i=n;i>1;i--)
        {
            silnia*=i;
        }
        cout<<silnia/10<<" "<<silnia%10<<endl;
    //cout<<n<<"! = "<<silnia<<endl;
    }
    return 0;
}
*/

using namespace std;

int main()
{
    int ile_r, ostatnia, przedostatnia;
    long int n;
    long long int wynik = 1;

    cin>>ile_r;
    for (int i=0; i<ile_r; i++)
    {
        cin>>n;
        wynik=1;

        for (int j=1; j<=n; j++)
        {
            wynik=wynik*j;
        }
        cout<<"Silnia "<<wynik<<endl;
        if (n<4)
        {
            cout<<"0"<<" "<<wynik<<endl;
        }
        else if (wynik>=1000000)
        {
            cout<<"poza zakresem"<<endl;
            break;
        }
        else
        {
            ostatnia = (wynik%10);
            przedostatnia = ((wynik-ostatnia)/10)%10;
            cout<<przedostatnia<<" "<<ostatnia<<endl;

        }
    }
    return 0;
}


