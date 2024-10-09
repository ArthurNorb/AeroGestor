#include "manager.h"

// Construtor
Manager::Manager(const std::string& uname, const std::string& pwd)
    : User(uname, pwd, "Manager") {}  // Chamando o construtor da classe base

// Sobrescreve o método para exibir o menu do gestor de frota
void Manager::showMenu() const {
    std::cout << "---- Menu do Gestor de Frota ----\n";
    std::cout << "1. Gerenciar Frota de Aeronaves\n";
    std::cout << "2. Ver Status de Manutenção\n";
    std::cout << "3. Sair\n";
}

// Implementação de função para gerenciar a frota
void Manager::manageFleet() const {
    std::cout << "Gerenciamento da frota de aeronaves. [Exemplo de funcionalidade]\n";
    // Aqui você pode implementar funcionalidades como adicionar, remover ou editar aeronaves
}

// Implementação de função para visualizar status de manutenção
void Manager::viewMaintenanceStatus() const {
    std::cout << "Visualização do status de manutenção de aeronaves. [Exemplo de funcionalidade]\n";
    // Aqui você pode conectar à base de dados ou sistema para ver quais aeronaves estão em manutenção
}
