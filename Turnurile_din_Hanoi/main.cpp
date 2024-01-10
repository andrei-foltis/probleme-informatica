#include <iostream>
using namespace std;
void hanoi(int &m, char a, char b, char c, int &t)
{
    if(m>t && t%2==0) {
        t++;
        cout<<a<<" "<<b<<"\n";
        hanoi(m, a, c, b, t);
    }
    if(m>t && t%2!=0) {
        t++;
        cout<<a<<" "<<b<<"\n";
        hanoi(m, c, b, a, t);
    }
}

int main() {
    int n;
    cin>>n;
    int m=2;

    for(int i=1; i<n; i++)
    {
        m=m*2;
    }
    m=m-1;
    cout<<m<<"\n";
    char a='A', b='B', c='C';
    int t=0;
    hanoi(m, a, b ,c, t);

    return 0;
}