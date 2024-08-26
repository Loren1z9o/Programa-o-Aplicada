#include <iostream>


bool estaoOrdenadosCrescente(int a, int b, int c) {
    
    return (a < b) && (b < c);
}

int main() {
    
    int num1, num2, num3;
    
    
    std::cout << "Digite o primeiro número: ";
    std::cin >> num1;
    std::cout << "Digite o segundo número: ";
    std::cin >> num2;
    std::cout << "Digite o terceiro número: ";
    std::cin >> num3;
    
    
    bool resultado = estaoOrdenadosCrescente(num1, num2, num3);
    
    
    if (resultado) {
        std::cout << "Os números estão ordenados de forma crescente." << std::endl;
    } else {
        std::cout << "Os números não estão ordenados de forma crescente." << std::endl;
    }
    
    return 0;
}

