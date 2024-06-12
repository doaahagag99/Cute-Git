#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QProcess>
#include <QFileDialog>
#include <QDir>

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
    //void on_runButton_clicked();
    //void on_statusButton_clicked();
    //void on_initButton_clicked();
    //void on_browseButton_clicked();
    //void on_pushButton_clicked();


    void on_readyReadStandardOutput();
    void on_readyReadStandardError();
    void on_process_finished(int exitCode, QProcess::ExitStatus exitStatus);
    void setPath(QString p);




    //void on_cloneButton_clicked();

    void on_pushButtonRun_clicked();

    void on_pushButtonAddFile_clicked();

    void on_pushButtonAddAll_clicked();

    void on_pushButtonStatus_clicked();

    void on_pushButtonBrowse_clicked();

    void on_pushButtonInit_clicked();

    void on_pushButtonClone_clicked();

    void on_pushButtonCommit_clicked();

    void on_pushButtonDiff_clicked();

    void on_pushButtonDiffStaged_clicked();

    void on_pushButtonReset_clicked();

    void on_pushButtonBranchAll_clicked();

    void on_pushButtonCheckout_clicked();

    void on_pushButtonLog_clicked();

    void on_pushButtonBranch_clicked();

    void on_pushButtonMerge_clicked();

    void on_pushButtonFetch_clicked();

    void on_pushButtonMerge_2_clicked();

    void on_pushButtonPush_clicked();

    void on_pushButtonPull_clicked();

    void on_pushButtonRemoteAdd_clicked();


private:
    Ui::MainWindow *ui;
    QProcess *process;
    QString path ;
};
#endif // MAINWINDOW_H
