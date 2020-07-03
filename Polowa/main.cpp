#include <iostream>

using namespace std;

int main()
{
    int a,t;
    string napis;
    cin>>t;

    for (int i=0;i<t;i++)
    {
        cin>>napis;
        a=napis.size();
        for (int j=0;j<a/2;j++)
        {
            cout<<napis[j];
        }
        cout << endl;
    }
    return 0;
}
