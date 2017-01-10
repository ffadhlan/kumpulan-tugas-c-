#include<conio.h>
#include<stdio.h>
#include<iostream.h>
#include<iomanip.h>


main()
{
int i,j=1,k=1;
struct data
{
char nim[5];
char nama[15];
float nilai;
}
mhs[5];
clrscr();
for(i=0;i<2;i++)
{
cout<<"Data Ke-"<<j++<<endl;
cout<<"masukan NIM =";cin>>mhs[i].nim;
cout<<"masukan Nama =";cin>>mhs[i].nama;
cout<<"masukan Nilai Akhir =";cin>>mhs[i].nilai;
cout<<endl;
}
clrscr();
for(i=0;i<2;i++)
{
cout<<"Dta Ke-"<<endl;
cout<<"NIM ="<<mhs[i].nim<<endl;

cout<<"Nama ="<<mhs[i].nama<<endl;
cout<<"Nilai Akhir ="<<mhs[i].nilai<<endl;
cout<<"Keterangan yang didapat =";

cout<<endl;
}
 getch();
}
