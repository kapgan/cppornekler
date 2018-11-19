#include <iostream>

using namespace std;

int b[3][3],a[3][3];
int saydir(int a[3][3])
{   int sayac=0;
    int b[3][3];
    int j,m;
     for(int i=0; i<3; i++)
        {
            for(int k=0; k<3; k++)
            {  if(a[i][k]>sayac)
                {
                  sayac=a[i][k];
                  j=i;
                  m=k;
                }
            }
        }
        a[j][m]=0;
        return sayac;
}
void duzenle(){

    for(int i=0; i<3; i++)
    {
        for(int k=0; k<3; k++)
        {
            cout<<b[i][k]<<" ";
        }
        cout<<endl;
    }
    }
int cikti(int a[3][3])
    {
        for(int i=0; i<3; i++) {
            for(int k=0; k<3; k++)
            {
               b[i][k]=saydir(a);
            }
        }
        duzenle();
    }
int main()
{
    cout << "sayilari giriniz" << endl;
    int a[3][3]; int x,sayac=0;
    for(int i=0; i<3; i++)
    {   for(int k=0; k<3; k++)
    {   cin>>x;
        a[i][k]=x;
    }
    }
     cout<<endl;
    cikti(a);
    return 0;
}
