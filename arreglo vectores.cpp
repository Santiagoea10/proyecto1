/*******
objetivo:manipulacion de arreglos
*****/

#include <iostream>
#define TAM_MAX 45

using namespace std;

//---------- prototipos----------
int leer_vector(float notas []);
void mostrar_vector(float notas[],int n);

int main ()
{
	int n;
	float notas [TAM_MAX];
	n=leer_vector(notas);
	
	mostrar_vector( notas, n);
	return 0;
}

//---------------------------------------
int leer_vector(float notas[] )
{
	int n;
	int i;
	do
	{
		cout<< "ingrese total elementos del vector(1,45) ==>";
	    cin >> n;
	    
	}
	while( n < 1 or n > TAM_MAX);
	
	for ( i = 0; i < n; i++)
	{
		cout << "ningrese elemento" << i << ": ";
		cin>> notas[i];
	while(notas[i] < 0.0 or notas [i] > 5.0)
	{
		cout << "ningrese nota valida " << i << ":  ";
		cin >> notas [i];
	
		 } 	
	
	}
	return n ;


}

//--------------------------------
void mostrar_vector(float notas[], int n)
{
	int i;
	system("cls");
	cout << " notas de los estudiantes"<< endl;
	cout << " la direccion del primer elemento del arreglo es==" <<notas << endl;
 	for( i = 0; i < n; i++)
	{
		cout << notas[i] << endl;
	}
}


