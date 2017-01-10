#include <iostream.h>
#include <conio.h>
#include <string.h>
#include <stdio.h>
#include <iomanip.h>
#include <stdlib.h>


menu(); tgl(); entrydata(); long fgp(long gp); long tjsts(long tklrg);
long tjjmtw(long bket); list(); long bnslvl(long blvl); bye();
void cetak(int row, char *text); int bom(); back();
char nm[30], m[30], sts;
int lmkrj, jmk, jmtw, lvl, ank, d, pilihan;
long y, jgp, bkel, jbket, bolvl;


void main()
{
 for (int i=1; i>0; i++)
 {
 clrscr();
 menu();
 if (pilihan==1)
  {
  tgl();
  }
  else if (pilihan==2)
  {
  entrydata();
  }
  else if (pilihan==3)
  {
   clrscr();
   cout<<"\n";
   cout<<"List gaji karyawan PT. GARUDA JAYA \n";
   cout<<"Tanggal: "<<d<<" "<<m<<" "<<y<<"\n";
   list();
   long fgp(long gp);
   long tjsts(long tklrg);
   long tjjmtw(long bket);
   long tj_trans=25000*jmk;
   gotoxy(3,10);cout<<"1";
   gotoxy(7,10);cout<<nm;
   gotoxy(17,10);cout<<lmkrj;
   gotoxy(25,10);cout<<lvl;
   gotoxy(31,10);cout<<fgp(jgp);
   gotoxy(39,10);cout<<tj_trans;
   gotoxy(48,10);cout<<tjsts(bkel);
   gotoxy(56,10);cout<<tjjmtw(jbket);
   gotoxy(64,10);cout<<bnslvl(bolvl);
   long ttl=fgp(jgp)+tj_trans+tjsts(bkel)+tjjmtw(jbket)+bolvl;//total gaji ada disini
   gotoxy(72,10);cout<<ttl;
   gotoxy(72,14);cout<<ttl;
   gotoxy(1,17);cout<<endl;
   back();
   }
 else if (pilihan==4)
 {
 bom();
 exit(bom());
 }
 else
 {
 cout<<"kode yang anda masukan salah!!, silakan ulangi lagi, terimakasih";
 }
 }
getch();
}

menu()
{
cout<<"============================\n";
cout<<"1. Atur Tanggal Penggajian \n";
cout<<"2. Entri Data \n";
cout<<"3. List Data \n";
cout<<"4. Exit \n";
cout<<"============================\n";
cout<<"\n";
cout<<"Pilihan Anda (1-4) ? : ";
cin>>pilihan;
}

entrydata()
{
cout<<endl;
cout<<"Nama"<<setw(22)<<": ";cin>>nm;
cout<<"Lama kerja(tahun)"<<setw(9)<<": ";cin>>lmkrj;
cout<<"Jumlah masuk kerja"<<setw(8)<<": ";cin>>jmk;
cout<<"Jumlah masuk tepat waktu"<<setw(0)<<": ";cin>>jmtw;
cout<<"level karyawan (1/2/3)"<<setw(4)<<": ";cin>>lvl;
cout<<"Status menikah (Y/T)"<<setw(6)<<": ";cin>>sts;
if(sts =='y'|| sts == 'Y')
{
cout<<"Jumlah Anak"<<setw(15)<<": ";cin>>ank;
}
else
{
clrscr();
menu();
}
}

tgl()
{
cout<<"Masukkan Tanggal, Bulan dan Tahun Penggajian \n";
cout<<"Tanggal : ";cin>>d;
cout<<"Bulan : ";cin>>m;
cout<<"Tahun : ";cin>>y;
}

long fgp(long gp)
{
 if(lmkrj<=1)
 {
 gp=35000000;
 }
 else if(lmkrj>=2 && lmkrj<=3)
 {
 gp=45000000;
 }
 else if(lmkrj>=4 && lmkrj<=5)
 {
 gp=50000000;
 }
 else
 {
 gp=50000000;
 }
 return(gp);
}

long tjsts(long tklrg)
{
long istri, anak;
      if(sts =='y'|| sts == 'Y')
      {
      istri=550000;
      }
      else
      {
      istri=0;
      }
       if(ank==1)
         {
         anak=200000;
         }
         else if(ank==2)
         {
         anak=300000*2;
         }
         else if(ank>=3)
         {
         anak=400000*3;
         }
         else
         {
         anak=0;
         }
tklrg=istri+anak;
return (tklrg);
}

long tjjmtw(long bket)
{
 bket=50000*jmtw;
 return(bket);
}

long bnslvl(long blvl)
{
 if(lvl==1)
 {
   blvl=125000;
   }
 else if(lvl==2)
 {
   blvl=200000;
   }
 else if(lvl>=3)
 {
   blvl=350000;
   }
 else
 {
   blvl=0;
   }
 return (blvl);
}

list()
{
cout<<"+---+----------+-------+-----+-------+--------+-------+-------+-------+--------+ \n";
cout<<"|No.|Nama      |LK(Th) |Level|Gapok  |T. Trans|T.Kel  |B.Ket  |B.Level|Total   | \n";
cout<<"+---+----------+-------+-----+-------+--------+-------+-------+-------+--------+ \n";
cout<<"|   |          |       |     |       |        |       |       |       |        | \n";
cout<<"+---+----------+-------+-----+-------+--------+-------+-------+-------+--------+ \n";
cout<<"|                                            Total gaji dikeluarkan   |        | \n";
cout<<"+---+----------+-------+-----+-------+--------+-------+-------+-------+--------+ \n";
}

bye()
 {
   clrscr();
   cetak(1,"PT. GARUDA JAYA");
   cetak(2,"TUGAS UAS");
   cetak(3,"PEMOGRAMAN C++");
   cetak(4,"AUTHOR : KELOMPOK 3");
   cetak(5,"PRODI  : D3, MANAGEMENT INFORMATIKA");
   cetak(6,"BSI BSD");
   cetak(7,"Please Sabar broo...");
 }

void cetak(int row, char *text)
 {
 gotoxy(40-strlen(text)/2,row); cout<<text;
 }

int bom()
{
int x;
for(int n=5555;n>=1;n--)
{
 for(int m=n;m>=1;m--)
 {
    for(int o=m;o>=1;o--)
  {
    x=o;
    x--;
 }
   x=m;
   x--;
 }
   x=n;
   bye();
   cout<<x;
 }
return 0;
}

back()
{
int w;
do{
cout<<"Silakan Tekan 0 untuk kembali ke menu";cin>>w;
if (w==0)
 {
   clrscr();
   menu();
   }
   else
   {
   cout<<"angka yang anda masukan tidak benar"<<endl;
   }
}
while(w != 0);
}

