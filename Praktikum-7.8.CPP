#include <iostream.h>
#include <conio.h>
#include <stdio.h>
char nama[20], kelas[8],abs[10];
void main()
{
int data[5];
int i,total,rata,tmp;
clrscr();
cout<<"aplikasi nilai hitung rata-rata"<<endl;
cout<<"============================================="<<endl;
cout<<"Masukkan nama: ";cin>>nama;
cout<<"=============================================="<<endl;
cout<<"Masukkan nilai ulangan mahasiswa"<<endl;
total=0;

for(i=0; i<5; i++)
{
cout<<"masukkan nilai ke-"<<(i+1)<<" : "; cin>>data[i];
total=total+data[i];
}
cout<<endl;
cout<<"================================================"<<endl;
cout<<"mahasiswa dengan nama "<<nama<<" punya nilai sebagai berikut: \n"<<endl;
rata=total/5;
cout<<"total: "<<total<<endl;
cout<<"rata-rata: "<<rata<<endl;
getch();
}
