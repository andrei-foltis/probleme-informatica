#include <iostream>
using namespace std;
int suma_componentelor(int a[], int st, int dr, int x)
{
    if(st==dr) {
        if(a[st]==x)
            return 1;
        else
            return 0;
    }
    else
    {
        int m=(st+dr)/2;
        int s1 = suma_componentelor(a, st, m, x);
        int s2 = suma_componentelor(a, m+1, dr, x);
        return s1+s2;
    }
}
int main() {
    int a[50];
    int n;
    cin>>n;
    for(int i=1; i<=n; i++)
        cin>>a[i];
    int x;
    cin>>x;
    cout<<suma_componentelor(a, 1, n, x);
    return 0;
}
