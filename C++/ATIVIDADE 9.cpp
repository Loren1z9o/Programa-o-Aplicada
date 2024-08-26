#include <iostream>
using namespace std;

int main() {
    
    float num1, num2, num3, num4, media;

    
    cout << "Digite o primeiro número: ";
    cin >> num1;

    cout << "Digite o segundo número: ";
    cin >> num2;

    cout << "Digite o terceiro número: ";
    cin >> num3;

    cout << "Digite o quarto número: ";
    cin >> num4;

    
    media = (num1 + num2 + num3 + num4) / 4;

    
    cout << "A média aritmética dos valores digitados é: " << media << endl;

    return 0;
}

