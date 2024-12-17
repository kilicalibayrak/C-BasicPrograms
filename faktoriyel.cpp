#include <iostream>
using namespace std;

//faktoriyel fonksiyonu:
double fakt(int x)
{
    int i;
    double f=1;
    for(i=1;i<x+1;i++)
    {
        f=f*i;
    }
    return f;
}


//faktoriyel hesabı:
int main() 
{
    double fakt(int x);
    int f;
    cout<<"Bir faktoriyel değeri giriniz: ";
    cin>>f;
    cout<<f<<"!= "<<fakt(f);
    
}


