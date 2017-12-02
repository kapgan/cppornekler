#include <iostream>
using namespace std;

int main ()
{
    int x;
    int y=0; //1-0 için belirleyici değişken
    cout<<"Bir sayi giriniz...";
    cin>>x;
    for(int i=1; i<=x; i++)//girilen sayı kadar satır olusturmaya yarayan döngu
    {
        for(int k=1; k<=i; k++)//her satıra 1 adetten baslayıp maximum girilen deger kadar 
        {                      //1 veya 0 yazdıran for
            if(y==0)    //y baslangıc degeri 0 dır y her 0 oldugunda 1 yazdıran if
            {
                cout<<"1";
                y=1;
            }
            else if(y==1) //y her 1 oldugunda 0 yazdıran if
            {
                cout<<"0";
                y=0;
            }
        }
        cout<<endl; //ilk for dan sonra eklenen bu alt satıra in komutu satırları bitirip bir sonraki 
    }               // sutun a geçmemizi sağlar
}
