#include <iostream> 
//#define  ADD(a,b) a+b
//#define  ADD(a,b) ((a)+(b))
//#define  ADD(a,b) (a+b)
#define  ADD(a,b) (a)+(b)


using namespace std;

int f(){return 5;}

int main()
{
	int x = 3;

	int resultado = ADD(x, f()-1)*2;

	cout << "Valor de la suma: " << resultado << endl;

	return 0;
}