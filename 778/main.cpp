#include <iostream>
using namespace std;
int n;
void suma_componentelor(int a[], int v[], int st, int dr)
{
    if(st==dr) {
        v[n]=a[st];
        n--;
    }
    else
    {
        int m=(st+dr)/2;
        suma_componentelor(a, v, st, m);
        suma_componentelor(a, v, m+1, dr);
    }
}
int main() {
    int a[50];
    int v[100];
    cin>>n;
    for(int i=1; i<=n; i++)
        cin>>a[i];
    int aux=n;
    suma_componentelor(a, v, 1, n);
    for(int i=1; i<=aux; i++)
    {
        cout<<v[i]<< " ";
    }
    return 0;
}
