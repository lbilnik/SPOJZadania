#include <iostream>

using namespace std;

int main()
{
    int t, a, b, x;

    a=0;
    b=0;

    cin>>t;
    while(t--)
    {
        cin>>x;
        if(a > 0)
            a += x;
        else
            a = x;
        if(a > b)
            b = a;
    }
    cout<<b<<'\n';
}
