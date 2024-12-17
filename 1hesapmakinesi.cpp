#include <iostream>
using namespace std;

int main()
{
    double x,y;
    int z;
    cout<<"1.sayiyi giriniz:"<<endl;
    cin>>x;
    cout<<"2.sayiyi giriniz:"<<endl;
    cin>>y;
    cout<<"1toplama|2çıkarma|3çarpma|4bölme"<<endl;
    cout<<"işlemlerinden birini seçiniz:"<<endl;
    cin>>z;
    if(z==1) 
    cout<<"işlem sonucu:  " <<x+y;
    else if(z==2)
    cout<<"işlem sonucu:  "<<x-y;
    else if(z==3)
    cout<<"işlem sonucu:  "<<x*y;
    else if(z==4)
    cout<<"işlem sonucu:  "<<x/y;
    else 
    cout<<"Yanlış bir seçim yaptınız!";
    return 0;

}