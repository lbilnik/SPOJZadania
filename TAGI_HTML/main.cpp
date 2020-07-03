#include <iostream>

using namespace std;

int main()
{
    string napis;
    int dlugosc,i,j;
    while(getline(cin,napis))
    {
        dlugosc=napis.length();
        for (i=0;i<dlugosc;i++)
        {
            if (napis[i] == '<')
            {
                while(napis[i] != '>')
                {
                    i++;
                    napis[i] = toupper(napis[i]);
                }
            }
        }
        for (j=0;j<dlugosc;j++)
        {
        cout<<napis[j];
        }
        cout<<endl;
    }
    return 0;
}
