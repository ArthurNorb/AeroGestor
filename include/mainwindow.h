#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "authSystem.h" // Inclua a classe AuthSystem
#include "admin.h"     // Inclua a classe Admin
#include "manager.h"   // Inclua a classe Manager

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_loginButton_clicked(); // Slot para capturar o clique no botão de login

private:
    Ui::MainWindow *ui;          // Ponteiro para a interface do usuário
    AuthSystem authSystem;       // Instância do sistema de autenticação
};

#endif // MAINWINDOW_H
