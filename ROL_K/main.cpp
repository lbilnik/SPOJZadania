#include <iostream>

using namespace std;

int main()
{
    int t,a=0,b=0,c;
    int *tab;

        cin>>a;
        tab = new int [a];
        cin>>t;
        for (int j=0;j<a;j++)
        {
            cin>>b;
            tab[j]=b;
        }

        for (c=0;c<a;c++)
        {
              if(c>t-1)
              {
              cout<<tab[c]<<" ";
              }
        }
        for (c=0;c<a;c++)
        {
              if(c<t)
              {
              cout<<tab[c]<<" ";
              }
        }
    delete [] tab;

    return 0;
}

