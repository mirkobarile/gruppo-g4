#include <iostream>
#include <math.h>

using namespace std;

int main(int argc, char** argv) {
	int n;
	string b;
	b="";
	cout<<"numero da convertire"<<endl;
	cin>>n;//input decimale
	while(n>0){
		if(n%2==0)
			b='0'+b;
		else
			b='1'+b;
		n=n/2;
	}
	cout<<b;//uscita binario
	return 0;
}
/*
Ahnaf Numayer
Barile Mirko
Lauro Emanuele
Petrini Lorenzo David
Tedesco Flavio
*/
