#include "connect4.h"
#include "ui_connect4.h"

Connect4::Connect4(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Connect4)
{
    ui->setupUi(this);
    QMainWindow::showFullScreen();
    bool ok;
    hauteur = QInputDialog::getInt(this,"Connect4",
                                    "Entrer la hauteur du tableau", 6,6,1000,1, &ok);
    largeur = QInputDialog::getInt(this,"Connect4",
                                    "Entrer la largeur du tableau", 7,7,1000,1, &ok);
    //int dimension[largeur][hauteur];

    player2 = QInputDialog::getText(this,"Connect4",
                                    "Entrer le nom du premier joueur", QLineEdit::Normal,
                                    QDir::home().dirName(), &ok);
    ui->nomp1->setPlainText(player1);
    ui->nomp2->setPlainText(player2);
    ui->tour->setPlainText("c'est le tour a " + player1);
}

Connect4::~Connect4()
{
    delete ui;
}

void Connect4::changerJoueur()
{
    if (joueur == 0){
        joueur = 1;
        changerCouleur();
        ui->tour->setPlainText("c'est au tour a " + player2);
    }
    else {
        joueur = 0;
        changerCouleur();
        ui->tour->setPlainText("c'est au tour a " + player1);
    }
}

void Connect4::changerCouleur()
{
    if (joueur == 0){
        couleur = "background-color: rgb(0, 0, 255);";
    }
    else {couleur = "background-color: rgb(255, 0, 0);";}


}

void Connect4::on_Btn_1_clicked()
{
    if (counter1 == 0){
        ui->text_1->setStyleSheet(couleur);
    }
    else if (counter1 == 1){
        ui->text_2->setStyleSheet(couleur);
    }
    else if (counter1 == 2){
        ui->text_3->setStyleSheet(couleur);
    }
    else if (counter1 == 3){
        ui->text_4->setStyleSheet(couleur);
    }
    else if (counter1 == 4){
        ui->text_5->setStyleSheet(couleur);
    }
    else if (counter1 == 5){
        ui->text_6->setStyleSheet(couleur);
    }
    counter1 --;
    changerJoueur();
}
void Connect4::on_Btn_2_clicked()
{
    if (counter2 == 0){
        ui->text_7->setStyleSheet(couleur);
    }
    else if (counter2 == 1){
        ui->text_8->setStyleSheet(couleur);
    }
    else if (counter2 == 2){
        ui->text_9->setStyleSheet(couleur);
    }
    else if (counter2 == 3){
        ui->text_10->setStyleSheet(couleur);
    }
    else if (counter2 == 4){
        ui->text_11->setStyleSheet(couleur);
    }
    else if (counter2 == 5){
        ui->text_12->setStyleSheet(couleur);
    }
    counter2 --;
    changerJoueur();
}
void Connect4::on_Btn_3_clicked()
{
    if (counter3 == 0){
        ui->text_13->setStyleSheet(couleur);
    }
    else if (counter3 == 1){
        ui->text_14->setStyleSheet(couleur);
    }
    else if (counter3 == 2){
        ui->text_15->setStyleSheet(couleur);
    }
    else if (counter3 == 3){
        ui->text_16->setStyleSheet(couleur);
    }
    else if (counter3 == 4){
        ui->text_17->setStyleSheet(couleur);
    }
    else if (counter3 == 5){
        ui->text_18->setStyleSheet(couleur);
    }
    counter3 --;
    changerJoueur();
}
void Connect4::on_Btn_4_clicked()
{
    if (counter4 == 0){
        ui->text_19->setStyleSheet(couleur);
    }
    else if (counter4 == 1){
        ui->text_20->setStyleSheet(couleur);
    }
    else if (counter4 == 2){
        ui->text_21->setStyleSheet(couleur);
    }
    else if (counter4 == 3){
        ui->text_22->setStyleSheet(couleur);
    }
    else if (counter4 == 4){
        ui->text_23->setStyleSheet(couleur);
    }
    else if (counter4 == 5){
        ui->text_24->setStyleSheet(couleur);
    }
    counter4 --;
    changerJoueur();
}
void Connect4::on_Btn_5_clicked()
{
    if (counter5 == 0){
        ui->text_25->setStyleSheet(couleur);
    }
    else if (counter5 == 1){
        ui->text_26->setStyleSheet(couleur);
    }
    else if (counter5 == 2){
        ui->text_27->setStyleSheet(couleur);
    }
    else if (counter5 == 3){
        ui->text_28->setStyleSheet(couleur);
    }
    else if (counter5 == 4){
        ui->text_29->setStyleSheet(couleur);
    }
    else if (counter5 == 5){
        ui->text_30->setStyleSheet(couleur);
    }
    counter5 --;
    changerJoueur();
}
void Connect4::on_Btn_6_clicked()
{
    if (counter6 == 0){
        ui->text_31->setStyleSheet(couleur);
    }
    else if (counter6 == 1){
        ui->text_32->setStyleSheet(couleur);
    }
    else if (counter6 == 2){
        ui->text_33->setStyleSheet(couleur);
    }
    else if (counter6 == 3){
        ui->text_34->setStyleSheet(couleur);
    }
    else if (counter6 == 4){
        ui->text_35->setStyleSheet(couleur);
    }
    else if (counter6 == 5){
        ui->text_36->setStyleSheet(couleur);
    }
    counter6 --;
    changerJoueur();
}
void Connect4::on_Btn_7_clicked()
{
    if (counter7 == 0){
        ui->text_37->setStyleSheet(couleur);
    }
    else if (counter7 == 1){
        ui->text_38->setStyleSheet(couleur);
    }
    else if (counter7 == 2){
        ui->text_39->setStyleSheet(couleur);
    }
    else if (counter7 == 3){
        ui->text_40->setStyleSheet(couleur);
    }
    else if (counter7 == 4){
        ui->text_41->setStyleSheet(couleur);
    }
    else if (counter7 == 5){
        ui->text_42->setStyleSheet(couleur);
    }
    counter7 --;
    changerJoueur();
}
void Connect4::on_actionQuitter_triggered() {
    QApplication::quit();
}



