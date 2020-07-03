
#include <iostream>

using namespace std;

int main()
{
    long long int a=0,b,c=0,n;
    cin>>n;
    for (int i=0;i<n;i++)
    {
        cin>>b;
        for(int j=0;j<b;j++)
        {
            cin>>a;
            c+=a;
        }
        cout<<c<<endl;
        a=0;
        b=0;
        c=0;
    }
    return 0;
}
