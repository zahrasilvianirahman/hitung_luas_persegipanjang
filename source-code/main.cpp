#include <iostream>
using namespace std;

int main() {
  float panjang, lebar, luas;
   
  cout<< "hitung nilai luas persegi panjang" <<endl;

  cout<< " masukkan nilai panjang :" <<endl;
  cin>> panjang;

  cout<< "masukkan nilai lebar :" <<endl;
  cin>> lebar;
  luas = panjang * lebar;

  cout<< "nilai luas adalah =" << luas <<endl ;
  cout<< endl;
    
  
  return 0;
}
