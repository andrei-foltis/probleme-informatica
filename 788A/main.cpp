#include <iostream>
using namespace std;
int suma_componentelor(int a[], int st, int dr)
{
    if(st==dr) {
        if(a[st]>9.00)
            return 1;
        return 0;
    }
    else
    {
        int m=(st+dr)/2;
        int s1 = suma_componentelor(a, st, m);
        int s2 = suma_componentelor(a, m+1, dr);
        return s1+s2;
    }
}
int main() {
    int a[50];
    int n;
    cin>>n;
    for(int i=1; i<=n; i++)
        cin>>a[i];
    cout<<suma_componentelor(a, 1, n)<<" "<<"au media peste 9";
    return 0;
}
