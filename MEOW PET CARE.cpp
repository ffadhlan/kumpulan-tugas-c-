#include <stdio.h>
#include <conio.h>
#include <iostream.h>
#include <iomanip.h>

judul()
{
cout<<"\PENITIPAN HEWAN PELIHARAAN"<<endl;
cout<<"\     \"MEOW PET CARE\""<<endl;
cout<<"=*************************="<<endl;
}

main()
{
char kohew[5],koper[5],*jenhew[5],jenper[5][20],np[20],npem[20];
int i,j,jumhew[5];
long biaya[5],subtot[5],totbay=0,ubay,ukem;

awal:
clrscr();

judul();
cout<<"Nama Petugas : ";gets(np);
cout<<"Nama Pemilik : ";gets(npem);
cout<<"Jumlah Data Peliharaan : ";cin>>j;

for(i=1;i<=j;i++)
{
cout<<"Hewan Ke-"<<i<<endl;
cout<<"Kode Jenis Hewan[K/L] : ";cin>>kohew[i];
cout<<"Kode Perawatan : ";cin>>koper[i];
cout<<"Jumlah Hewan : ";cin>>jumhew[i];
if(kohew[i]=='K'||kohew[i]=='k')
{
strcpy(jenhew[i],"Kucing");
if(koper[i]=='1')
{
strcpy(jenper[i],"Lux");
biaya[i]=25000;
}
else
{
strcpy(jenper[i],"Intensif");
biaya[i]=30000;
}
}
else if(kohew[i]=='H'||kohew[i]=='h')
{
strcpy(jenhew[i],"Hamster");
if(koper[i]=='1')
{
strcpy(jenper[i],"Lux");
biaya[i]=25000;
}
else
{
strcpy(jenper[i],"Intensif");
biaya[i]=30000;
}
}

subtot[i]=biaya[i]*jumhew[i];
totbay=totbay+subtot[i];
cout<<endl;
}
clrscr();
judul();
cout<<"Nama Petugas : "<<np<<endl;
cout<<"Nama Pemiik : "<<npem<<endl;
cout<<"==============================================================="<<endl;
cout<<"No  Jenis   Jenis       Biaya       Jumlah   Subtotal"<<endl;
cout<<"    Hewan   Perawatan   Perawatan   Hewan"<<endl;
cout<<"==============================================================="<<endl;
for(i=1;i<=j;i++)
{
cout<<setiosflags(ios::left)<<setw(5)<<i;
cout<<setiosflags(ios::left)<<setw(12)<<jenhew[i];
cout<<setiosflags(ios::left)<<setw(15)<<jenper[i];
cout<<setiosflags(ios::left)<<setw(20)<<biaya[i];
cout<<setiosflags(ios::left)<<setw(25)<<jumhew[i];
cout<<setiosflags(ios::left)<<setw(23)<<subtot[i]<<endl;
}
cout<<endl;
cout<<"========================================================================"<<endl;
cout<<"\t\t\t Total Bayar : Rp. "<<totbay<<endl;
cout<<"\t\t\t Uang Bayar : Rp. ";cin>>ubay;
ukem=ubay-totbay;
cout<<"\t\t\t Uang Kembali : Rp. "<<ukem<<endl;
getch();
}
