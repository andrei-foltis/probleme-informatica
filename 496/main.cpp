#include <iostream>
#include <cstring>
using namespace std;
int main() {
    int n;
    cin>>n;
    cin.get();
    char v[100][21];
    for(int i=0; i<n; i++)
    {
        cin.getline(v[i],20);
    }

    for(int j=0; j<n-1; j++) {
        int k=0;
        for (int i = j+1; i < n; i++) {
            if (v[j][strlen(v[j]) - 1] == v[i][strlen(v[i]) - 1] && v[j][strlen(v[j]) - 2] == v[i][strlen(v[i]) - 2]) {
                char aux[21]="";
                strcpy(aux, v[i]);
                strcpy(v[i],v[j+k+1]);
                strcpy(v[j+k+1], aux);
                k++;
            }
        }
    }
    for(int i=0; i<n; i++)
    {

        cout<<v[i]<<" ";
        if(v[i+1][strlen(v[i+1]) - 1] != v[i][strlen(v[i]) - 1] || v[i+1][strlen(v[i+1]) - 2] != v[i][strlen(v[i]) - 2])
        cout<<"\n";

    }

}
