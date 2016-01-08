#include <iostream>
using namespace std;
int main()
{
	int aula;
	//code - Exibição de menu
	cout<<"\nAulas ministradas\n\n";
	cout<<"Numero 1: Aula 1\n";
	cout<<"Numero 2: Aula 2\n";
	cout<<"Numero 3: Aula 3\n";
	cout<<"Numero 4: Aula 3\n";
	cout<<"Numero 5: Aula 5\n";
	cout<<"Opcoes: 0-5\n\n";
	//fim da exibição do menu
	//Entrada de dados
	cout<<"Digite a opcao desejada: ";
	cin>>aula;
	//processamento de dados e sáida de dados.
	//Estrutura escolha caso.
	switch(aula)
	{
		case 1:cout<<"\nConceitos gerais e apresentacao das linguagens natural, grafica e pseudolinguagem.\n";
		break;
		case 2:cout<<"\nConceito de variavel e comando imprima.\n";
		break;
		case 3:cout<<"\nComando Leia e varios exercicios\n";
		break;
		case 4:cout<<"\nEstruturas de decisao\n";
		break;
		case 5:cout<<"\nEstruturas de decisao (parte 2)\n";
		break;
		default:cout<<"\nOpcao invalida.\n";
	}
	cout<<"\n\n";
	system("pause");
}
