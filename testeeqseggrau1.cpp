#include <iostream>
#include <cmath>
using namespace std;

int main ()
{
	int cont=1,creditos=1;
	float valora,valorb,valorc,delta,x1,x2;
	cout<<"-------------------------------------------------------------\n";
	cout<<"CALCULADORA FODA EM C++ PARA EQ. SEG. GRAU - BY XandeR.\n";
	cout<<"-------------------------------------------------------------\n\n";
	cout<<"DIGITE A QUANTIDADE DE COINS: ";
	cin>>creditos;
	for (cont=creditos;cont>=1;cont--)
	{
	cout<<"CREDITOS: "<<cont<<"\n\n";
	cout<<"Digite o valor de a: ";
	cin>>valora;
	cout<<"Digite o valor de b: ";
	cin>>valorb;
	cout<<"Digite o valor de c: ";
	cin>>valorc;
	delta = (pow(valorb,2)-(4 * valora * valorc));
	cout<<"\nValor de Delta: "<<delta<<"\n\n";
	if (delta > 0)
	{
		x1 = (-(valorb) + sqrt(delta))/(2 * valora);
		x2 = (-(valorb) - sqrt(delta))/(2 * valora);
		cout<<"HA DUAS POSSIVEIS SOLUCOES.\n\nVALOR DE X': "<<x1<<"\nVALOR DE X'': "<<x2<<"\n\n";
	}
	else
	{
		if (delta = 0)
		{
			x1 = (-(valorb) + sqrt(delta)/(2 * valora));
			cout<<"HA APENAS UMA SOLUCAO POSSIVEL.\nO VALOR DE X': "<<x1<<"\n\n";
			
		}
		else
		{
			cout<<"NAO HA SOLUCAO PARA A EQUACAO PROPOSTA.\n\n";
		}
	}
	}
	
	system("pause");
	return 0;
}
