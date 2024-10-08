#include "admin.h"

// Construtor
Admin::Admin(const std::string& uname, const std::string& pwd)
    : User(uname, pwd, "Admin") {}  // Chamando o construtor da classe base

// Sobrescreve o método para exibir o menu do administrador
void Admin::showMenu() const {
    std::cout << "---- Menu do Administrador ----\n";
    std::cout << "1. Gerenciar Usuários\n";
    std::cout << "2. Gerenciar Aeronaves\n";
    std::cout << "3. Gerenciar Mecânicos\n";
    std::cout << "4. Sair\n";
}

// Implementação da função para gerenciar usuários
void Admin::manageUsers() const {
    std::cout << "Gerenciamento de usuários. [Exemplo de funcionalidade]\n";
    // Aqui você pode implementar a lógica para adicionar/remover/editar usuários
}

// Implementação da função para gerenciar aeronaves
void Admin::manageAircraft() const {
    std::cout << "Gerenciamento de aeronaves. [Exemplo de funcionalidade]\n";
    // Aqui você pode implementar a lógica para adicionar/remover/editar aeronaves
}

// Implementação da função para gerenciar mecânicos
void Admin::manageMechanics() const {
    std::cout << "Gerenciamento de mecânicos. [Exemplo de funcionalidade]\n";
    // Aqui você pode implementar a lógica para adicionar/remover/editar mecânicos
}
