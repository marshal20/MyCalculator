#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

#include "ui_mainwindow.h"

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);

private:
    void exp_append_str(const QString& str);
    void exp_append_num(double num);
    void exp_append_int(int num);
    void exp_delete();
    void exp_clear();

private slots:
    void solve_expression();

private:
    Ui::MainWindow ui;

    double m_last_result;
};
#endif // MAINWINDOW_H
