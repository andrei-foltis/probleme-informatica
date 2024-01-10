#include <iostream>
using namespace std;
int minim=INT_MAX;
int suma_componentelor(int a[], int st, int dr)
{
    if(st==dr) {
        return a[st];
    }
    else
    {
        int m=(st+dr)/2;
        int a1 = suma_componentelor(a, st, m);
        int b = suma_componentelor(a, m+1, dr);
        if(a1<b)
            return a1;
        else
            return b;

    }
}
int main() {
    int a[50];
    int n;
    cin>>n;
    for(int i=1; i<=n; i++)
        cin>>a[i];

    cout<<suma_componentelor(a, 1, n);

    return 0;
}
