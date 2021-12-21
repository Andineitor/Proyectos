#include <iostream>
#include "calculos.h"
#include "calculos.cpp"
using namespace std;

int main() {
  int aux=0;
  cout<<""<<endl;
  cout<<"\t\t Bienvenidos al Sistema de Calculos"<<endl<<endl;
  do{
  aux = menu();
  switch(aux){
    case 1:
    
      suma();
      break;
    
    case 2:
    
      resta();
      break;
    
    case 3:
    
      multi();
      break;

    case 4:
    
      div();
      break;
    
    case 5:

      poten();
      break;
    
    case 6:
    
      raiz();
      break;
    
    case 7:
    
      facto();
      break;
    
    case 0:
    
      cout<<endl<<"\t Gracias por usar nuestro sistema"<<endl;
      break;
    
    default:
    
      cout<<endl<<"\t Opcion invalida"<<endl;
      cout<<endl<<" ---------------------------------------"<<endl;  
      cout<<endl<<endl<<" Intente denuevo"<<endl<<endl;
      
  }
  
  }
  
  		while(aux!=0);
  
}
