#include <iostream>

using namespace std;

void dibaliKata(){
string input; cout<<"Masukan Kata yg ingin dibalik = ";cin>>input;
for (int a = input.size()-1; a >=0;a--){
          cout<<input[a];
}
}

int main(){
dibaliKata();

}