#ifndef AUTHSYSTEM_HPP
#define AUTHSYSTEM_HPP

#include "user.h"
#include <vector>
#include <memory>

class AuthSystem {
private:
    std::vector<std::shared_ptr<User>> users;  // Lista de usuários

public:
    AuthSystem();
    std::shared_ptr<User> login(const std::string& username, const std::string& password);  // Retorna o usuário logado
};

#endif // AUTHSYSTEM_HPP

