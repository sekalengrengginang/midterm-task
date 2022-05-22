#include <iostream>
#include <iomanip>
using namespace std;
int angka[] = { 5, 8, 12, 15, 18, 19, 21, 23, 25, 30};
int cariAngka,tengah;



void cariBilangan(int angka[], int awal, int akhir, int cariAngka {
   if (awal <= akhir) {
      int mid = (p + r)/2;
      if (angka[tengah] == cariAngka)
         return tengah ;
      if (angka[tengah] > cariAngka
         return cariBilangan(angka, p, tengah-1, num);
      if (angka[tengah] < num)
         return cariBilangan(angka, tengah+1, r, num);
   }
   return -1;
}

















int main(){
    cout<<"Masukan Bilangan = ";cin>>cariAngka;
    cariBilangan();
}