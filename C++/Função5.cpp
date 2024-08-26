#include <iostream>

class ContaBancaria {
private:
    double saldo;
    double limite;

    
    bool validarSaque(double valor) const {
       
        return valor > 0 && valor <= (saldo + limite);
    }

public:
    
    ContaBancaria(double saldoInicial, double limiteInicial)
        : saldo(saldoInicial), limite(limiteInicial) {}

    
    bool sacar(double valor) {
        
        if (validarSaque(valor)) {
            saldo -= valor;
            return true; 
        } else {
            return false; 
        }
    }

    
    void exibirSaldo() const {
        std::cout << "Saldo atual: R$ " << saldo << std::endl;
    }

    
    void exibirLimite() const {
        std::cout << "Limite atual: R$ " << limite << std::endl;
    }
};

int main() {
    
    ContaBancaria conta(1000.0, 500.0);

    
    conta.exibirSaldo();
    conta.exibirLimite();

    
    double valorSaque;
    std::cout << "Digite o valor a ser sacado: ";
    std::cin >> valorSaque;

    
    if (conta.sacar(valorSaque)) {
        std::cout << "Saque realizado com sucesso!" << std::endl;
    } else {
        std::cout << "Saque não realizado. Valor solicitado é maior que o disponível." << std::endl;
    }

   
    conta.exibirSaldo();

    return 0;
}

