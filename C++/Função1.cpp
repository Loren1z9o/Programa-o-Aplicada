#include <iostream>

// Fun��o que soma tr�s inteiros e retorna o resultado
int somaTresInteiros(int a, int b, int c) {
    return a + b + c;
}

int main() {
    
    int num1, num2, num3;
    
    
    std::cout << "Digite o primeiro n�mero: ";
    std::cin >> num1;
    std::cout << "Digite o segundo n�mero: ";
    std::cin >> num2;
    std::cout << "Digite o terceiro n�mero: ";
    std::cin >> num3;
    
    
    int resultado = somaTresInteiros(num1, num2, num3);
    
    
    std::cout << "A soma dos tr�s n�meros �: " << resultado << std::endl;
    
    return 0;
}

