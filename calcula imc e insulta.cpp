#include <iostream>
#include <cmath>
#include <cstring>
#include <cstdlib>
#include <string>
using namespace std;

int main ()
{
	float peso,alt,imc;
	char sexo;
	cout<<"-------------------------------------------------------------------\n";
	cout<<"CALCULO DE IMC (INSULTA GORDO) - XANDAO DEV. COMPANY - 2015";
	cout<<"-------------------------------------------------------------------\n\n";
	cout<<"DIGITE O SEU PESO (APENAS NUMEROS EX. 89.5): ";
	cin>>peso;
	cout<<"DIGITE SUA ALTURA (APENAS NUMEROS EX. 1.794): ";
	cin>>alt;
	cout<<"DIGITE SEU SEXO (M / F): ";
	cin>>sexo;
	sexo = toupper(sexo);
	imc = (peso/(pow(alt,2)));
	if (sexo =='M')
	{
		if (imc < 20.7)	
		{
			cout<<"SEU IMC E: "<<imc<<".\n";
			cout<<"VOCE ESTA ABAIXO DO SEU PESO NORMAL!";
		}
			if ((imc >= 20.8) && (imc <= 26.4))
			{
				cout<<"SEU IMC E: "<<imc<<".\n";
				cout<<"VOCE ESTA ABAIXO COM PESO EXCELENTE!";
			}
				if ((imc >= 26.5) && (imc <= 27.8))
				{
					cout<<"SEU IMC E: "<<imc<<".\n";
					cout<<"VOCE ESTA LIGEIRAMENTE ACIMA DO PESO IDEAL (GORDO NV.1)!";	
				}
					if ((imc >= 27.9) && (imc <= 31.1))
					{
					cout<<"SEU IMC E: "<<imc<<".\n";
					cout<<"VOCE ESTA ACIMA DO PESO IDEAL (GORDO NV.2)!";					
					}
					else
					{
						cout<<"SEU IMC E: "<<imc<<".\n";
						cout<<"VOCE ESTA OBESO (GORDURA MASTER)!";
					}
	}
		if (sexo == 'F')
		{
			if (imc < 19.1)	
			{
			cout<<"SEU IMC E: "<<imc<<".\n";
			cout<<"VOCE ESTA ABAIXO DO SEU PESO NORMAL!";
			}
			if ((imc >= 19.2) && (imc <= 25.8))
			{
				cout<<"SEU IMC E: "<<imc<<".\n";
				cout<<"VOCE ESTA ABAIXO COM PESO EXCELENTE!";
			}
				if ((imc >= 25.9) && (imc <= 27.3))
				{
					cout<<"SEU IMC E: "<<imc<<".\n";
					cout<<"VOCE ESTA LIGEIRAMENTE ACIMA DO PESO IDEAL (GORDO NV.1)!";	
				}
					if ((imc >= 27.4) && (imc <= 32.2))
					{
					cout<<"SEU IMC E: "<<imc<<".\n";
					cout<<"VOCE ESTA ACIMA DO PESO IDEAL (GORDO NV.2)!";					
					}
					else
					{
						cout<<"SEU IMC E: "<<imc<<".\n";
						cout<<"VOCE ESTA OBESO (GORDURA MASTER)!";
					}
		
		}
		else
		{
			cout<<"SEXO DIGITADO INVALIDO!";	
		}
	system("pause");
	return 0;
}
