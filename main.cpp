#include <iostream>
using namespace std;
int soma( int a, int b)
{
	int resultado;
	resultado = a+b;
	return resultado;	
}
int main(){
 	int a= 5; 
 	int b= 7;
 	int valor;
 	valor = soma(a, b);
	cout<< valor;
	return 0;
}
