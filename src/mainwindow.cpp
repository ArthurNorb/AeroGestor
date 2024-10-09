#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QMessageBox>
#include "admin.h"   // Inclusão da classe Admin
#include "manager.h" // Inclusão da classe Manager

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // Conectar o botão de login à função on_loginButton_clicked
    connect(ui->loginButton, &QPushButton::clicked, this, &MainWindow::on_loginButton_clicked);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_loginButton_clicked()
{
    QString username = ui->usernameEdit->text();  // Obter nome de usuário do campo de texto
    QString password = ui->passwordEdit->text();  // Obter senha do campo de texto

    // Verificar as credenciais através do AuthSystem
    std::shared_ptr<User> loggedInUser = authSystem.login(username.toStdString(), password.toStdString());

    if (loggedInUser) {  // Se o login foi bem-sucedido, um usuário é retornado
        QMessageBox::information(this, "Login", "Login bem-sucedido!");

        // Verificar o tipo de usuário logado e exibir o menu apropriado
        if (loggedInUser->getRole() == "Admin") {
            Admin *admin = dynamic_cast<Admin*>(loggedInUser.get()); // Fazer cast para Admin
            if (admin) {
                admin->showMenu();  // Exibe o menu do Administrador
            }
        } else if (loggedInUser->getRole() == "Manager") {
            Manager *manager = dynamic_cast<Manager*>(loggedInUser.get()); // Fazer cast para Manager
            if (manager) {
                manager->showMenu();  // Exibe o menu do Gestor de Frota
            }
        } else {
            // Se o usuário for outro tipo (por exemplo, mecânico, piloto, etc.)
            QMessageBox::information(this, "Login", "Usuário logado com sucesso, mas sem menu específico.");
        }
    } else {
        // Se o login falhar, exibe uma mensagem de erro
        QMessageBox::warning(this, "Erro", "Usuário ou senha inválidos!");
    }
}
