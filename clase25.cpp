#include<iostream>
#include<cmath>
using namespace std;
void llenado(float **a, int filas, int columnas);
void imp(float *a,int filas,int columnas);
int main(){
  int numero;
  cout<<"Escriba un numero entre el 3 y el 11 "<<endl;
  cin>>numero;
  if(numero<3 || numero>11){
    cout<<"el numero está mal, verifiquelo"<<endl;
  }
}