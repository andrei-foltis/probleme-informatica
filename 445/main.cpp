#include <iostream>
#include <cstring>
using namespace std;
int main() {
    char s[101];
    cin.getline(s, 100);
    for(int i=0; i<strlen(s); i++)
    {
        if(islower(s[i])!=0)
        {
            s[i]=toupper(s[i]);
        }
        else if(isupper(s[i])!=0)
        {
            s[i]=tolower(s[i]);
        }
    }
    cout<<s;
}
