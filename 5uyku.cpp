#include <iostream>
using namespace std;

int main()
{
    int uykus,uykud,uyans,uyand;
    int toplamuykudakikası,toplamuykusaati;
    cout<<"Kaçta uyudunuz"<<endl;
    cout<<"Saat :";
    cin>>uykus;
    cout<<"Dakika olarak giriniz:";
    cin>>uykud;
    cout<<"Kaçta uyandınız: "<<endl;
     cout<<"Saat :";
    cin>>uyans;
    cout<<"Dakika olarak giriniz:";
    cin>>uyand;
    toplamuykudakikası=(uyans*60+uyand)-(uykus*60+uyand);
    int k=toplamuykudakikası;
    if(toplamuykudakikası<0)
    toplamuykudakikası+=24*60;
    toplamuykusaati=toplamuykudakikası/60;
    toplamuykudakikası=toplamuykudakikası%60;
    cout<<"Uyudugunuz saat: "<<endl;
    cout<<toplamuykusaati<<" saat "<<toplamuykudakikası<<" dakika"<<endl;
    if(k<480-60)
        cout<<"Az uyuyorsunuz.";
    else if(480-60<=k<=480+60)
    cout<<"Yeteri kadar uyuyorsunuz";
    else
    cout<<"Fazla uyuyorsunuz:";
    return 0;
    
}