

#include <iostream> 


#define  ADD1(a,b) a+b
#define  ADD2(a,b) (a)+(b)
#define  ADD3(a,b) ((a)+(b))
#define  ADD4(a,b) (a+b)



using namespace std;

int f(){return 5;}

int main()
{
	int c = 4;

	int resultado1 = ADD1(c, f()-1)*2;

	int resultado2 = ADD2(c, f()-1)*2;
	
	int resultado3 = ADD3(c, f()-1)*2;
	
	int resultado4 = ADD4(c, f()-1)*2;


	cout << "Valor para ADD1: " << resultado1 << endl;
	cout << "Valor para ADD2: " << resultado2 << endl;
	cout << "Valor para ADD3: " << resultado3 << endl;
	cout << "Valor para ADD4: " << resultado4 << endl;

	return 0;
}