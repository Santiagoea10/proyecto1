/****
algortimo que te da los años, los meses y los dias que tienes de vida

grupo 3-ejercicio 2
***/



# include <iostream>
# include <stdio.h>
# include <conio.h>
# include <math.h>
# include <time.h>
using namespace std;
main()
{
int dia, anio, mes, a, b, c;

struct tm *tiempo;
int dia_a;
int mes_a;
int anio_a;

time_t fecha_sistema;
time(&fecha_sistema);
tiempo=localtime(&fecha_sistema);
cout<<"cual es tu dia de nacimiento:"<<endl;
cin>>a;
cout<<"cual es tu mes de nacimiento:"<<endl;
cin>>b;
cout<<"cual es tu anio de nacimiento:"<<endl;
cin>>c;

anio_a=tiempo->tm_year + 1900;
mes_a=tiempo->tm_mon + 1;
dia_a=tiempo->tm_mday;

if(a>dia_a)
{

dia=dia_a+30-a;

}
else
{
dia=dia_a-a;
}

if(b>mes_a)
{

mes=mes_a+12-b-1;
anio=anio_a-c-1;
}



else
{
mes=mes_a-b;
anio=anio_a-c;
}


cout<<"tus anios son: "<<anio<<" con "<<mes<<" meses "<<" y "<<dia<<" dias "<<endl;

}
