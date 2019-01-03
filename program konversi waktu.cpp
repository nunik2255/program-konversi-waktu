#include <iostream>
using namespace std;
int main ()
{
    int hari,jam,menit,detik;
    cout<<"PROGRAM KONVERSI WAKTU"<<endl;
    cout<<"Konversi hari ke detik"<<endl;
    cout<<"Masukan jumlah hari = " ;
    cin>>hari;
    hari=hari*86400;
    cout<<"hasillnya = "<<hari<<"detik"<<endl;
    cout<<"konversi jam ke detik"<<endl;
    cout<<"masukan jumlah jam = " ;
    cin>>jam;
    jam=jam*3600;
    cout<<"hasilnya = "<<jam<<"detik"<<endl;
    cout<<"konversi menit ke detik"<<endl;
    cout<<"masukan jumlah menit = " ;
    cin>>menit;
    menit=menit*60;
    cout<<"hasilnya = "<<menit<<"detik"<<endl;
    return 0;
}
