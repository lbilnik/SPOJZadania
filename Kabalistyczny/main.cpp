#include <iostream>
#include <string>
using namespace std;

int main()
{
    string napis;
    int wynik=0, tab[26] {1,2,3,4,5,6,7,8,9,0,10,20,30,40,50,60,70,80,90,100,0,200,0,300,400,500};
                       // a b c d e f g h i j k  l  m  n  o  p  q  r  s  t   u v   w x   y   z
    getline(cin,napis);

    for (int i=0;i<napis.length();i++)
    {
        wynik+=tab[napis[i]-'a'];
    }
    cout<<wynik<<endl;
    return 0;
}
