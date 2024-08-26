#include <iostream>
using namespace std;
int main() {
double num1, num2;
cout << "Digite o primeiro numero";
cin >> num1;
cout << "Digite o segundo numero";
cin >> num2;
if (num1 > num2) {
	cout << "O maior numero e: " << num1 << endl;
} else if (num2 > num1) {
	cout << "O maior numero e" << num2 << endl;
} else {
	cout << "Os numeros sao iguais" << endl;
}



return 0;
}
