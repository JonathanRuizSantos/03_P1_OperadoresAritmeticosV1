#include <iostream>

/* 
PRACTICA #1. OPERANDO VALORES
	- Realizar un programa que le pida al usuario dos valores numéricos(de tipo double) y que al ingresar
	los valores se realice la suma, resta, multiplicación y división de estos dos valores.
 */
using namespace std;
int main(int argc, char** argv) {
	double numeroUno;
	double numeroDos;
	double suma,resta,multiplicacion,division;
	
	// Ingresando datos
	cout<<"Este programa realiza la suma, resta, multiplicacion y division entre dos numeros cuales quiera"<<endl;
	cout<<endl<<"¡Bienvenido!"<<endl;
	cout<<"Ingresa el primer numero: ";
	cin>>numeroUno;
	cout<<"Ingresa el segundo numero: ";
	cin>>numeroDos;
	
	cout<<endl<<"Los numeros que ingresaste son: "<<numeroUno<<" y "<<numeroDos<<endl<<endl;
	
	// Realizando las operaciones
	suma = numeroUno+numeroDos;
	resta = numeroUno-numeroDos;
	multiplicacion = numeroUno*numeroDos;
	division = numeroUno/numeroDos;

	// Imprimiendo los resultados
	cout<<"Suma: "<<suma<<endl;
	cout<<"Resta: "<<resta<<endl;
	cout<<"Multiplicacion: "<<multiplicacion<<endl;
	cout<<"division: "<<division<<endl;

	//system("PAUSE");
	return 0;
}