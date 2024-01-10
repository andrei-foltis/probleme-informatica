#include <iostream>
using namespace std;
void suma_componentelor(int a[], int st, int dr, int n, bool &ok)
{
    if(st==dr) {
        if(a[st]!=a[n-st+1] && n-st+1>n/2)
            ok=false;

    }
    else
    {
        int m=(st+dr)/2;
        suma_componentelor(a, st, m, n, ok);
        suma_componentelor(a, m+1, dr, n, ok);
    }
}
int main() {
    int a[50];
    int n;
    cin>>n;
    for(int i=1; i<=n; i++)
        cin>>a[i];
    bool ok=true;
    suma_componentelor(a, 1, n, n, ok);
    if (ok)
        cout<<"palindrom";
    else
        cout<<"nu este palindrom";
    return 0;
}
