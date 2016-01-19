#include <iostream>
#include <cmath>
#include <cstring>
using namespace std;

int main()
{
	int num;
	cout<<"DIGITE UM NUMERO: ";
	cin>>num;
	while (num > 0)
	{
		cout<<num*2<<"\n\n";
		cout<<"DIGITE UM NUMERO: ";
		cin>>num;
	}
	system("pause");
	return 0;
}
