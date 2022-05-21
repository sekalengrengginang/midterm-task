#include <iostream>
using namespace std;
void insertionNIM(){
int i,j;
string temp;
for (i=0;i<mahasiswa; i++){

temp = NIM[i];
j = i-1;

while(NIM[j] < temp && j >= 0){
    NIM[j+1] = NIM[j];
    j--;
}
NIM[j+1] = temp;
}
}
