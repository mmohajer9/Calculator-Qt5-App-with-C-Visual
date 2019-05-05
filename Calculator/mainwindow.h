#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

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
    void on_one_clicked();

    void on_two_clicked();

    void on_three_clicked();

    void on_four_clicked();

    void on_five_clicked();

    void on_six_clicked();

    void on_seven_clicked();

    void on_eight_clicked();

    void on_nine_clicked();

    void on_zero_clicked();

    void on_Delete_clicked();

    void on_allclear_clicked();

    void on_zarb_clicked();

    void on_taqsim_clicked();

    void on_mod_clicked();

    void on_sum_clicked();

    void on_minus_clicked();

    void on_equal_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
