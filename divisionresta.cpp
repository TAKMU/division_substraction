#include <iostream>
using namespace std;
bool negativo(int a)
{
	bool menos=false;
	if (a<0)
	{
		menos=true;
	}
	return menos;
}
int absoluto(int numero, bool neg)
{
	if(neg)
	{
		numero=numero*(-1);
	}
	return numero;
}

int main(int argc, char *argv[]) {
	int dividendo, divisor, i=0;
	bool neg_dividendo, neg_divisor;
	cin>>dividendo>>divisor;
	neg_dividendo=negativo(dividendo);
	neg_divisor=negativo(divisor);
	dividendo=absoluto(dividendo, neg_dividendo);
	divisor=absoluto(divisor, neg_divisor);
	while(dividendo>=divisor)
	{
		dividendo=dividendo-divisor;
		i++;
	}
	if(neg_dividendo!=neg_divisor)
	{
		i=i*-1;
		dividendo=absoluto(dividendo, neg_dividendo);
	}
	cout<<"Cociente "<<i<<" \nResiduo "<<dividendo<<endl;
	return 0;
}

