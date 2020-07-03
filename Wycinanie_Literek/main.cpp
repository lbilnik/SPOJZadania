#include <iostream>

using namespace std;

int main()
{
    string c,b,wynik;
    int d;

    while(cin>>c)
    {

        cin>>b;
        d = b.length();

        for (int i=0;i<d;i++)
        {
            if (b[i] != c[0])
            //b[i]=b.erase(a[0]);
            wynik+=b[i];
             // b[i]=(b[i]-2);
        }
        cout<<wynik<<endl;
        wynik="";
    }
    return 0;
}
