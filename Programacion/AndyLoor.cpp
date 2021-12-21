#include <iostream>
#include <iomanip>
using namespace std;

void ejecucion(int n1);

int main(){
	int n1;
	cout<<endl<<"\t Cuadro Cocentrico"<<endl<<endl;
	cout<<" Ingrese la dimencion de su cuadro: ";
	cin>>n1;
	ejecucion(n1);

}

void ejecucion(int n1){
	int i,j,n2;
	cout<<endl<<endl;
	
	if(n1%2 == 0){
		n1++;
	}
	for(i=1; i<=n1; i++){
	if(i<=(n1+1)/2){
		n2=i;
	}else{
		n2--;
	} 
	cout<<setw(30)<<left;
	for(j=0; j<=n1; j++){
		if(i%2 !=0){
			
			if(j>=n2 && j<=(n1-(n2-1))){
				cout<<" *";
			}else if (j%2 != 0){
				cout<<" *";
			}else{
				cout<<"  ";
			} 	
		}else{
			if((j<n2 || j>(n1-(n2-1))) && (j%2 != 0)){
				cout<<" *";
			}else{
				cout<<"  ";
			}	
		}
		}	
			cout<<endl;
	}
			cout<<endl<<endl;
}
