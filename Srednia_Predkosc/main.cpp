#include <iostream>

using namespace std;

int main()
{
    int v1,v2,c,t;
    cin>>t;

    for (int i=0;i<t;i++)
    {
    cin>>v1>>v2;

    c = (2*(v1*v2)/(v1+v2));
    cout<<c<<endl;
    }
    return 0;
}
