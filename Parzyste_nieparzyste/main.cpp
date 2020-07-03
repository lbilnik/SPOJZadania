#include <iostream>

using namespace std;

int main()
{
    int t,a=0,b=0,c;
    int *tab;

    cin>>t;
    for (int i=0;i<t;i++)
    {
        cin>>a;
        tab = new int [a];
        for (int j=0;j<a;j++)
        {
            cin>>b;
            tab[j]=b;
        }
        for (c=0;c<a;c++)
        {
            if (c%2!=0)
            {
              cout<<tab[c]<<" ";
            }
        }
        for (c=0;c<a;c++)
        {
            if (c%2==0)
            {
              cout<<tab[c]<<" ";
            }
        }
    delete [] tab;
    }
    return 0;
}
