#include <iostream>
using namespace std;
//dizideki en büyük en kücük sayı?
/*
int main()
{
    int t[2][3];

    //dizileri girdi alma:
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<3;j++)
        {
            cin>>t[i][j];
        }
       
    }

   //ekrana yazdırma:
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<t[i][j]<<" ";
        }
       cout<<endl;
    }
    //büyük kücük bulma :
    int enk=t[0][0];
    int enb=t[0][0];
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<3;j++)
        {
            if(t[i][j]<enk)
            enk=t[i][j];
            if(t[i][j]>enb)
            enb=t[i][j];
        }
    }
    cout<<"En büyük sayı:"<<enb<<endl;
    cout<<"En küçük sayı:"<<enk<<endl;

}
*/

//dizideki en kücük 2. sayı:
int main()
{
    int t[2][4]={{46,3,5,8},{17,77,6,9}};
    int enk=t[0][0],s,st;
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<4;j++)
        {
            if(t[i][j] < enk)
            {enk=t[i][j];
            s=i;
            st=j;}

        }
    }

    t[s][st]=1000000;
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<4;j++)
        {
            if(t[i][j] < enk)
            enk=t[i][j];
            

        }
    }

    
}