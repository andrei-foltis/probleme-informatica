#include <iostream>
using namespace std;
void suma_componentelor(int a[], int st, int dr, int suma)
{
    if(st==dr) {
        while(a[st])
        {
            suma=suma+a[st]%10;
            a[st]/=10;
        }
    }
    else
    {
        int m=(st+dr)/2;
        suma_componentelor(a, st, m, suma);
        suma_componentelor(a, m+1, dr, suma);
    }
}
int main() {
    int a[50];
    int n;
    cin>>n;
    for(int i=1; i<=n; i++)
        cin>>a[i];
    int suma=0;
    suma_componentelor(a, 1, n, suma);
    cout<<suma;
    return 0;
}
