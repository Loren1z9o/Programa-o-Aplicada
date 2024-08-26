#include <iostream>

// Função que soma três inteiros e retorna o resultado
int somaTresInteiros(int a, int b, int c) {
    return a + b + c;
}

int main() {
    
    int num1, num2, num3;
    
    
    std::cout << "Digite o primeiro número: ";
    std::cin >> num1;
    std::cout << "Digite o segundo número: ";
    std::cin >> num2;
    std::cout << "Digite o terceiro número: ";
    std::cin >> num3;
    
    
    int resultado = somaTresInteiros(num1, num2, num3);
    
    
    std::cout << "A soma dos três números é: " << resultado << std::endl;
    
    return 0;
}

