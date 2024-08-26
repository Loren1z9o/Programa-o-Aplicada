#include <iostream>
#include <cmath>
using namespace std;

int main() {
	double num1, num2;
	
	cout << "Digite o primeiro numero: " ;
	cin >> num1;
	
	cout << "Digite o segundo numero: " ;
	cin >> num2;
	
	double raiz = sqrt(num1);
	double raiz1 = sqrt(num2);
	
	cout << " A raiz quadrada de " << num1 << " e " << raiz << endl;
	cout << " A raiz quadrada de " << num2 << " e " << raiz1 << endl;
	return 0;
}
