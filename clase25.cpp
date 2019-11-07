#include<iostream>
#include<cmath>

using namespace std;

float** llenado(float** a, int filas, int columnas);
int imp_head(float** a,int filas,int columnas);


int main(){
  int numero;
    
  cout<<"Escriba un numero entre el 3 y el 11 "<<endl;
    
  cin>>numero;
    
  if(numero<3 || numero>11)
  {
      
    cout<<"el numero está mal, verifiquelo"<<endl;
  }
    
/*inicializacion de la matriz*/
  float **matriz;
    
  matriz = new float* [numero+2];
    

  llenado(matriz,numero+2,numero);
  imp_head(matriz,numero+2,numero);

    
  return 0; 
}

float** llenado(float **a, int filas, int columnas){
  for (int i = 0; i<filas; i++){
      a[i] = new float [columnas];
    for(int j = 0; j<columnas;j++){
      a[i][j] = i+j;
      cout<<a[i][j]<<endl;
    }

  }
  return a;

}
int imp_head(float **a,int filas,int columnas){
    int counter = 0;
  for(int i = 0; i<columnas; i++){
    cout << "cada fila da = "<<*a[i]<<endl;
  }
  for(int i = 0;i<filas;i++){
    counter += a[0][i];
  }
  cout<<"el resultado final de sumar las columnas es"<<counter<<endl;
    
    
}
