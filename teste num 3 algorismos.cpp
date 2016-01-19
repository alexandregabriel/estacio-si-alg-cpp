#include <iostream>
#include <cmath>
#include <cstring>
using namespace std;

int main ()
{
	int num;
	cout<<"Digite um numero diferente de ZERO (ZERO PARA SAIR): ";
	cin>>num;
	while (num != 0)
	{
	if ((abs(num)>=100) && (abs(num) <= 999))
	{
		cout<<"\nO NUMERO "<<num<<" TEM 3 ALGORISMOS. (UTILIZANDO BASE 10)\n\n";
	}
	else
	{
		cout<<"\nO NUMERO "<<num<<" NAO TEM 3 ALGORISMOS.\n\n";
	}
	system("pause");
	system("cls");
	cout<<"Digite um numero diferente de ZERO (ZERO PARA SAIR): ";
	cin>>num;
	}
	return 0;
}
