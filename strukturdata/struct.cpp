#include <iostream>
using namespace std;

struct mahasiswa
{
    string nim;
    string nama;
    int nilai;
}mahasiswa1,mahasiswa2,mahasiswa3,mahasiswa4,mahasiswa5;

void struktur(){
mahasiswa1.nim = "21.11.6111";
mahasiswa1.nama ="Setsuna Yuuki";
mahasiswa1.nilai = 60;


mahasiswa2.nim = "21.11.3232";
mahasiswa2.nama ="Mia Taylor";
mahasiswa2.nilai = 30;


mahasiswa3.nim = "21.11.2311";
mahasiswa3.nama ="Lanzhu Zhong";
mahasiswa3.nilai = 30;


mahasiswa4.nim = "21.11.2443";
mahasiswa4.nama ="Asaka Karin";
mahasiswa4.nilai = 60;


mahasiswa5.nim = "21.11.8763";
mahasiswa5.nama ="Uehara Ayumu";
mahasiswa5.nilai = 80;
}
void tampilMahasiswa(){

cout<<"----Nama------------NIM----------------Nilai-----"<<endl;
cout<<mahasiswa1.nama<<"   "<<mahasiswa1.nim<<"   "<<mahasiswa1.nilai<<endl;
cout<<mahasiswa2.nama<<"   "<<mahasiswa2.nim<<"   "<<mahasiswa2.nilai<<endl;
cout<<mahasiswa3.nama<<"   "<<mahasiswa3.nim<<"   "<<mahasiswa3.nilai<<endl;
cout<<mahasiswa4.nama<<"   "<<mahasiswa4.nim<<"   "<<mahasiswa4.nilai<<endl;
cout<<mahasiswa5.nama<<"   "<<mahasiswa5.nim<<"   "<<mahasiswa5.nilai<<endl;

}

void hitungNilai(){
struktur();
int totalNilai,ratarata;

totalNilai= mahasiswa1.nilai + mahasiswa2.nilai + mahasiswa3.nilai + mahasiswa4.nilai + mahasiswa5.nilai;

ratarata = totalNilai / 5;
cout<<"Rata-rata Nilai = " <<ratarata<<endl;
cout<<"-------------------Status Kelulusan-----------------------\n";
if (mahasiswa1.nilai >= 60){
    cout<<"Mahasiswa "<<mahasiswa1.nama<<" Lulus\n";
}
else {
    cout<<"Mahasiswa "<<mahasiswa1.nama<<" Tidak Lulus\n";
}

if (mahasiswa2.nilai >= 60){
    cout<<"Mahasiswa "<<mahasiswa2.nama<<" Lulus\n";
}
else {
    cout<<"Mahasiswa "<<mahasiswa2.nama<<" Tidak Lulus\n";
}

if (mahasiswa3.nilai >= 60){
    cout<<"Mahasiswa "<<mahasiswa3.nama<<" Lulus\n";
}
else {
    cout<<"Mahasiswa "<<mahasiswa3.nama<<" Tidak Lulus\n";
}

if (mahasiswa4.nilai >= 60){
    cout<<"Mahasiswa "<<mahasiswa4.nama<<" Lulus\n";
}
else {
    cout<<"Mahasiswa "<<mahasiswa4.nama<<" Tidak Lulus\n";
}

if (mahasiswa5.nilai >= 60){
    cout<<"Mahasiswa "<<mahasiswa5.nama<<" Lulus\n";
}
else {
    cout<<"Mahasiswa "<<mahasiswa5.nama<<" Tidak Lulus\n";
}

}

int main(){
int pilihan;
    cout <<"------------------------------------------\n";
    cout<<"1.Tampilkan Data Mahasiswa\n";
    cout<<"2.Tampilkan Rata-rata nilai\n";
    cout<<"Pilih 1/2 = ";cin>>pilihan;
    cout <<"------------------------------------------\n";

    if (pilihan == 1){
        struktur();
    }
    else {
        hitungNilai();
    }






}