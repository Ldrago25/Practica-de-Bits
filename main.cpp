#include <iostream>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/*
	int v=544;
	int v2=48;
	int v3=v&v2;
	cout<<endl<<"resultado: "<<v3<<endl;
	
	
//	mascara=pow(2,a)-1;
//	numero=numero>>b;
//	resultado<<=a;
*/
using namespace std;
int resueva(int a,int c)
{
	int mascara,resultado,numero;
	resultado=a&c;
	return resultado;
}

int main(int argc, char** argv) {
	int res;
	
	res=resueva(48,67);
	
	switch(res)
	{
		case 0:
		{
			cout<<endl<<"Examen realizado"<<endl;	
			break;
		}
		case 16:
		{
			cout<<endl<<"Casado"<<endl;
			break;
		}
		case 32:
		{
			cout<<endl<<"Divorciado"<<endl;
			break;
		}	
	}
	
	
	
	
	
	return 0;
}
