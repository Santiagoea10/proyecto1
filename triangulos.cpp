/******************************
averigua si tres lados forman un triangulo
**********/

#include <iostream>

using namespace std;

int main()
{
	float lado1,lado2,lado3;
	///float angulo1,angulo2,angulo3;
	cout<<"escriba ingrese lado1 ===> ";
	cin>>lado1;
	cout<<"escriba ingrese lado2 ===> ";
	cin>>lado2;
	cout<<"escriba ingrese lado3 ===> ";
	cin>>lado3;
	if ((lado1 < (lado2 + lado3)) or (lado2 < (lado1 + lado3)) or (lado3 < (lado2 + lado1)))
	{             cout<<"\n\n  si forman un triangulo";
	               if((lado1 == lado2) and (lado2 ==lado3) and (lado1==lado3))
	            {
	            	cout<<"\n es un triangulo equilatero";
				}
	            else
	            {
	            	if((lado1 == lado2) or (lado2 ==lado3) or (lado1==lado3))
	            	{
	            		cout<<"\n es un triangulo isosceles";
					}
					else
					{
						cout<<"\n es un triangulo escaleno";
					}
				}
	            
}
	else
	{
		cout<<"\n  no es un triangulo triangulo";
	}
	return 0;
	
	
	
}
