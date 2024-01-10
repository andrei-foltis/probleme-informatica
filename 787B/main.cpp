#include <iostream>
using namespace std;
void merge(int v[], int st, int dr)
{
    if (dr - st >= 1) {
        int m = (st + dr) / 2;
        merge(v, st, m);
        merge(v, m, dr);
        

    }
}
int main() {
    int v[100], n;
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        cin>>v[i];
    }
    merge(v, 0, n);
    for(int i=1; i<=n; i++)
    {
        cout<<v[i];
    }
}
