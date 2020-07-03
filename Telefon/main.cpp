#include <iostream>

using namespace std;

int main()
{
    string napis;
    int t,x=0, tab[26] {2,2,2,3,3,3,4,4,4,5,5,5,6,6,6,7,7,7,7,8,8,8,9,9,9,9};
                     // a b c d e f g h i j k l m n o p q r s t u v w x y z
    int *telefon;
    cin>>t;
    for (int i=0;i<t;i++)
    {
        cin>>napis;
        x=napis.length();

        telefon = new int[x];
        for (int j=0;j<=x;j++)
        {
            telefon[j]=tab[napis[j]-'A'];
        }
        for (int b=0; b<x;b++)
        {
            cout<<telefon[b];
        }
        cout<<endl;
    }
    return 0;
}
