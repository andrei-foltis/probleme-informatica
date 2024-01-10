#include <iostream>
using namespace std;
struct persoana
{
    long int CNP;
    char nume[21];
    char prenume[21];
    int an_nastere;
}A;
int main() {
    cin>>A.CNP;
    cin.get();
    cin.getline(A.nume, 20);
    cin.getline(A.prenume, 20);
    cin>>A.an_nastere;
    cout<<A.CNP<<"\n";
    cout<<A.nume<<"\n";
    cout<<A.prenume<<"\n";
    cout<<A.an_nastere<<"\n";
}
