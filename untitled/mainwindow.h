#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QFileDialog>
#include <QTextStream>
#include <QFile>
#include <QStandardItemModel>
#include <QMessageBox>
#include <QDebug>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
void on_tableWidget_cellChanged(int, int);

void on_action_triggered();

void on_action_2_triggered();

private:
    Ui::MainWindow *ui;
    QStandardItemModel *csvModel;
};
#endif // MAINWINDOW_H
