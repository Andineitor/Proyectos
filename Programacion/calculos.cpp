#include<math.h>
using namespace std;

int menu(){
	
  int op;
  cout<<""<<endl;
  cout<<"  \t Ingrese la ecuasion deseada"<<endl<<endl;
  cout<<"\t 1.-Suma"<<endl;
  cout<<"\t 2.-Restar"<<endl;
  cout<<"\t 3.-Multiplicar"<<endl;
  cout<<"\t 4.-Dividir"<<endl;
  cout<<"\t 5.-Potencia"<<endl;
  cout<<"\t 6.-Raiz Cuadrada"<<endl;
  cout<<"\t 7.-Factorial"<<endl;
  cout<<"\t 0.-Salir"<<endl;
  cout<<endl<<" Opcion: ";
  cin>>op;
  return  op;

}


void suma(){
	
  double n1,n2,total;
  cout<<" Ingrese el primer numero: ";
  cin>>n1;
  cout<<" Ingrese el segundo numero: ";
  cin>>n2;
  total=n1+n2;
  cout<<" La sumatoria es: "<<total<<endl<<endl;
  cout<<endl<<" ---------------------------------------"<<endl;
  
}

void resta(){
	
  double n1,n2,total;
  cout<<" Ingrese el primer numero: ";
  cin>>n1;
  cout<<" Ingrese el segundo numero: ";
  cin>>n2;
  total=n1-n2;
  cout<<" La resta es: "<<total<<endl<<endl;
  cout<<endl<<" ---------------------------------------"<<endl;
  
}

void multi(){
	
  double n1,n2,total;
  cout<<" Ingrese el primer numero: ";
  cin>>n1;
  cout<<" Ingrese el segundo numero: ";
  cin>>n2;
  total=n1*n2;
  cout<<" La multiplicasion es: "<<total<<endl<<endl;
  cout<<endl<<" ---------------------------------------"<<endl;
    
}

void div(){
	
  double n1,n2,total;
  cout<<" Ingrese el primer numero: ";
  cin>>n1;
  cout<<" Ingrese el segundo numero: ";
  cin>>n2;
  total=n1/n2;
  cout<<" La division es: "<<total<<endl<<endl;
  cout<<endl<<" ---------------------------------------"<<endl;
    
}

void poten(){
	
  double n1,n2,total;
  cout<<" Ingrese el numero: ";
  cin>>n1;
  cout<<" Ingrese la potencia: ";
  cin>>n2;
  total=pow(n1,n2);
  cout<<" La potencia es: "<<total<<endl<<endl;
  cout<<endl<<" ---------------------------------------"<<endl;
    
}

void raiz(){
	
  double n1,total;
  cout<<" Ingrese el numero: ";
  cin>>n1;
  total=sqrt(n1);
  cout<<" La raiz es: "<<total<<endl<<endl;
  cout<<endl<<" ---------------------------------------"<<endl;
    
}

void facto(){
	
  int total=1;
  int n1;
  cout<<" Ingrese el numero: ";
  cin>>n1;
  for(int i=1; i<n1+1; i++){
    total=total*i;
  }
  cout<<" El factorial es: "<<total<<endl<<endl;
  cout<<endl<<" ---------------------------------------"<<endl; 
   
}
