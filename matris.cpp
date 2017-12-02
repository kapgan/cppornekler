/*Merhaba arkadaşlar bu yazımızda C++ ile Matris yazacağız. Yazdığımız programda kullanıcı matrisin kaça kaçlık bir matris olduğunu
belirleyecek ve tüm değerleri kendisinin girmesini isteyeceğiz. Tüm değerler girildikten sonra Matrisin tamamlanmış hali kullanıcıya 
gösterilecek ve girilen En Büyük sayı ile girilen Ek Küçük sayi yine ekrana yazılacak. 

 Bu programı yazabilmek için öncelikle matrisin ne olduğunu  bilmek gerekli ve for döngüleri ile dizi konusuna hakim olmak gerekli.
 For , if ve dizi ile yazılan bu program Programlama sınavlarında çıkma ihtimali olan bir programdır. Algoritmasını kurduğunuz 
 taktirde yazması oldukça basit olan programın kodlarını aşşağıda açıklamalı bir şekilde paylaştık. Yaşadığınız sorunları veya
 tam olarak anlatamadığımız yerleri yorum olarak bırakabilirsini. İyi çalışmalar...
*/

#include<iostream>
using namespace std;
int main(){
int n,m,EnB=0,EnK,Bkac,Kkac;//tanımlamalarımızı yaptık
cout<<"matris boyutlarini giriniz..";
cin>>n>>m;//matris boyutlarini girdik
cout<<"Sayilari giriniz..."<<endl;
    int matris[n][m]; //girilen boyutlarda bir matris olusturuyoruz.
for(int i=0;i<n;i++){//matris in 1. değerlerini döndürmeye baslıyoruz.
        for(int j=0;j<m;j++)//matrisin 2. değerlerini döndürmeye başlıyoruz.
{
    cout<<" Matris ["<<i<<"] ["<<j<<"] :    ";//kullanıcının matriste hangi değeri girecegi gösteriliyor
    cin>>matris[i][j];//kullanıcı belli yerdeki matrise deger atıyor.
    
}
}
EnK=matris[0][0]; // Kıyaslama icin girilmis olan bir değeri EN kücük sayi olarak belirledik.
EnB=matris[0][0];//Kıyaslama icin girilmis olan bir değeri EN büyük sayi olarak belirledik.
for(int i=0;i<n;i++)//tüm matris tekrardan dolaşılıyor.
  {
    for(int j=0;j<m;j++)
{if(matris[i][j]>EnB)//en büyük sayı kontrol ediliyor
    {
        EnB=matris[i][j];
        Bkac=i+j;
    }
    if(matris[i][j]<EnK)//en kücük sayı kontrol ediliyor.
       EnK=matris[i][j];
    cout<<matris[i][j]<<"   ";
}cout<<endl;
}
cout<<"En buyuk Sayi = "<<EnB<<endl<<"En Kucuk Sayi = "<<EnK;
  return 0; }
