//calculadora  se10 proyecto//

#include <iostream>
#include <math.h>

using namespace std;

void suma(float s, float d);
void resta(float s, float d);
void multiplicacion(float s, float d);
void division(float s, float d);
void raiz(float s);
void datospedir();

float numerouno;
float numerodos;

int main()
{

   int opcion;
   
   do{
   	
   	cout<<"\t elige una opcion"<<endl;
   	cout<<"1.   suma"<<endl;
   	cout<<"2.   resta"<<endl;
   	cout<<"3.   multiplicacion"<<endl;
   	cout<<"4.   division"<<endl;
   	cout<<"5.   raiz"<<endl;
   	cout<<"ingrese una opcion===>";
   	cin>>opcion;
   	
   	switch(opcion){
	
   	case 1: datospedir();
   	suma(numerouno,numerodos);
   	system("pause");
   	break;
   	case 2: datospedir();
   	resta(numerouno,numerodos);
   	system("pause");
   	break;
	case 3: datospedir();
   	multiplicacion(numerouno,numerodos);
   	system("pause");
   	break;
	case 4: datospedir();
	division(numerouno,numerodos);
	system("pause");
	break;
	case 5: datospedir();
	raiz(numerouno);
	system("pause");
	break;
	default: cout<<"opcion invalida===>"<<endl;
	system("pause");
	break;  	
   }
 
   system("cls");
}while(opcion<=5);
}

///pedir datos
void datospedir(){
	cout<<("ingrese el primer numero===>");
	cin >> numerouno;
	
	cout<<("ingrese el segundo numero===>");
	cin >> numerodos;
	
}


//suma------------------
void suma(float s, float d){
	float suma= s + d;
	
	cout<<"el resultado de la suma es ===>"<<suma<<endl;
	
}

//resta------------
void resta(float s, float d){
	float resta= s - d;
	
	cout<<"el resultado de la resta es ===>"<<resta<<endl;
	
}

/// multiplicacion---------
void multiplicacion(float s, float d){
	float multiplicacion= s * d;
	
	cout<<"el resultado de la multiplicacion es ===>"<<multiplicacion<<endl;
	
}

///division-----------------
void division(float s, float d){
		float division= s / d;
	
	cout<<"el resultado de la division es ===>"<<division<<endl;
	
	
}
///raiz---------------------
void raiz(float s){
	float raiz= (sqrt(s));

cout<<"el resultado de la raiz es ===>"<<raiz<<endl;	
	
}

