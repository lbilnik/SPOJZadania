#include <iostream>

using namespace std;

int main()
{
    int a=0,b=0,x=0,y=0;

    while(cin>>a)
    {

        cin>>b;
        for(int i=0;i<b;i++)
        {
            cin>>x;
            if(x==a)
                y+=1;
        }
        cout<<y<<'\n';
        y=0;
    }
    return 0;
}
