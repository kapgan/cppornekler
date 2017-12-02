Merhaba arkadaşlar bu paylaşımımızda 

#include <iostream>
using namespace std;
void AnaEkran();//protatip fonksiyonları tanımlıyoruz.
void ParaCekme();
void ParaYatirma();
int Bakiye=0;//bakiyeyi herzaman rahatlıkla güncel tutabilmek için Global tanımladık.
int main()
{ AnaEkran();
    return 0;
}
    void AnaEkran()
{
    cout<<"Mevcut Bakiyeniz ="<<Bakiye<<"TL dir..\nPara Yatirmak icin 1->'e\nPara Cekmek icin 2->'ye basiniz...\n";
    int secim;
    cin>>secim;
    system("cls");//ekran temizleme komutu.

    switch (secim)//yapılacak olan işlemi seçiyoruz.
    {
    case 1:
        ParaYatirma();
        break;
    case 2:
        ParaCekme();
    default:
        cout<<"Yanlis bir tuslama yaptiniz... Ana ekranaa yonlendiriliyorsunuz..";
        AnaEkran();
    }
}
void ParaCekme()//para çekmek için yönlendirilen fonksiyon.
{
    int cekilecek=0,beslik=0,onluk=0,yirmilik=0,ellilik=0,yuzluk=0,ikiyuzluk=0;//tüm banknotların adetlerini tutugumuz int leri tanımladık ve 0 a atadık.
    cout<<"Cekmek istediginiz parayi giriniz...";
    cin>>cekilecek;//kullanıcı cekilecek tutarı girdi
    int a=cekilecek;//cekilecek tutarı yedekledik.
    if (Bakiye>=cekilecek)//çekilecek tutarın bakiyeden fazla olmadığını kontrol ediyoruz.
    {
        if(cekilecek%5==0) //çekilecek tutarın 5 ve katı olduğunu kontrol ediyourz.
        {
            Bakiye-=cekilecek;//cekilecek tutarı bakiyeden düşüyor bakiyeyi güncelliyoruz.
            if(cekilecek/200>=1) //tutar da 200 tl varmı diye bakıyoruz varsa aşşağıda kaçtane 200 oldugunu belirliyoruz.
            {
                ikiyuzluk=cekilecek/200;
                cekilecek-=ikiyuzluk*200;
            }
            if (cekilecek/100>=1) //38. satırla aynı işlemler.
            {
                yuzluk=cekilecek/100;
                cekilecek-=yuzluk*100;
            }
            if(cekilecek/50>=1)//38. satırla aynı işlemler.
            {
                ellilik=cekilecek/50;
                cekilecek-=ellilik*50;
            }
              if(cekilecek/20>=1)//38. satırla aynı işlemler.
            {
                yirmilik=cekilecek/20;
                cekilecek-=yirmilik*20;
            }
              if(cekilecek/10>=1)//38. satırla aynı işlemler.
            {
                onluk=cekilecek/10;
                cekilecek-=onluk*10;
            }
              if(cekilecek/5>=1)//38. satırla aynı işlemler.
            {
                beslik=cekilecek/5;
                cekilecek-=beslik*5;
            }
            cout<<"Kalan Bakiyeniz...:"<<Bakiye<<endl<<"Cektiginiz Tutar...:"<<a<<endl;//kalan bakiye ve banknotlar ekrana yazdırılır.
            cout<<ikiyuzluk<<"\t 200 Tl\n"<<yuzluk<<"\t 100 Tl\n"<<ellilik<<"\t 50 TL\n"<<yirmilik<<"\t 20 TL\n"<<onluk<<"\t 10 Tl\n"<<beslik<<"\t 5 Tl\n";
            AnaEkran();
        }
        else
            cout<<"Mevcut bakiyenizden daha yuksek tutar girdiniz... Tekrar deneyiniz...";
    ParaCekme();
    }
    }
    void ParaYatirma()//para yatırmak icin kullandığımız fonksiyon
    {
        int tutar=0;
        cout<<"Yatiraginiz tutari giriniz...";
        cin>>tutar;
        if(tutar%5!=0)
        {
            cout<<" Girdiginiz tutar 5 tl ve katlari olabilir... Anaekrana yonlendiriliyorsunuz...";AnaEkran();
        }
        else
        {
            Bakiye+=tutar;//yatırılan para güncel olarak bakiyeye eklenir.
            cout<<"Para yatirma isleminiz basari ile gerceklesmistir...\n";
            cout<<"Ana ekrana donmek icin 1'e tekrar para yatirmak icin 2'ye basiniz...";
            int a;
            cin>>a;
            if(a==1)
                AnaEkran();
            else if(a==2)
                ParaYatirma();
            else
            {
                cout<<"Yanlis bir tuslama yaptiniz... Ana ekrana yonlendiriliyorsunuz...";
                AnaEkran();
            }
        }
    }
