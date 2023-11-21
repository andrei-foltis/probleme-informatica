#include <iostream>

using namespace std;
int nr_div_proprii(int x)
{
    int s=0;
    for(int i=2; i<=x/2; i++)
    {
        if(x%i==0)
            s++;
    }
    return s;
}
int main()
{
    int v[100], n;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>v[i];
    }
    for(int i=0; i<n-1; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(nr_div_proprii(v[i])<nr_div_proprii(v[j]))
            {
                int aux=v[i];
                v[i]=v[j];
                v[j]=aux;
            }
        }
    }
    for(int i=0; i<n; i++)
    {
        cout<<v[i]<<" ";
    }
}
