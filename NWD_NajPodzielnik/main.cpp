#include <iostream>

using namespace std;

long long int a,b;
int t;

int nwd(int a,int b)
{
    if (a==b)
        return (a+b)/2;
    if (a==0)
        return b;

    else if (b==0)
        return a;

else {

    do {
        if (a>b)
        {
            a=a-b;
        }
        else
        {
            b=b-a;
        }
      } while (a !=b);
     }
}

int main()
{
    cin>>t;
    for (int i=0;i<t;i++)
    {
        cin>>a>>b;
        cout<<nwd(a,b)<<endl;
    }
}
