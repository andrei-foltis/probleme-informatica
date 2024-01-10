#include <iostream>
using namespace std;
struct xOy
{
    int x, y;
}s[100];
int main() {
    int n;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>s[i].x>>s[i].y;
    }
    cout<<"{";
    for(int i=0; i<n; i++)
    {
        if(s[i].y==0)
        {
            cout<<"("<<s[i].x<<","<<" "<<s[i].y<<")"<<" ";
        }
    }
    cout<<"}"<<"\n";
    for(int i=0; i<n-1; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(s[i].x==s[j].x)
            {
                cout<<"("<<s[i].x<<" "<<s[i].y<<","<<" "<<s[j].x<<" "<<s[j].y<<")"<<" ";
            }
        }
    }
    cout<<"\n";
    for(int i=0; i<n-2; i++)
    {
        for(int j=i+1; j<n-1; j++)
        {
            for(int k=j+1; k<n; k++)
            {

                if((s[i].x-s[j].x)*(s[i].x-s[j].x)+(s[i].y-s[j].y)*(s[i].y-s[j].y)==(s[i].x-s[k].x)*(s[i].x-s[k].x)+(s[i].y-s[k].y)*(s[i].y-s[k].y)){
                    cout<<"("<<s[i].x<<","<<" "<<s[i].y<<","<<s[j].x<<" "<<s[j].y<<";"<<" "<<s[i].x<<","<<" "<<s[i].y<<","<<s[k].x<<" "<<s[k].y<<")"<<" ";}
                if((s[i].x-s[j].x)*(s[i].x-s[j].x)+(s[i].y-s[j].y)*(s[i].y-s[j].y)==(s[j].x-s[k].x)*(s[j].x-s[k].x)+(s[j].y-s[k].y)*(s[j].y-s[k].y)){
                    cout<<"("<<s[i].x<<","<<" "<<s[i].y<<","<<s[j].x<<" "<<s[j].y<<";"<<" "<<s[j].x<<","<<" "<<s[j].y<<","<<s[k].x<<" "<<s[k].y<<")"<<" ";}
            }
        }
    }
}
