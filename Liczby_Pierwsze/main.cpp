/*
#include <iostream>
#include <cstdlib>
#include <math.h>

using namespace std;

int main()
{
    int t,x,n;
    cin>>t;
    for (int i=0;i<t;i++)
    {

   int liczba, stopien;

    cin>>liczba;
    //stopien=2;
    //x=pow(liczba, 1/stopien);
   // liczba
   x=(liczba%10);

   if(liczba>10)
   {
        if(x==0)
        cout<<"NIE"<<endl;
        if(x==1)
            cout<<"TAK"<<endl;
        if(x==2)
            cout<<"NIE"<<endl;
        if(x==3)
            cout<<"TAK"<<endl;
        if(x==5)
            cout<<"NIE"<<endl;
        if(x==7)
            cout<<"TAK"<<endl;
        if(x==9)
            cout<<"NIE"<<endl;
        if(x==4)
            cout<<"NIE"<<endl;
        if(x==6)
            cout<<"NIE"<<endl;
        if(x==8)
            cout<<"NIE"<<endl;
    }
    if(liczba<=10){

        if(x==0)
        cout<<"NIE"<<endl;
        if(x==1)
            cout<<"NIE"<<endl;
        if(x==2)
            cout<<"TAK"<<endl;
        if(x==3)
            cout<<"TAK"<<endl;
        if(x==5)
            cout<<"TAK"<<endl;
        if(x==7)
            cout<<"TAK"<<endl;
        if(x==9)
            cout<<"NIE"<<endl;
        if(x==4)
            cout<<"NIE"<<endl;
        if(x==6)
            cout<<"NIE"<<endl;
        if(x==8)
            cout<<"NIE"<<endl;
        if(x==10)
            cout<<"NIE"<<endl;
    }
   }
    return 0;

}
*/
#include<iostream>
#include<cstdlib>
using namespace std;

bool czy_pierwsza(int n)
{
	if(n<2)
		return false;

	for(int i=2;i*i<=n;i++)
		if(n%i==0)
			return false;
	return true;
}

int main()
{
    	int n,t;
    cin>>t;
    for  (int j=0;j<t;j++)
    {

	cin>>n;

	if(czy_pierwsza(n))
		cout<<"TAK"<<endl;
	else
		cout<<"NIE"<<endl;
    }
	return 0;
}
