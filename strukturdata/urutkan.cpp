#include <iostream>
using namespace std;
int angka[9]={ 5, 28, 19, 15, 20, 33, 12, 17, 10};
int i,j,jumlah=9,temp;

//decending
void insertionAngka(){
for (i=0;i<jumlah; i++){

temp = angka[i];
j = i-1;

while(angka[j] < temp && j >= 0){
    angka[j+1] = angka[j];
    j--;
}
angka[j+1] = temp;
}
}

int main(){
    insertionAngka();
    cout<<"Angka yg diurutkan =";
    for (i=0;i<jumlah;i++){
        cout<<" "<<angka[i];
    }    
    cout<<endl;
}