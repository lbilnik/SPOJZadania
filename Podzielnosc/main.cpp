#include <iostream>

using namespace std;

int main()
{
 int a,b,t,n;
cin>>t;

for (int i=0;i<t;i++)
{
    cin>>n>>a>>b;
    for (int j=0;j<n;j++)
    {
        if ((j%a==0) && (j%b!=0))
        cout<<j<<" ";
    }

}

}
