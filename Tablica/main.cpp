    #include <iostream>

    using namespace std;

    int main()
    {

        int a=0,b=0,j=0;
        int *tablica;

        tablica = new int [a];
        while (cin>>a)
        {
          b++;
          tablica[j]=a;
          j++;
        }
            for (int c=b-1; c>=0; c--)
            {
                cout<<tablica[c]<<" ";
            }
            delete [] tablica;

            return 0;
    }

/* https://ideone.com/yMjBa9 link do ideone bo tam trzeba sprawdzaæ ten kod
 //cin>>a;
        tablica = new int [a];

        for(int j=0; j<a; j++)
        {
            cin>>tablica[j];
        }

        for (int c=a-1; c>=0; c--)
        {
            cout<<tablica[c]<<" ";
        }
        delete tablica;

        return 0;
}
*/
