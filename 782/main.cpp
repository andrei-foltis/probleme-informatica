#include <iostream>
using namespace std;
void suma_componentelor(int a[], int st, int dr, int &u, int &t)
{
    if(st==dr) {
        if(a[st]>=u)
        {
            u=a[st];
            t++;
        }


    }
    else
    {
        int m=(st+dr)/2;
        suma_componentelor(a, st, m, u, t);
        suma_componentelor(a, m+1, dr, u, t);
    }
}
int main() {
    int a[50];
    int n;
    cin>>n;
    for(int i=1; i<=n; i++)
        cin>>a[i];
    int t=0;
    suma_componentelor(a, 1, n, a[1], t);
    if(t==n)
        cout<<"ordonat crescator";
    else
        cout<<"nu este ordonat crescator";
    return 0;
}
