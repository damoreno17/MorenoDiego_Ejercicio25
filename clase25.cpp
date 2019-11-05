#include<iostream>
#include<cmath>
using namespace std;
void llenado(float **a, int filas, int columnas);
void imp_head(float *a,int filas,int columnas);
int main(){
  int numero;
  cout<<"Escriba un numero entre el 3 y el 11 "<<endl;
  cin>>numero;
  if(numero<3 || numero>11){
    cout<<"el numero está mal, verifiquelo"<<endl;
  }
/*inicializacion de la matriz*/
  float **matriz;
  matriz = new float *[numero+2];
  for(int i = 0; i<numero+2;i++)
   matriz[i] = new float[numero+2];
  llenado(matriz,numero+2,numero);
  imp_head(*[numero+2],numero+2,numero);
  return 0; 
}

void llenado(float **a, int filas, int columnas){
  for (int i = 0; i<filas; i++){
    for(int j = 0; j<columnas;j++){
      a[i][j] = i+j;
    }

  }

}
void imp_head(float *a,int filas,int columnas){
  for(int i = 0; i<columnas; i++){
    cout << "la cabeza es"<<i<<":"<<a[i]<<endl;
  }
  float sum = 0;
  for(int i = 0;i<filas;i++){
    int pseudo_sum = columnas +i;
    sum = sum + *(a + pseudo_sum);
  }
  cout<<"resultado de sumar columna 1"<<sum<<endl;
    
    
}