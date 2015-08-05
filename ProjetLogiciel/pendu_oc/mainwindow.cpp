#include "mainwindow.h"
#include "ui_mainwindow.h"

#define GAME 1
#define STATS 2
#define OPTIONS 3

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
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
    // We change the current page of stackedWidget
    ui->stackedWidget->setCurrentIndex(GAME);
}

void MainWindow::on_pushButton_stats_clicked()
{
    // We change the current page of stackedWidget
    ui->stackedWidget->setCurrentIndex(STATS);
}

void MainWindow::on_pushButton_settings_clicked()
{
    // We change the current page of stackedWidget
    ui->stackedWidget->setCurrentIndex(OPTIONS);
}
