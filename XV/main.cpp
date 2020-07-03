#include <iostream>
#include <string>

using namespace std;

int main()
{
    int a,b,c,suma,wynik;
    string x;

    while(cin>>x)
    {

        if (x == "0")
        {
            return 0;
            //exit(0);
        }

        wynik=0;
        suma=0;
        c = x.length();
        for (int i=0; i<c; i++)
        {
            suma+=(x[i]-'0');
        }
        if(suma%3==0)
        {
            int liczbap=x[c-1]-'0';

            if(liczbap%5==0)
            {
                wynik=1;
            }
        }
        if(wynik==1)
        {
            cout<<"TAK"<<endl;
        }
        else
        {
            cout<<"NIE"<<endl;
        }
    }
    return 0;
}
