#include <iostream>
#include <conio.h>
#include <iomanip>
using namespace std;
int main()
{
//Pendeklarassian variabel
int nilai[20];
int i,j,n;
int temp, awal, akhir, tengah, bilangan;
//Proses penginputan data
cout<<"Banyak Bilangan: ";
cin>>n;
for(i=0;i<n;i++)
{
cout<<"Elemen ke-"<<i<<" =";
cin>>nilai[i];
}
cout<<"\n\nElemen sebelum diurut = ";
for(i=0;i<n;i++)
{
cout<<setw(3)<<nilai[i];
}
//Proses pengurutan data
for(i=0;i<n-1;i++)
{
for(j=i+1;j<n;j++)
{
if(nilai[i]>nilai[j])
{
temp = nilai[i];
nilai[i]=nilai[j];
nilai[j]=temp;
}
}
}
cout<<"\nElemen Setelah Di Urut = ";
for(i=0;i<n;i++)
{
cout<<setw(3)<<nilai[i];
}
cout<<"\nIndeks Elemen =";
for(i=0;i<n;i++)
{
cout<<setw(3)<<i;
}
cout<<"\n\nMasukan data Yang Akan Anda Cari: ";
cin>>bilangan;
//Proses pencarian data
awal = 0;
akhir =n-1;
do
{
tengah = (akhir+awal)/2;
if(bilangan < nilai[tengah])
{
akhir = tengah -1;
}
else
{
awal = tengah +1;
}
}
while((akhir>=awal)&&(nilai[tengah] !=bilangan));
{
if (nilai[tengah]==bilangan)
{
cout<<"\nData "<<bilangan<<" Ada dalam Array";
cout<<" Pada posisi "<<tengah;
}
else
{
cout<<"\nData "<<bilangan<<" tidak ada dalam array\n";
}
}
getch();
return 0;
}
