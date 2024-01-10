#include <iostream>
using namespace std;
void nr_max_prim(int a[], int st,int dr,int maxim)
{
    if(st==dr) {
        bool ok=true;
        for(int i=2; i<a[st]; i++)
        {
            if(a[st]%i==0)
            {
                ok=false;
            }
        }

        if(ok && a[st]>maxim)
        {
            maxim=a[st];
        }

    }
    else
    {
        int m=(st+dr)/2;
        nr_max_prim( a, st, m, maxim);
        nr_max_prim( a, m+1, dr, maxim);
    }
}
int main() {
    int a[50];
    int n;
    cin>>n;
    for(int i=1; i<=n; i++)
        cin>>a[i];
    int maxim=0;
    nr_max_prim(a, 1, n, maxim);
    cout<<maxim;
    return 0;
}
