#include <iostream>
#include <cmath>
#include <cstring>
#include <cstdlib>
using namespace std;

int main()
{
	int anos,meses,dias,dresult,exit=0;
	cout<<"------------------------------------------------------------\n";
	cout<<"CONVERSOR DE IDADES EM DIAS. ALEXANDRE GABRIEL DEVELOPMENT.\n";
	cout<<"------------------------------------------------------------\n\n";
	while (exit != 1)
	{
	cout<<"DIGITE QUANTOS ANOS VOCE TEM: ";
	cin>>anos;
	cout<<"DIGITE QUANTOS MESES VOCE TEM NESSE ANO: ";
	cin>>meses;
	cout<<"DIGITE QUANTOS DIAS VOCE TEM NESSE ANO: ";
	cin>>dias;
	dias = abs(dias);
	meses = abs(meses);
	anos = abs(anos);
	dresult = (anos*360)+(meses*30)+(dias);
	cout<<"\n\nATE O MOMENTO SUA IDADE EM DIAS E: "<<dresult<<".\n";
	cout<<"DIGITE 1 PARA SAIR OU 0 (ZERO) PARA CONTINUAR: ";
	cin>>exit;
	cout<<"\n";
	system("cls");	
	}
	cout<<"MUITO OBRIGADO POR UTIIZAR!\nCOPYRIGHT ALEXANDRE DEVELOPMENT COMPANY";
	return 0;
}
