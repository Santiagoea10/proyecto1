/**********
notas
*******/

#include <string.h>
#include <iostream>
#include <stdio.h>
#define TAMAX 45
#define TAMIN 1
using namespace std;


int leer_notas(float notas[][5], string nombre []); 
void mostrar(int n, float notas[][5], string nombre[]);
void calculo_def(int n, float notas[][5]);
int main ()

{
	string nombre[TAMAX];
	int n,j;
	float notas [TAMAX][5];

n= leer_notas(notas, nombre);
mostrar (n, notas,nombre);
	 calculo_def(n, notas);
	 mostrar (n, notas,nombre);
	return 0;
}

//---------------------------------------
int leer_notas(float notas[TAMAX][5], string nombre [TAMAX] ){


	int n, j;
	int i;
do
{
	cout<< "ingrese el numero de estudiantes ==>";
	    cin >> n;   
	}
	while( n < 1 or n > TAMAX);
	for (i=0 ; i < n ; i++){
		cin >> nombre[i];
		
		cout<<"ingrese nombre del estudiante"<<i + 1<<":";
		cin.ignore();
		getline(cin,nombre[i]);
		for (j=0; j < 4 ; j++){
			do{
			cout<< "ingrese nota estudiantes" ;
			cin >>notas [i][j];
		}
		
			while (notas[i][j]< 0.0 or notas [i][j]> 5.0);
			}
		}
		return n;
	}



///***********************
void mostrar(int n, float notas[][5], string nombre[])
{
	system("cls");
	
	int i,j;
	
	
		cout<<"numero de estudiantes" << "\t nota1"<<"\t nota2"<<"\t nota3"<<"\t nota4"<<"\t definitiva";
		for(i=0; i < n; i++){
			cout<<"\n"<<i+1<<"\t"<<nombre[i];
			for(j=0; j<5; j++){
				cout<<"\t"<<notas[i][j];
			}
		}	
	
	system("pause");
	
}
///*******************************
void calculo_def(int n, float notas[][5]){
	
	int i,j;
	float suma;
	for(i=0; i < n; i++){
		suma=0.0;
		for(j=0; j< 4; j++){
			suma=suma+notas[i][j];
			
		}
		notas[i][4]=suma/4;
	}
}




