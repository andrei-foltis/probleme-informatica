#include <iostream>
#include <cstring>
using namespace std;
int suma_componentelor(int a[], int st, int dr, char x, char v[])
{
    if(st==dr) {
        if(strcmp(v[st], x) ==0)
            return a[st];
        return 0;
    }
    else
    {
        int m=(st+dr)/2;
        int s1 = suma_componentelor(a, st, m, x, v);
        int s2 = suma_componentelor(a, m+1, dr, x, v);
        return s1+s2;
    }
}
int main() {
    int a[50];
    char v[50][50];
    int n;
    cin>>n;
    cin.get();
    for(int i=1; i<=n; i++) {
        cin.getline(v[i], 49);
    }
    cin.get();
    char x[21];
    cin.getline(x, 20);
    for(int i=1; i<=n; i++) {
        cin >> a[i];
    }
    cout<<suma_componentelor(a, 1, n, x, v);
    return 0;
}
