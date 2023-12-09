#include <iostream>
#include <cstring>
using namespace std;
int main() {
    char s[51], l[51];
    int k=0;
    cin.getline(s,50);
    for(int i=0; i<strlen(s); i++)
    {
        if(isalpha(s[i])!=0)
        {
            for(int j=1; j<=int(s[i-1] - '0'); j++)
            {
                l[k]=s[i];
                k++;
            }
        }
    }
    cout<<l;
    return 0;
}
