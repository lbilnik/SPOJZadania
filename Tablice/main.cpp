#include <iostream>

using namespace std;

int main()
{
    int a,t;
    int *tablica;

    cin>>t;
    for (int i=0;i<t;i++)
    {
            cin>>a;
            tablica = new int [a];
            for(int j=0;j<a;j++)
            {
                cin>>tablica[j];

            }
            for (int c=a-1;c>=0;c--)
            {
                cout<<tablica[c]<<" ";
            }
            delete tablica;
    }
    return 0;
}
