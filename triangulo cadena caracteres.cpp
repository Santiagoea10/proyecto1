/******
triangulo con cadena de caracteres
*****/
#include <string.h>
#include <iostream>
#define MAXCAD 31
using namespace std;

//----------- PROTOTIPOS-----------
void triangulo_cadena(char frase[]);

int main(){
	char cadena [MAXCAD];
	cout << "ingrese cadena ====>";
	cin.getline(cadena,30,'\n');
	while (strlen(cadena)< 2 or strlen(cadena) > MAXCAD)
	{
		
		cout<<"ingrese cadena valida====>";
		cin.getline(cadena,30,'\n');
		
	}
	triangulo_cadena(cadena);
	
	return 0;
}

//---------------
void triangulo_cadena(char frase[])
{ int n, i, j;
n= strlen(frase);
for(i=1; i <= n; i++)
{
	for(j= 0; j< i; j++)
	{
		cout<< frase[j];
		
	}
	cout<< endl;
}
	
}
