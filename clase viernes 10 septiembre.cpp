/*** escribir registros de un archivo
*****/

#include <fstream>
#include <iostream>

using namespace std;
int crearArchivo();

//----prin ---programa----pincipal

int main()
{
	int re;
	re = crearArchivo();
	if(re==-1)
	{
		cout<< "lo siento no se puede crear el archivo";
	}
}

int crearArchivo()
{
	
	string nombres;
	float notas[4];
	char seguir;
	fstream archi;
	int i;
	
	archi.open("estuNota.txt", ios::in|ios::out|ios::app);

	if(archi.fail())
	{
		cout<<"------- error para abrir archivo";
		return -1;
	}
	seguir= 's';
	do
	{
		cout<< "\ningrese nombre estudiante ===>";
		cin.ignore();
		getline(cin, nombres);
		archi<<nombres<<"  ";
		for( i=0; i < 4;i++)
		{
		
		do
		{
			cout<<"ingrese nota valida";
			cin >>notas [i];
		}while(notas[i]< 0.0 or notas [i]>5.0);
		archi<<notas[i]<< "  ";
		
		
		}
		archi<<"\n";
		cout<< "seguir entrando datos?";
		cin>> seguir;
		
		}while(seguir =='s');
		archi.close();
		return 1;
	
	
}

