#include <cstdlib>
#include <iostream>
#include <math.h> 
using namespace std;
int main()
{
	float vala, valb, valc, valx1, valx2, delta;
	//Explicação do Software
	cout<<"---> Calculadora de expressões de segundo grau <---\n\n\n";
	//Entrada de dados
	cout<<"Digite o valor de A: ";
	cin>> vala;
	cout<<"\nDigite o valor de B: ";
	cin>> valb;
	cout<<"\nDigite o valor de C: ";
	cin>> valc;
	//Processamento de dados
	delta = (valb * valb) - (4 * vala * valc);
	if (delta < 0)
	{
		cout<<"\n\nDelta: ", delta,"\n\nNao existem solucoes.\n\n";
	}
	else
	{
		if (delta == 0)
		{
			valx1 = (-(valb) + sqrt(delta))/(2 * vala);
			cout<<"\n\nDelta: ", delta,"\nX1: ", valx1, "\n\n";
		}
		else
		{
			valx1 = (-(valb) + sqrt(delta))/(2 * vala);
			valx2 = (-(valb) - sqrt(delta))/(2 * vala);
			cout<<"\n\nDelta: ", delta,"\nX1: ", valx1, "\nX2: ", valx2, "\n\n";
		}
	}
	system ("pause");
}
