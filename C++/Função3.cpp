#include <iostream>


bool estaoOrdenadosCrescente(int a, int b, int c) {
    
    return (a < b) && (b < c);
}

int main() {
    
    int num1, num2, num3;
    
    
    std::cout << "Digite o primeiro n�mero: ";
    std::cin >> num1;
    std::cout << "Digite o segundo n�mero: ";
    std::cin >> num2;
    std::cout << "Digite o terceiro n�mero: ";
    std::cin >> num3;
    
    
    bool resultado = estaoOrdenadosCrescente(num1, num2, num3);
    
    
    if (resultado) {
        std::cout << "Os n�meros est�o ordenados de forma crescente." << std::endl;
    } else {
        std::cout << "Os n�meros n�o est�o ordenados de forma crescente." << std::endl;
    }
    
    return 0;
}

