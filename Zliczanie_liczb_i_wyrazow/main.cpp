#include <iostream>

using namespace std;

int main()
{
    string napis;

    while (getline(cin,napis))
    {
        int a=0,b=0,c;
        c=napis.length();

        for (int i=0; i<c; i++)
        {
            if (napis[i]>='0' && napis[i]<='9')
            {
                b++;
                while (napis[i] != ' ' && i < c)
                {
                    i++;
                }
            }
            else
            {
                a++;
                while (napis[i] != ' ' && i < c)
                {
                    i++;
                }
            }
        }
        cout<<b<<" "<<a<<endl;
        a=0;
        b=0;
    }
    return 0;
}


/*
#include <iostream>

using namespace std;

int main()
{
    string napis;

    while (getline(cin,napis))
    {
        int a=0,b=0,c;
        c=napis.length();

        for (int i=0; i<c; i++)
        {
            if( (napis[i]>'@'&&napis[i]<'[') || (napis[i]>'`'&&napis[i]<'{') )
            {
                a++;
                while (napis[i] != ' ' && i < c)
                {
                    i++;
                }
            }
            if (napis[i]>='0' && napis[i]<='9')
            {
                b++;
                while (napis[i] != ' ' && i < c)
                {
                    i++;
                }
            }
        }
        cout<<b<<" "<<a<<endl;
        a=0;
        b=0;
    }
    return 0;
}
*/
