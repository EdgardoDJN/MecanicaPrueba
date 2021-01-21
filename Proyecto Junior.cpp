#include<iostream>
using namespace std;

void RellenarVector(float vector2[],int);
int main(){
	const int TAM=14;
    float vector[TAM];
    RellenarVector(vector,TAM);
	return 0;
}


void RellenarVector(float vector2[],int n)
{
	for(int i=0;i<n;i++)
	{
		float elemento1;
		
		float Cantidad1;
		
		cout<<"Digite el elemento"<<endl;
		
		cin>>elemento1;
		
		cout<<"Digite la cantidad de veces que se repite"<<endl;
		
		cin>>Cantidad1;
		
		vector2[i]=elemento1;
		
		
	}
	
	system("cls");
	
	//revisamos si se agregaron los elementos
	
	for(int i=0;i<n;i++)
	{
		cout<<vector2[i]<<endl;
	}
	
}
void OptimizarCortes(float vector3[],int n2)
{
	int exactitud;
	
	int corte;
	
	cout<<"Define el rango de exactidad de sus cortes"<<endl;
	
	cin>>exactitud;
	
	cout<<"Defina el tamaño maximo del objeto para proceder a realizar cortes correspondientes";
	
	cin>>corte;
	
	for(int i=0;i<n2;i++)
	{
		int flag=0;
		if(vector3[i]+vector3[i+1]==exactitud)
		{
			cout<<"Valor de los cortes"<<endl;
			cout<<vector3[i]<<","<<vector3[i+1]<<endl;
			//procedemos a eliminar los espacios
			flag=1;
		}
		if(flag==1)
		{
			
		}
	}
}


