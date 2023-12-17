#include <iostream>
#include <cstring>
using namespace std;
int main() {
    char s[21], voc[]="aeiou", voc1, cons;
    cin.getline(s, 20);
    for(int i=0; i<strlen(s); i++)
    {
            if(!strchr(voc, s[i]))
            {
                cons=s[i];
            }
    }
    for(int i=strlen(s)-1; i>=0; i--)
    {
        if(strchr(voc, s[i]))
        {
            voc1=s[i];
        }
    }
    bool ok=false, ok1=false;
    for(int i=0; i<strlen(s) && ok==false; i++)
    {
        if(voc1==s[i])
        {
            s[i]=cons;
            ok=true;
        }
    }
    for(int i=strlen(s)-1; i>=0 && ok1==false; i--)
    {
        if(cons==s[i])
        {
            ok1=true;
            s[i]=voc1;
        }
    }
    cout<<s;
}
