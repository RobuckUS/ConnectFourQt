#ifndef CONNECT4_H
#define CONNECT4_H

#include <QMainWindow>
#include <iostream>
#include <string>
#include <QInputDialog>
#include <QDir>


QT_BEGIN_NAMESPACE
namespace Ui { class Connect4; }
QT_END_NAMESPACE

class Connect4 : public QMainWindow
{
    Q_OBJECT

public:
    Connect4(QWidget *parent = nullptr);
    ~Connect4();
    int joueur = 0;
    QString player1 = "";
    QString player2 = "";
    QString couleur = "background-color: rgb(0, 0, 255);";

    int counter1 = 5;
    int counter2 = 5;
    int counter3 = 5;
    int counter4 = 5;
    int counter5 = 5;
    int counter6 = 5;
    int counter7 = 5;
    int hauteur;
    int largeur;

private slots:
    void on_Btn_1_clicked();
    void on_Btn_2_clicked();
    void on_Btn_3_clicked();
    void on_Btn_4_clicked();
    void on_Btn_5_clicked();
    void on_Btn_6_clicked();
    void on_Btn_7_clicked();
    void changerJoueur();
    void changerCouleur();
    void on_actionQuitter_triggered();



private:
    Ui::Connect4 *ui;
};
#endif // CONNECT4_H
