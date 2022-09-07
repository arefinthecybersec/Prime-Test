#include<bits/stdc++.h>
#include<fstream>
#define ll long long int

using namespace std;

int main()
{
    ll k,i,f,j,x;
    ifstream in("input.txt");
    in>>k;

    i=1;
    while(i<=k)
    {
        f=0;
        x=i;
        for(j=2; j<x; j++)
        {
            if(x%j==0)
            {
                f=1;
            }
        }
        i++;
    }

    ofstream out("output.txt", ios::out|ios::app);

    if(f==0 && x!=1)
        out<<k<<"  is prime"<<'\n';
    else
        out<<k<<"  not prime"<<'\n';


    out.close();

return 0;
}
