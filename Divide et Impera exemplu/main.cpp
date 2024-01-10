#include <iostream>
using namespace std;
int NrXDivImp(int a[], int st, int dr, int x)
{
    if(st==dr) {
        if (x == a[st])
            return 1;
        return 0;
    }
    else
    {
        int m=(st+dr)/2;
        int s1 = NrXDivImp(a, st, m, x);
        int s2 = NrXDivImp(a, m+1, dr, x);
        return s1+s2;
    }
}
int main() {
    int a[50];
    int n=9;
    for(int i=1; i<=n; i++)
        cin>>a[i];
    cout<<NrXDivImp(a, 1, 6, 5);
    return 0;
}
