#include <iostream>
#include <cmath>

using namespace std;

int main()
{
   int n=0, m, test, s=0, x;

    cin>>test;

    for(int i=1; i<=test; i++)
 {
    cin>>n>>m;

    for(int i=1; i<=n; i++)
    {
        int czas, Nadobe;
        cin>>czas;
        Nadobe=(86400/czas);
        s+=Nadobe;

    }
    if(s%m==0) x=s/m;
    else x=s/m+1;
    s=0;
    cout<<x<<endl;

  }

    return 0;
}

/*
#include <iostream>

using namespace std;

int main ()
{
    int test;
    cin >> test;
    for (int i=1; i<=test;i++)
    {
        int zjadacz,pudelka,ile=0;
        cin >> zjadacz;
        cin >> pudelka;
        if (pudelka==0) break;
        for (int j=0;j<zjadacz;j++)
        {
            int czas;
            cin >> czas;
            ile=ile+(86400/czas);

        }
        if (ile%pudelka==0) ile=ile/pudelka;
        else ile=(ile/pudelka)+1;
        cout << ile << endl;

    }

}
*/
