// 2.cpp

#include <iostream>
#include <iomanip>
using namespace std;
void ordena(int CLAVE[], int A[], int n)
{
	//ordena en forma ascendente
	for(int i=0;i<n;i++)
		for(int j=0;j<n-1;j++)
			if (CLAVE[j]>CLAVE[j+1]){			
				swap(CLAVE[j],CLAVE[j+1]);
				swap(A[j],A[j+1]);				
			}
}
const int n=10;

int main(){
int K;
int PRECIO[n] = { 60, 55, 30, 25, 45, 15, 30, 20, 50, 45  };
int MES[n]   =  { 10,  9,  4,  3,  7,  1,  4,  2,  8,  7  };
int monto_total = 0 ; 
int num_panetones=0;
cout<<"Numero de panetones a comprar: "; cin>>K;
ordena(MES,PRECIO,n);
for(int i=0;i<n;i++){       
    bool aceptar_compra = !(MES[i]==3 || MES[i] ==4);
    if ((num_panetones<K)){
    	if (aceptar_compra){		
    	 num_panetones++;
         monto_total = monto_total +PRECIO[i];
     	}
    }
    else{
        break;
    }
}
if (K>n) {
	cout<<"Solo se pudieron comprar "<<num_panetones<<" panetones."<<endl;
}
cout<<"Monto gastado en la compra: "<<monto_total<<" soles.";    
}
