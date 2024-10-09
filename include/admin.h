#ifndef ADMIN_H
#define ADMIN_H

#include "user.h"
#include <iostream>

class Admin : public User {
public:
    // Construtor
    Admin(const std::string& uname, const std::string& pwd);

    // Sobrescrevendo o método showMenu da classe User
    void showMenu() const override;

    // Funções específicas para o administrador
    void manageUsers() const;       // Gerenciar usuários (pilotos, gestores, mecânicos)
    void manageAircraft() const;    // Gerenciar aeronaves
    void manageMechanics() const;   // Gerenciar mecânicos
};

#endif // ADMIN_H
