#ifndef USER_H
#define USER_H

#include <string>

class User {
protected:
    std::string username;
    std::string password;
    std::string role;

public:
    User(const std::string& uname, const std::string& pwd, const std::string& r)
        : username(uname), password(pwd), role(r) {}

    virtual ~User() = default;

    std::string getUsername() const { return username; }
    bool checkPassword(const std::string& pwd) const { return password == pwd; }

    std::string getRole() const { return role; }  // Método adicionado para obter o papel do usuário

    virtual void showMenu() const = 0;  // Método virtual puro para cada tipo de usuário
};

#endif // USER_H

