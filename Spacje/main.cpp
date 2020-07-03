#include <iostream>
#include <string>

using namespace std;

int main()
{
    string napis;
    while(cin>>napis)
    {

        for (int i=0; i<napis.size(); i++)
        {
            if (napis[i] !=' ')
            {
                napis[i];
            }
        }
        // napisaæ jakoœ pominiêcje pierwszej litery w pierwszym slowie
        napis.at(0)=toupper(napis[0]);
        cout<<napis;
        }


    }
    return 0;
}
