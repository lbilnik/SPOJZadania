#include <iostream>
#include <string>

using namespace std;

int main()
{

    string napis, alfabet = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
    int n=0,c=0;

    int count[alfabet.size()] = { 0 };

    cin>>n;
    for (int j=0;j<=n;j++)
    {

    getline(cin,napis);
    c=napis.length();

    for (int i=0;i<c;i++)
    {
        for (int d=0;d<alfabet.size();d++)
        {
            if(napis[i]==alfabet[d])
                count[d]+=1;
        }
    }

    }
    for (int i=0;i<alfabet.size();i++)
        {
            if (count[i] != 0) {
            cout<<alfabet[i]<<" "<<count[i]<<endl;
            }
        }

    return 0;
}
