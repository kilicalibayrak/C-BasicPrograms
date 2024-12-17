#include <iostream>
#include <ctime>
using namespace std;

int main()
{
    int enfazla=100,enaz=0,x,a;
    srand(time(0));
    int tahmin=rand()% (enfazla-enaz+1)+enaz;
    cout<<"Bilgisayar bir sayı seçecek ve bu sayıyı tahmin etmeye çalıacaksın."<<endl;
    cout<<" Hazırsan başlayalım. Bir tahminde bulun: "<<endl;
    
    a:cin>>x;
    if(x==tahmin)
    {
        cout<<"Doğru tahmin, tebrikler.";
    }

    else if(x<tahmin)
    {
        cout<<"Tahminin= "<<x<<endl;
        cout<<"Daha büyük bir sayı dene."<<endl;
        goto a;
    }

    else
    {
        cout<<"Tahminin= "<<x<<endl;
        cout<<"Daha küçük bir sayı dene."<<endl;
        goto a;
    }
}