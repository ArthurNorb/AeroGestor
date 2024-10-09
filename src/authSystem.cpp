#include "authSystem.h"
#include "admin.h"
#include "manager.h"
#include <iostream>

AuthSystem::AuthSystem() {
    // Inicializar usuários para testes (idealmente, isso viria de um banco de dados)
    users.push_back(std::make_shared<Admin>("admin", "admin123"));
    users.push_back(std::make_shared<Manager>("manager", "manager123"));
    //users.push_back(std::make_shared<Mechanic>("mechanic", "mech123"));
    //users.push_back(std::make_shared<Company>("company", "comp123"));
}

std::shared_ptr<User> AuthSystem::login(const std::string& username, const std::string& password) {
    for (const auto& user : users) {
        if (user->getUsername() == username && user->checkPassword(password)) {
            return user;  // Retorna o usuário logado
        }
    }
    return nullptr;  // Se não encontrar, retorna nullptr
}

