#include <iostream>
using namespace std;
int suma_componentelor(int a[], int st, int dr)
{
    if(st==dr) {
        int aux=a[st], aux2=0;
        while(aux)
        {
            aux2=aux2*10+aux%10;
            aux/=10;
        }
        if(a[st]==aux2 && a[st]>10)
        {
            return 1;
        }
        else
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
    cout<<suma_componentelor(a, 1, n);
    return 0;
}
