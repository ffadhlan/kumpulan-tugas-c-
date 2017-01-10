#include <stdio.h>
#include <conio.h>
#include <iostream.h>
#include <iomanip.h>
#include <windows.h>
#include <stdlib.h>


garis()
{
cout<<"============================== = SELAMAT DATANG = =============================\n";
}
bintang()
{
cout<<"------------------------------------- DI --------------------------------------\n";
}
minimarket()
{
cout<<"****************** * * *PROGRAM PENJUALAN RAMAYANA STORE* * * *****************\n";
}
main()
{
   int i,j;
   char kode_k,kasir[20],lagi;
   long int total_byr=0,bayar,kembali;
   char kode_brg[30],*barang[30];
   int harga[30];
   int jml_bel[30];
   long int sub_total[30];
   system("color 3");
   atas:
   clrscr();
   garis();
   bintang();
   minimarket();
   cout<<"----------------------\n";
   cout<<" | NO.| KODE KASIR |\n";
   cout<<"----------------------\n";
   cout<<" | 1. |    CKS     |\n";
   cout<<" | 2. |    TIS     |\n";
   cout<<" | 3. |    FFN     |\n";
   cout<<" | 4. |    NHA     |\n";
   cout<<" | 5. |    KMA     |\n";
   cout<<" | 6. |    STB     |\n";
   cout<<"----------------------\n";
   cout<<" Masukkan Kode Kasir[1/2/3/4/5/6]:"; cin>>kode_k;
   switch(kode_k)
   {
      case'1':
      strcpy(kasir,"CKS");
      break;
      case'2':
      strcpy(kasir,"TIS");
      break;
      case'3':
      strcpy(kasir,"FFN");
      break;
      case'4':
      strcpy(kasir,"NHA");
      break;
      case'5':
      strcpy(kasir,"KMA");
      break;
      case'6':
      strcpy(kasir,"STB");
      break;
      default:
      strcpy(kasir,"Kode Salah");
      break;
   }
   cout<<" Jumlah item : ";cin>>j;
   clrscr();
   minimarket();
   cout<<"=============================================================================\n";
   cout<<"     | NO.|                 NAMA BARANG              | KODE BARANG |\n";
   cout<<"=============================================================================\n";
   cout<<"     | 1. |   Travel Bag Diesel The Misty Dieselss   |     [D]     |\n";
   cout<<"     | 2. |   Mini Backpack Pattern by JJ Bags Con   |     [B]     |\n";
   cout<<"     | 4. |   Sepatu Pria Diesel House Mix Colours   |     [H]     |\n";
   cout<<"     | 5. |   Slip On APC by Adorable JJ Mix On Pc   |     [S]     |\n";
   cout<<"     | 6. |   Washed Jeans Streched Dark Blue sdbe   |     [W]     |\n";
   cout<<"     | 7. |   Celana Panjang Wanita Kulot JJ Jeans   |     [J]     |\n";
   cout<<"     | 8. |   Blouse Sleeveless Patch Long Top Ten   |     [L]     |\n";
   cout<<"     | 9. |   Jaket Bomber Pria Multi Pocket Crooz   |     [M]     |\n";
   cout<<"     | 10.|   Gamis Anak by Kids Smile Company kid   |     [G]     |\n";
   cout<<"=============================================================================\n";
   cout<<endl;
   for(i=1;i<=j;i++)
   {
   cout<<"                                   Data Ke-"<<i<<endl;
   cout<<"                                 Kode Barang : ";cin>>kode_brg[i];
   cout<<"                                 Jumlah Beli : ";cin>>jml_bel[i];
   }
   for(i=1;i<=j;i++)
   {
   if(kode_brg[i]=='D'||kode_brg[i]=='d')
      {
      barang[i]="Travel Bag Diesel The Misty Dieselss";
      harga[i]=150900;
      }
      else if(kode_brg[i]=='B'||kode_brg[i]=='b')
      {
      barang[i]="Mini Backpack Pattern by JJ Bags Con";
      harga[i]=149900;
      }
      else if(kode_brg[i]=='H'||kode_brg[i]=='h')
      {
      barang[i]="Sepatu Pria Diesel House Mix Colours";
      harga[i]=239900;
      }
      else if(kode_brg[i]=='S'||kode_brg[i]=='s')
      {
      barang[i]="Slip On APC by Adorable JJ Mix On Pc";
      harga[i]=259900;
      }
      else if(kode_brg[i]=='W'||kode_brg[i]=='w')
      {
      barang[i]="Washed Jeans Streched Dark Blue sdbe";
      harga[i]=329900;
      }
      else if(kode_brg[i]=='J'||kode_brg[i]=='j')
      {
      barang[i]="Celana Panjang Wanita Kulot JJ Jeans";
      harga[i]=289900;
      }
      else if(kode_brg[i]=='L'||kode_brg[i]=='l')
      {
      barang[i]="Blouse Sleeveless Patch Long Top Ten";
      harga[i]=169900;
      }
      else if(kode_brg[i]=='M'||kode_brg[i]=='m')
      {
      barang[i]="Jaket Bomber Pria Multi Pocket Crooz";
      harga[i]=279900;
      }
      else if(kode_brg[i]=='G'||kode_brg[i]=='g')
      {
      barang[i]="Gamis Anak by Kids Smile Company kid";
      harga[i]=129900;
      }
      else
      {
      barang[i]="Kode Salah";
      harga[i]=0;
      }
   }
   clrscr();
   minimarket();
   cout<<"=============================================================================\n";
   cout<<"                                 Nama Kasir : "<<kasir<<endl;
   cout<<"=============================================================================\n";
   cout<<"| No.|               Nama                |  Harga  |  Jumlah  |  Sub  |\n";
   cout<<"|    |              Barang               |  Barang |  Barang  | Total |\n";
   cout<<"=============================================================================\n";
   for(i=1;i<=j;i++)
   {
      sub_total[i]=jml_bel[i]*harga[i];
      cout<<setiosflags(ios::left)<<setw(5)<<i;
      cout<<setiosflags(ios::right)<<setw(18)<<barang[i];
      cout<<setiosflags(ios::right)<<setw(8)<<harga[i];
      cout<<setiosflags(ios::right)<<setw(6)<<jml_bel[i];
      cout<<setiosflags(ios::right)<<setw(15)<<sub_total[i]<<endl;
      total_byr=total_byr+sub_total[i];
   }
   cout<<"                               Total Bayar  :Rp. "<<total_byr<<endl;
   cout<<"                               Uang Bayar   :Rp. ";cin>>bayar;
   kembali=bayar-total_byr;
   cout<<"                               Uang Kembali :Rp. "<<kembali<<endl;
   cout<<"******************************* Terima Kasih ********************************\n";
   cout<<"Input Lagi [Y/T] : "; cin>>lagi;
   if(lagi=='Y'||lagi=='y')
   goto atas;
   else
   goto selesai;
   getch();
   selesai:
}