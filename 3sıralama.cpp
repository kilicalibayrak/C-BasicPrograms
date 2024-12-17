#include <iostream>
using namespace std;

int sırala(int x[],int y)
{
      for(int i=0;i<y-1;i++)
    {
        for(int j=i+1;j<y;j++)
        {
            //swap icin;
            if(x[i]>x[j])
            {
                int k;
                k=x[i];
                x[i]=x[j];
                x[j]=k;
            }
        }
    }
}

int main()
{
    
    int sırala(int x[],int y);
    cout<<"10 tane sayı giriniz:"<<endl;
    int t[10];
    //diziyi girme 
    for(int i=0;i<10;i++)
    {
        cout<<i+1<<". sayıyı giriniz: ";
        cin>>t[i];
        cout<<endl;
    }
    sırala(t,10);

    cout<<"Sıralanmış Dizi:"<<endl;
    //ekrana diziyi yazdırma
     for(int i=0;i<10;i++)
    {
        cout<<t[i]<< " ";
    }
    cout<<endl;
    cout<<"Dizinin en büyük elemanı: "<<t[9]<<endl;
    cout<<"Dizinin en küçük elemanı: "<<t[0]<<endl;
    
    double x=0;
    for(int i=0;i<10;i++)
    {
        x=x+t[i];
    }
    cout<<"Dizinin aritmatik ortalaması: "<<x/10<<endl;




}