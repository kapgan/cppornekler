#include <iostream>
//0 1 1 2 3 5 8
using namespace std;
int main()
{int secim,birinciS=0,ikinciS=1,fibo;
cout<<"Bir sayi giriniz...";
cin>>secim;//kullanıcının kaç tane sayi yazdıracagını alıyoruz
for (int i=0; i<secim; i++)//döngümüzü kuruyoruz.
{
    if(i<=1)//ilk iki sayinin 0  1 olup fibonacci nin başlangıcını belirliyoruz
        fibo=i;
    else
    {fibo=birinciS+ikinciS; //yazılacak olan fiboyu onceki iki sayinin toplamına esitliyoruz.
    birinciS=ikinciS;//1. sayiyi 2. ye esitliyoruz
    ikinciS=fibo;//2. sayiyi fibo ya yani1. ve 2. sayinin toplamına esitlemis oluyoruz...
    }cout<<fibo<<"\t";
}
    return 0;
}
