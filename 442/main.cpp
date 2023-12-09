#include <iostream>
#include <cstring>
using namespace std;
int main() {
    char s[51];
    cin.getline(s, 50);
    int n;
    n = strlen(s);
    for(int i=0; i<n; i++)
    {
        //cout<<s<<"\n";

        if(strchr("aeiou", s[i]))
        {
            n++;
            for(int j=n-1; j>i; j--)
            {
                s[j]=s[j-1];
            }
            n++;
            for(int j=n-1; j>i; j--)
            {
                s[j]=s[j-1];
            }
            s[i]=s[i+2];
            s[i+1]='p';
            i+=2;
        }
    }
    cout<<s;
}
