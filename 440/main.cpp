#include <iostream>
#include <cstring>
using namespace std;
int main() {
    char s[256], l[256];
    int k=0;
    cin.getline(s, 255);
    for(int i=0; i<strlen(s); i++)
    {
        if(islower(s[i])!=0 && !strchr(l, s[i]))
        {
            l[k]=s[i];
            k++;
            l[k]=' ';
            k++;
        }
    }
    cout<<l;
}
