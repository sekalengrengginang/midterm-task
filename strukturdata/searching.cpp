#include <iostream>

using namespace std;
int siswa[10] = { 5, 8, 12, 15, 18, 19, 21, 23, 25, 30};
int cariAngka;



void cariBilangan(){
    int awal,tengah,akhir,b=0;
    awal=0;
    akhir=9;

while ( b == 0 && awal <= akhir){

 tengah = (awal + akhir)/2;

    if(siswa[tengah] == cariAngka ){
        b=1;
        break;
    }

    else if (siswa[tengah]<cariAngka){
        awal = tengah +1;
    }
    else{
        akhir = tengah-1;
}

if (b == 1){
    cout<<"Data ditemukan pada index ke"<<tengah<<endl;
}
else
cout<<"data tidak ditemukan";
}
}

int main(){
   cout<<"Masukan Bilangan = ";cin>>cariAngka;
   cariBilangan();
}
