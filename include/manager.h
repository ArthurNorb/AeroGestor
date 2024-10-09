#ifndef MANAGER_H
#define MANAGER_H

#include "user.h"
#include <iostream>

class Manager : public User {
public:
    // Construtor
    Manager(const std::string& uname, const std::string& pwd);

    // Sobrescrevendo o método showMenu da classe User
    void showMenu() const override;

    // Função específica para gerenciar aeronaves
    void manageFleet() const;

    // Função específica para verificar aeronaves em manutenção
    void viewMaintenanceStatus() const;
};

#endif // MANAGER_H
