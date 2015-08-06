#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>

#define MENU 0
#define GAME 1
#define STATS 2
#define OPTIONS 3

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->stackedWidget->setCurrentIndex(MENU);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::closeEvent(QCloseEvent *event)
{
    // We don't close the program
    event->ignore();
    // We open the pop-up
    if (QMessageBox::Yes == QMessageBox::question(this, tr("Fermeture"),tr("Voulez-vous vraiment quitter ?"),
                                                  QMessageBox::Yes|QMessageBox::No)) {
        // If user clicked 'yes' we close the program
        event->accept();
    } else {
        // If he clicked 'no' we don't do anything
        event->ignore();
    }
}

void MainWindow::on_pushButton_quit_clicked()
{
    // We call the function closeEvent()
    QWidget::close();
}

void MainWindow::on_pushButton_newGame_clicked()
{
    // Pour le test - Génération de l'image
    ui->label_image->setPixmap(QPixmap("../pendu_oc/lapin.jpg"));
    // We change the current page of stackedWidget
    ui->stackedWidget->setCurrentIndex(GAME);
}

void MainWindow::on_pushButton_stats_clicked()
{
    if(myStats.loadStats()<3){
        qDebug() << "Erreur lors du chargement";
    }
    else{
        // We change the current page of stackedWidget
        ui->stackedWidget->setCurrentIndex(STATS);
        ui->label_wonGames->setText(QString::number(myStats.getWinGames()));
        ui->label_lostGames->setText(QString::number(myStats.getPlayedGames()-myStats.getWinGames()));
    }
}

void MainWindow::on_pushButton_settings_clicked()
{
    if(mySettings.loadSettings()<3){
        qDebug() << "Erreur lors du chargement des options";
    }
    else{
        // We change the current page of stackedWidget
        ui->stackedWidget->setCurrentIndex(OPTIONS);
        if(mySettings.getAmbientSound()){
            ui->radioButton_soundOn->setChecked(true);
            ui->radioButton_soundOff->setChecked(false);
        }
        else{
            ui->radioButton_soundOn->setChecked(false);
            ui->radioButton_soundOff->setChecked(true);
        }
    }
}

void MainWindow::on_pushButton_reset_clicked()
{
    myStats.saveStats(0,0);
    on_pushButton_stats_clicked();
}

void MainWindow::on_radioButton_soundOn_clicked(bool checked)
{
    if(mySettings.saveSettings(checked)<3){
        qDebug() << "Erreur !!!";
    }
}

void MainWindow::on_radioButton_soundOff_clicked(bool checked)
{
    if(mySettings.saveSettings(!checked)<3){
        qDebug() << "Erreur !!!";
    }
}

void MainWindow::on_pushButton_menuReturn_clicked()
{
    // We change the current page of stackedWidget
    ui->stackedWidget->setCurrentIndex(MENU);
}

void MainWindow::on_pushButton_menuReturn_2_clicked()
{
    // We change the current page of stackedWidget
    ui->stackedWidget->setCurrentIndex(MENU);
}

void MainWindow::on_pushButton_menuReturn_3_clicked()
{
    // We change the current page of stackedWidget
    ui->stackedWidget->setCurrentIndex(MENU);
}
