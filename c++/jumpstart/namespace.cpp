/*
Um namespace é um mecanismo usado para organizar e agrupar identificadores (como funções, classes, variáveis, etc.)
de forma a evitar conflitos de nomes. 
É como um "espaço de nomes" ou uma "caixa" que ajuda a diferenciar elementos com o mesmo nome.
*/

#include <iostream>

// Definição de um namespace chamado "minha_biblioteca"
namespace minha_biblioteca {
    void imprimir() {
        std::cout << "Olá do namespace 'minha_biblioteca'!\n";
    }
}

// Definição de uma função com o mesmo nome, fora de um namespace
void imprimir() {
    std::cout << "Olá do escopo global!\n";
}

int main() {
    // Chama a função no escopo global
    imprimir();

    // Chama a função dentro do namespace "minha_biblioteca"
    minha_biblioteca::imprimir();

    return 0;
}
