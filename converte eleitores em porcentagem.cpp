#include <iostream>
#include <cmath>
#include <cstring>
#include <cstdlib>
using namespace std;

int main()
{
	cout<<"----------------------------------------------------------------------\n";
	cout<<"VERIFICAR PORCENTAGENS DE ELETORES - XANDAODEV 2015 CPP\n";
	cout<<"----------------------------------------------------------------------\n\n";
	int tteleitor,vtvd,vtbranco,falsevote,vtnul;
	float ttvts,pvtvd,pvtbranco,pvtnul,pnvt;
	cout<<"DIGITE O NUMERO NUMERO TOTAL DE ELEITORES: ";
	cin>>tteleitor;
	cout<<"DIGITE O TOTAL DE VOTOS VALIDOS: ";
	cin>>vtvd;
	cout<<"DIGITE O TOTAL DE VOTOS EM BRANCO: ";
	cin>>vtbranco;
	cout<<"DIGITE O TOTAL DE VOTOS NULOS: ";
	cin>>vtnul;
	falsevote = (tteleitor - (vtvd+vtbranco+vtnul));
	ttvts = tteleitor/100;
	pvtvd = vtvd / ttvts;
	pvtbranco = vtbranco / ttvts;
	pvtnul = vtnul / ttvts;
	pnvt = falsevote / ttvts;
	cout<<"TOTAL DE VOTOS: "<<(vtvd+vtbranco+vtnul)<<".\n";
	cout<<"VOTOS VALIDOS: "<<pvtvd<<" %\n";
	cout<<"VOTOS EM BRANCO: "<<pvtbranco<<" %\n";
	cout<<"VOTOS NULOS: "<<pvtnul<<" %\n";
	cout<<"ELEITORES QUE NAO VOTARAM: "<<pnvt<<" %\n";
	return 0;	
	
}
