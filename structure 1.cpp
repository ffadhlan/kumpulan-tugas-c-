#include<conio.h>
#include<stdio.h>
#include<iostream.h>
#include<iomanip.h>



main()
{
struct data
{
char nim[5];
char nama[15];
int nilai;
}
mahasiswa;
clrscr();
cout<<"masukan NIM =";cin>>mahasiswa.nim;
cout<<"masukan Nama =";cin>>mahasiswa.nama;
cout<<"masukan Nilai Akhir =";cin>>mahasiswa.nilai;
cout<<"\n\n Data Yang Di Inputkan Adalah : \n\n";
cout<<"NIM ="<<mahasiswa.nim<<endl;
cout<<"Nama ="<<mahasiswa.nama<<endl;
cout<<"Nilaia Akhir ="<<mahasiswa.nilai<<endl;
getch();
}
