//**** ejercicio 9****///

#include<iostream>
#include<conio.h>
#include<string.h>
#define MAXCAD 50

using namespace std;
void frases(char frasess[]);
int main(){
	char frase[50];
	int letra=0,palabrauno=0,palabrados=0,palabratres=0,palabracuatro=0,palabracinco=0;
		char fras [MAXCAD];
	
	
	cout<<"digite una frase:  ";
	cin.getline(fras,50,'\n');
	
	for(int i=0;i<50;i++){
		switch(fras[i]){
			case 'a': palabrauno++; break;
			case 'e': palabrados++; break;
			case 'i': palabratres++; break;
			case 'o': palabracuatro++; break;
			case 'u': palabracinco++; break;
			while (strlen(fras)< 2 or strlen(fras) > MAXCAD)
				{
		
		cout<<"ingrese  frase valida====>";
		cin.getline(fras,50,'\n');
		
	}
			
		}
	}
		frases(fras);
		
	 cout<<"letra A===>" <<palabrauno<<endl;
	 cout<<"Letra E===>" <<palabrados<<endl;
	 cout<<"Letra I==>" <<palabratres<<endl;
	 cout<<"Letra O==>" <<palabracuatro<<endl;
	 cout<<"Letra U==>" <<palabracinco<<endl;
	 
	 
	 
	
	

	
	return 0;
}

//-----------------------------

void frases(char fras[])
{ int n, i, j;
n= strlen(fras);

{
	for(j= 0; j< n; j++)
	{
		cout<< fras[j];
		
	}
	cout<< endl;
}
	
}
