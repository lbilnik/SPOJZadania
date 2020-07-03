#include <iostream>

using namespace std;

int a=0,b=0,t;

int Funkcja(int a,int b)
{

        if (a==1)
        {
            return b;
        }
        if (a%2==0)
        {
            return Funkcja(0.5*a, b=b+1);
        }
    else
        return Funkcja(a*3+1, b=b+1);

}

int main()
{
    cin>>t;
    for (int i=0;i<t;i++)
    {
        cin>>a;
        if(a != 0)
        {
        cout<<Funkcja(a,b)<<endl;
        }
        else return b;
    }

    return 0;
}
