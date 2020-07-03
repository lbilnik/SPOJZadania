#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

string napis;
int t;

int main()
{
    cin >> t;

        for(int i=0; i<t; i++)
        {
            cin >> napis;
            transform(napis.begin(),napis.end(),napis.begin(),::toupper);
            int ile = 1, dlugosc = napis.length();

                for(int j=0; j<dlugosc; j++)
                {
                    if(napis[j]==napis[j+1])
                        ile++;
                    else
                    {
                        if(ile <2)
                        {
                            cout<<napis[j];
                            ile = 1;
                        }
                        else if(ile==2)
                        {
                            cout<<napis[j-1]<<napis[j];
                            ile = 1;
                        }
                        else
                        {
                            cout<<napis[j]<<ile;
                            ile = 1;
                        }
                    }
                }
                cout << endl;
        }
    return 0;
}
