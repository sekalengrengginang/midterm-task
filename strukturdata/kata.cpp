#include <iostream>
#include <algorithm>  
#include <vector>
using namespace std;


int main(){
string kata;
cout <<"Masukan Kata yang akan dibalik = ";cin>>kata;
    
    reverse(kata.begin(),kata.end());
    cout<< kata<<endl;
    return 0;

}