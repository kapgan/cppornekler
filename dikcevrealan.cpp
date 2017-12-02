Dikdortgen Alan/Cevre Programı

#include <iostream>
using namespace std;
int DikAlan(int,int); //Programa DikAlan diye boş bir öncü fonksiyon tanıttık.
int DikCevre(int,int);//
int main()
{
    cout<<"Dikdortgenin iki kenarini da giriniz"<<endl;
  int a,b,x;//kenar uzunlukları alınıyor.
  cin>>a>>b;
     cout<<"Hangi islemi yapmak istersiniz??"<<endl<<"1- Dikdortgen alani"<<endl<<"2-Dikdortgen Cevresi";
  cin>>x;//yapılacak olan işlem seciliyor.
switch (x)
  {
  case 1:
    DikAlan(a,b);//DikAlan adlı fonksiyona a ve b uzunluklarını yollanıyor.
    break;
  case 2:
      DikCevre(a,b);//DikCevre adlı fonksiyona a ve b uzunlukları yollanıyor.
  break;
    default:
        cout<<"Yanlis bir secim yaptiniz..";//yanlış bir secim yapıldıysa ekran a yazı cıkar ve program sonlanır.

  return 0;
  }
  }
int DikAlan(int x,int y) //Alan hesaplaması icin yazılan fonksiyon.
{
    cout<<"Dikdortgenin alani="<<x*y<<"'dir..."<<endl; //hesaplama ve ekran cıktısı bölümü...
}
int DikCevre(int x,int y) //Cevre hesaplaması icin yazılan fonksiyon.
{
    cout<<"Dikdortgenin cevresi="<<2*(x+y)<<"'dir..."<<endl;//hesaplama ve ekran cıktısı bölümü...
}
