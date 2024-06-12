/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGroupBox *groupBoxSetup;
    QPushButton *pushButtonInit;
    QLineEdit *pathLineEdit;
    QPushButton *pushButtonBrowse;
    QPushButton *pushButtonClone;
    QLineEdit *lineEditURL;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QPushButton *pushButtonRun;
    QLineEdit *lineEditCommand;
    QGroupBox *groupBox;
    QLabel *label_6;
    QLineEdit *lineEditComment;
    QPushButton *pushButtonCommit;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QPushButton *pushButtonStatus;
    QPushButton *pushButtonDiff;
    QPushButton *pushButtonAddAll;
    QPushButton *pushButtonDiffStaged;
    QWidget *layoutWidget1;
    QGridLayout *gridLayout_2;
    QLabel *label_5;
    QLineEdit *lineEditFileName;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButtonAddFile;
    QPushButton *pushButtonReset;
    QTextEdit *outputTextEdit;
    QGroupBox *groupBox_2;
    QWidget *layoutWidget_2;
    QGridLayout *gridLayout_4;
    QLineEdit *lineEditBranchName;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *pushButtonBranch;
    QPushButton *pushButtonMerge;
    QLabel *label_8;
    QWidget *layoutWidget2;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButtonBranchAll;
    QPushButton *pushButtonCheckout;
    QPushButton *pushButtonLog;
    QGroupBox *groupBox_3;
    QWidget *layoutWidget_3;
    QGridLayout *gridLayout_5;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *pushButtonRemoteAdd;
    QLabel *label_9;
    QLineEdit *lineEditURL_2;
    QLineEdit *lineEditEliasName;
    QLabel *label_10;
    QWidget *layoutWidget_4;
    QVBoxLayout *verticalLayout_2;
    QPushButton *pushButtonFetch;
    QPushButton *pushButtonMerge_2;
    QPushButton *pushButtonPush;
    QPushButton *pushButtonPull;
    QMenuBar *menubar;
    QMenu *menuGIT_Bash;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        groupBoxSetup = new QGroupBox(centralwidget);
        groupBoxSetup->setObjectName("groupBoxSetup");
        groupBoxSetup->setGeometry(QRect(0, 0, 291, 231));
        pushButtonInit = new QPushButton(groupBoxSetup);
        pushButtonInit->setObjectName("pushButtonInit");
        pushButtonInit->setGeometry(QRect(20, 110, 81, 21));
        pushButtonInit->setStyleSheet(QString::fromUtf8("Gradiant: qconicalgradient(cx:0, cy:0, angle:135, stop:0 rgba(255, 255, 0, 69), stop:0.375 rgba(255, 255, 0, 69), stop:0.423533 rgba(251, 255, 0, 145), stop:0.45 rgba(247, 255, 0, 208), stop:0.477581 rgba(255, 244, 71, 130), stop:0.518717 rgba(255, 218, 71, 130), stop:0.55 rgba(255, 255, 0, 255), stop:0.57754 rgba(255, 203, 0, 130), stop:0.625 rgba(255, 255, 0, 69), stop:1 rgba(255, 255, 0, 69))"));
        pathLineEdit = new QLineEdit(groupBoxSetup);
        pathLineEdit->setObjectName("pathLineEdit");
        pathLineEdit->setGeometry(QRect(100, 40, 171, 20));
        pushButtonBrowse = new QPushButton(groupBoxSetup);
        pushButtonBrowse->setObjectName("pushButtonBrowse");
        pushButtonBrowse->setGeometry(QRect(10, 40, 81, 21));
        pushButtonBrowse->setStyleSheet(QString::fromUtf8("color rgb(170, 0, 0)\n"
"gradiant qconicalgradient(cx:0.5, cy:0.5, angle:0, stop:0 rgba(35, 40, 3, 255), stop:0.16 rgba(136, 106, 22, 255), stop:0.225 rgba(166, 140, 41, 255), stop:0.285 rgba(204, 181, 74, 255), stop:0.345 rgba(235, 219, 102, 255), stop:0.415 rgba(245, 236, 112, 255), stop:0.52 rgba(209, 190, 76, 255), stop:0.57 rgba(187, 156, 51, 255), stop:0.635 rgba(168, 142, 42, 255), stop:0.695 rgba(202, 174, 68, 255), stop:0.75 rgba(218, 202, 86, 255), stop:0.815 rgba(208, 187, 73, 255), stop:0.88 rgba(187, 156, 51, 255), stop:0.935 rgba(137, 108, 26, 255), stop:1 rgba(35, 40, 3, 255))"));
        pushButtonClone = new QPushButton(groupBoxSetup);
        pushButtonClone->setObjectName("pushButtonClone");
        pushButtonClone->setGeometry(QRect(230, 150, 61, 18));
        pushButtonClone->setStyleSheet(QString::fromUtf8("Gradiant: qconicalgradient(cx:0, cy:0, angle:135, stop:0 rgba(255, 255, 0, 69), stop:0.375 rgba(255, 255, 0, 69), stop:0.423533 rgba(251, 255, 0, 145), stop:0.45 rgba(247, 255, 0, 208), stop:0.477581 rgba(255, 244, 71, 130), stop:0.518717 rgba(255, 218, 71, 130), stop:0.55 rgba(255, 255, 0, 255), stop:0.57754 rgba(255, 203, 0, 130), stop:0.625 rgba(255, 255, 0, 69), stop:1 rgba(255, 255, 0, 69))"));
        lineEditURL = new QLineEdit(groupBoxSetup);
        lineEditURL->setObjectName("lineEditURL");
        lineEditURL->setGeometry(QRect(20, 150, 201, 16));
        label = new QLabel(groupBoxSetup);
        label->setObjectName("label");
        label->setGeometry(QRect(0, 20, 261, 20));
        label_2 = new QLabel(groupBoxSetup);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(10, 90, 251, 16));
        label_3 = new QLabel(groupBoxSetup);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(10, 130, 41, 21));
        label_4 = new QLabel(groupBoxSetup);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(10, 170, 61, 16));
        pushButtonRun = new QPushButton(groupBoxSetup);
        pushButtonRun->setObjectName("pushButtonRun");
        pushButtonRun->setGeometry(QRect(240, 190, 51, 31));
        lineEditCommand = new QLineEdit(groupBoxSetup);
        lineEditCommand->setObjectName("lineEditCommand");
        lineEditCommand->setGeometry(QRect(20, 190, 221, 31));
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(300, 0, 191, 231));
        label_6 = new QLabel(groupBox);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(10, 150, 141, 16));
        lineEditComment = new QLineEdit(groupBox);
        lineEditComment->setObjectName("lineEditComment");
        lineEditComment->setGeometry(QRect(10, 170, 166, 31));
        pushButtonCommit = new QPushButton(groupBox);
        pushButtonCommit->setObjectName("pushButtonCommit");
        pushButtonCommit->setGeometry(QRect(10, 210, 80, 18));
        layoutWidget = new QWidget(groupBox);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(10, 20, 171, 51));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        pushButtonStatus = new QPushButton(layoutWidget);
        pushButtonStatus->setObjectName("pushButtonStatus");

        gridLayout->addWidget(pushButtonStatus, 0, 0, 1, 1);

        pushButtonDiff = new QPushButton(layoutWidget);
        pushButtonDiff->setObjectName("pushButtonDiff");

        gridLayout->addWidget(pushButtonDiff, 0, 1, 1, 1);

        pushButtonAddAll = new QPushButton(layoutWidget);
        pushButtonAddAll->setObjectName("pushButtonAddAll");

        gridLayout->addWidget(pushButtonAddAll, 1, 0, 1, 1);

        pushButtonDiffStaged = new QPushButton(layoutWidget);
        pushButtonDiffStaged->setObjectName("pushButtonDiffStaged");

        gridLayout->addWidget(pushButtonDiffStaged, 1, 1, 1, 1);

        layoutWidget1 = new QWidget(groupBox);
        layoutWidget1->setObjectName("layoutWidget1");
        layoutWidget1->setGeometry(QRect(10, 80, 168, 64));
        gridLayout_2 = new QGridLayout(layoutWidget1);
        gridLayout_2->setObjectName("gridLayout_2");
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        label_5 = new QLabel(layoutWidget1);
        label_5->setObjectName("label_5");

        gridLayout_2->addWidget(label_5, 0, 0, 1, 1);

        lineEditFileName = new QLineEdit(layoutWidget1);
        lineEditFileName->setObjectName("lineEditFileName");

        gridLayout_2->addWidget(lineEditFileName, 1, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        pushButtonAddFile = new QPushButton(layoutWidget1);
        pushButtonAddFile->setObjectName("pushButtonAddFile");

        horizontalLayout->addWidget(pushButtonAddFile);

        pushButtonReset = new QPushButton(layoutWidget1);
        pushButtonReset->setObjectName("pushButtonReset");

        horizontalLayout->addWidget(pushButtonReset);


        gridLayout_2->addLayout(horizontalLayout, 2, 0, 1, 1);

        outputTextEdit = new QTextEdit(centralwidget);
        outputTextEdit->setObjectName("outputTextEdit");
        outputTextEdit->setGeometry(QRect(0, 250, 791, 311));
        groupBox_2 = new QGroupBox(centralwidget);
        groupBox_2->setObjectName("groupBox_2");
        groupBox_2->setGeometry(QRect(500, 0, 291, 101));
        layoutWidget_2 = new QWidget(groupBox_2);
        layoutWidget_2->setObjectName("layoutWidget_2");
        layoutWidget_2->setGeometry(QRect(0, 20, 168, 81));
        gridLayout_4 = new QGridLayout(layoutWidget_2);
        gridLayout_4->setObjectName("gridLayout_4");
        gridLayout_4->setContentsMargins(0, 0, 0, 0);
        lineEditBranchName = new QLineEdit(layoutWidget_2);
        lineEditBranchName->setObjectName("lineEditBranchName");

        gridLayout_4->addWidget(lineEditBranchName, 2, 0, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        pushButtonBranch = new QPushButton(layoutWidget_2);
        pushButtonBranch->setObjectName("pushButtonBranch");

        horizontalLayout_3->addWidget(pushButtonBranch);

        pushButtonMerge = new QPushButton(layoutWidget_2);
        pushButtonMerge->setObjectName("pushButtonMerge");

        horizontalLayout_3->addWidget(pushButtonMerge);


        gridLayout_4->addLayout(horizontalLayout_3, 3, 0, 1, 1);

        label_8 = new QLabel(layoutWidget_2);
        label_8->setObjectName("label_8");

        gridLayout_4->addWidget(label_8, 1, 0, 1, 1);

        layoutWidget2 = new QWidget(groupBox_2);
        layoutWidget2->setObjectName("layoutWidget2");
        layoutWidget2->setGeometry(QRect(180, 20, 82, 81));
        verticalLayout = new QVBoxLayout(layoutWidget2);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        pushButtonBranchAll = new QPushButton(layoutWidget2);
        pushButtonBranchAll->setObjectName("pushButtonBranchAll");

        verticalLayout->addWidget(pushButtonBranchAll);

        pushButtonCheckout = new QPushButton(layoutWidget2);
        pushButtonCheckout->setObjectName("pushButtonCheckout");

        verticalLayout->addWidget(pushButtonCheckout);

        pushButtonLog = new QPushButton(layoutWidget2);
        pushButtonLog->setObjectName("pushButtonLog");

        verticalLayout->addWidget(pushButtonLog);

        groupBox_3 = new QGroupBox(centralwidget);
        groupBox_3->setObjectName("groupBox_3");
        groupBox_3->setGeometry(QRect(500, 110, 291, 131));
        layoutWidget_3 = new QWidget(groupBox_3);
        layoutWidget_3->setObjectName("layoutWidget_3");
        layoutWidget_3->setGeometry(QRect(0, 20, 168, 111));
        gridLayout_5 = new QGridLayout(layoutWidget_3);
        gridLayout_5->setObjectName("gridLayout_5");
        gridLayout_5->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        pushButtonRemoteAdd = new QPushButton(layoutWidget_3);
        pushButtonRemoteAdd->setObjectName("pushButtonRemoteAdd");

        horizontalLayout_4->addWidget(pushButtonRemoteAdd);


        gridLayout_5->addLayout(horizontalLayout_4, 6, 0, 1, 1);

        label_9 = new QLabel(layoutWidget_3);
        label_9->setObjectName("label_9");

        gridLayout_5->addWidget(label_9, 1, 0, 1, 1);

        lineEditURL_2 = new QLineEdit(layoutWidget_3);
        lineEditURL_2->setObjectName("lineEditURL_2");

        gridLayout_5->addWidget(lineEditURL_2, 4, 0, 1, 1);

        lineEditEliasName = new QLineEdit(layoutWidget_3);
        lineEditEliasName->setObjectName("lineEditEliasName");

        gridLayout_5->addWidget(lineEditEliasName, 2, 0, 1, 1);

        label_10 = new QLabel(layoutWidget_3);
        label_10->setObjectName("label_10");

        gridLayout_5->addWidget(label_10, 3, 0, 1, 1);

        layoutWidget_4 = new QWidget(groupBox_3);
        layoutWidget_4->setObjectName("layoutWidget_4");
        layoutWidget_4->setGeometry(QRect(180, 20, 95, 111));
        verticalLayout_2 = new QVBoxLayout(layoutWidget_4);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        pushButtonFetch = new QPushButton(layoutWidget_4);
        pushButtonFetch->setObjectName("pushButtonFetch");

        verticalLayout_2->addWidget(pushButtonFetch);

        pushButtonMerge_2 = new QPushButton(layoutWidget_4);
        pushButtonMerge_2->setObjectName("pushButtonMerge_2");

        verticalLayout_2->addWidget(pushButtonMerge_2);

        pushButtonPush = new QPushButton(layoutWidget_4);
        pushButtonPush->setObjectName("pushButtonPush");

        verticalLayout_2->addWidget(pushButtonPush);

        pushButtonPull = new QPushButton(layoutWidget_4);
        pushButtonPull->setObjectName("pushButtonPull");

        verticalLayout_2->addWidget(pushButtonPull);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 17));
        menuGIT_Bash = new QMenu(menubar);
        menuGIT_Bash->setObjectName("menuGIT_Bash");
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuGIT_Bash->menuAction());

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        groupBoxSetup->setTitle(QCoreApplication::translate("MainWindow", "SETUP and INIT", nullptr));
        pushButtonInit->setText(QCoreApplication::translate("MainWindow", "init", nullptr));
        pathLineEdit->setText(QString());
        pushButtonBrowse->setText(QCoreApplication::translate("MainWindow", "Browse", nullptr));
        pushButtonClone->setText(QCoreApplication::translate("MainWindow", "Clone ", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Select the Directory", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Initialize Git Repository ", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Clone", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Command", nullptr));
        pushButtonRun->setText(QCoreApplication::translate("MainWindow", "Run", nullptr));
        groupBox->setTitle(QCoreApplication::translate("MainWindow", "STAGE and SNAPSHOT", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "Enter Comment", nullptr));
        lineEditComment->setText(QString());
        pushButtonCommit->setText(QCoreApplication::translate("MainWindow", "commit", nullptr));
        pushButtonStatus->setText(QCoreApplication::translate("MainWindow", " status", nullptr));
        pushButtonDiff->setText(QCoreApplication::translate("MainWindow", "diff", nullptr));
        pushButtonAddAll->setText(QCoreApplication::translate("MainWindow", "add all", nullptr));
        pushButtonDiffStaged->setText(QCoreApplication::translate("MainWindow", " diff --staged", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "Enter File Name", nullptr));
        lineEditFileName->setText(QString());
        pushButtonAddFile->setText(QCoreApplication::translate("MainWindow", "add", nullptr));
        pushButtonReset->setText(QCoreApplication::translate("MainWindow", "reset", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("MainWindow", "BRANCH and MERGE", nullptr));
        lineEditBranchName->setText(QString());
        pushButtonBranch->setText(QCoreApplication::translate("MainWindow", "branch", nullptr));
        pushButtonMerge->setText(QCoreApplication::translate("MainWindow", "merge", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "Enter Branch Name", nullptr));
        pushButtonBranchAll->setText(QCoreApplication::translate("MainWindow", "branch all", nullptr));
        pushButtonCheckout->setText(QCoreApplication::translate("MainWindow", "checkout", nullptr));
        pushButtonLog->setText(QCoreApplication::translate("MainWindow", "log", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("MainWindow", "SHARE and UPDATE", nullptr));
        pushButtonRemoteAdd->setText(QCoreApplication::translate("MainWindow", "remote add", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "Enter Alias", nullptr));
        lineEditURL_2->setText(QString());
        lineEditEliasName->setText(QString());
        label_10->setText(QCoreApplication::translate("MainWindow", "Enter URL / Branch Name", nullptr));
        pushButtonFetch->setText(QCoreApplication::translate("MainWindow", "fetch", nullptr));
        pushButtonMerge_2->setText(QCoreApplication::translate("MainWindow", "merge remote branch", nullptr));
        pushButtonPush->setText(QCoreApplication::translate("MainWindow", "push", nullptr));
        pushButtonPull->setText(QCoreApplication::translate("MainWindow", "pull", nullptr));
        menuGIT_Bash->setTitle(QCoreApplication::translate("MainWindow", "GIT Bash", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
