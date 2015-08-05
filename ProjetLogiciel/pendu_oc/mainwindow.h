#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMessageBox>
#include <QCloseEvent>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    /*******************************************************
    *
    *   When pushing button 'quit'
    *
    *******************************************************/
    void on_pushButton_quit_clicked();

    /*******************************************************
    *
    *   When pushing button 'newGame'
    *
    *******************************************************/
    void on_pushButton_newGame_clicked();

    /*******************************************************
    *
    *   When pushing button 'stats'
    *
    *******************************************************/
    void on_pushButton_stats_clicked();

    /*******************************************************
    *
    *   When pushing button 'settings'
    *
    *******************************************************/
    void on_pushButton_settings_clicked();

private:
    Ui::MainWindow *ui;
    /*******************************************************
    *
    *   Function using to open a confirmation pop-up
    *   when closing the program
    *
    *******************************************************/
    void closeEvent(QCloseEvent *event);
};

#endif // MAINWINDOW_H
