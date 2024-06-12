/**
 * @file MainWindow.cpp
 * @brief Implementation of the Git Manager application's main window.
 *
 * This file contains the implementation of the MainWindow class, which provides
 * a graphical user interface (GUI) for managing Git commands. The application
 * uses QProcess to execute Git commands and display their output in a text edit widget.
 * It also includes file and directory browsing capabilities using QFileDialog.
 */

#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
    , process(new QProcess(this)) // Initializes process.
{
    ui->setupUi(this);

    //set the program to the Bash shell executable from Git for Windows
    process->setProgram("C:/Program Files/Git/bin/bash.exe");

    // connect(ui->runButton, &QPushButton::clicked, this, &MainWindow::on_runButton_clicked);
    // connect(ui->statusButton, &QPushButton::clicked, this, &MainWindow::on_statusButton_clicked);
    // connect(ui->browseButton, &QPushButton::clicked, this, &MainWindow::on_browseButton_clicked);
    // connect(ui->initButton, &QPushButton::clicked, this, &MainWindow::on_initButton_clicked);
    // connect(ui->cloneButton, &QPushButton::clicked, this, &MainWindow::on_cloneButton_clicked); // Connect clone button
    connect(process, &QProcess::readyReadStandardOutput, this, &MainWindow::on_readyReadStandardOutput);
    connect(process, &QProcess::readyReadStandardError, this, &MainWindow::on_readyReadStandardError);
    connect(process, QOverload<int, QProcess::ExitStatus>::of(&QProcess::finished),this, &MainWindow::on_process_finished);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow:: setPath(QString p)
{
    //Set the working directory if necessary
    path = p ;
    process->setWorkingDirectory(p);
}

/**
 * @brief Slot function to handle the readyReadStandardOutput signal from the QProcess.
 *
 * This function is called whenever there is new standard output available to read
 * from the QProcess. It reads all the available standard output and appends it
 * to the outputTextEdit widget.
 */
void MainWindow::on_readyReadStandardOutput()
{
    // Read all available standard output
    QString output = process->readAllStandardOutput();

    // Append the output to the outputTextEdit
    ui->outputTextEdit->append(output);
}

/**
 * @brief Slot function to handle the readyReadStandardError signal from the QProcess.
 *
 * This function is called whenever there is new standard error output available to read
 * from the QProcess. It reads all the available standard error output and appends it
 * to the outputTextEdit widget.
 */
void MainWindow::on_readyReadStandardError()
{
    // Read all available standard Error
    QString error = process->readAllStandardError();

    // Append the error to the outputTextEdit
    ui->outputTextEdit->append(error);
}


/**
 * @brief Slot function to handle the finished signal from the QProcess.
 * This function is called when the QProcess finishes its execution. It checks
 * the exit status and exit code of the process and appends appropriate messages
 * to the outputTextEdit to inform the user of the process's termination state.
 *
 * @param exitCode The exit code of the process.
 *                 - 0 indicates successful completion.
 *                 - Any non-zero value indicates an error occurred.
 * @param exitStatus The exit status of the process.
 *                   - QProcess::NormalExit indicates the process finished normally.
 *                   - QProcess::CrashExit indicates the process crashed.
 */
void MainWindow::on_process_finished(int exitCode, QProcess::ExitStatus exitStatus)
{  
    // Check if the process crashed
    if (exitStatus == QProcess::CrashExit)
    {
        ui->outputTextEdit->append("The process crashed.");
    }
    // Check if the process finished with a non-zero exit code
    else if (exitCode != 0)
    {
        ui->outputTextEdit->append("The process finished with exit code " + QString::number(exitCode));
    }
    // The process finished successfully
    else
    {
        ui->outputTextEdit->append("The process finished successfully.");
    }
}


/*************************************************************************************************************************
 * **************************** SETUB & INIT Buttons *********************************************************************
*************************************************************************************************************************/

/**
 * @brief Slot function to handle the clicked signal of the browse button.
 *
 * This function is called when the browse button is clicked. It opens a directory
 * selection dialog, allowing the user to select a directory. If a directory is selected,
 * its path is set in the pathLineEdit widget.
 */
void MainWindow::on_pushButtonBrowse_clicked()
{
    // Open a directory selection dialog
    QString dir = QFileDialog::getExistingDirectory(this, tr("Open Directory"),"", QFileDialog::ShowDirsOnly | QFileDialog::DontResolveSymlinks);// Options
    //  tr("Open Directory"), // Dialog title
    //    "", // Initial directory

    // Check if a directory was selected
    if (!dir.isEmpty())
    {
        // Set the selected directory path in the pathLineEdit widget
        ui->pathLineEdit->setText(dir);
    }
}

/**
 * @brief Slot function to handle the clicked signal of the "Init" button.
 *
 * This function is called when the "Init" button is clicked. It initializes a new
 * Git repository in the directory specified by the user in the pathLineEdit widget.
 * If no directory is specified, it prompts the user to specify one.
 */
void MainWindow::on_pushButtonInit_clicked()
{
    // Clear the outputTextEdit
    ui->outputTextEdit->clear();

    // Get the directory path from pathLineEdit
    QString path = ui->pathLineEdit->text();
    if (path.isEmpty()) {
        ui->outputTextEdit->append("Please specify a directory path.");
        return;
    }

    // Set up the QProcess to run the git init command
    process->setArguments(QStringList() << "-c" << "git init");

    // Set the working directory to the specified path
    process->setWorkingDirectory(path);

    // Start the process
    process->start();
}

/**
 * @brief Slot function to handle the clicked signal of the "Clone" button.
 *
 * This function is called when the "Clone" button is clicked. It clones a Git
 * repository from the URL specified by the user in the lineEditURL widget into
 * the directory specified in the pathLineEdit widget. If no directory or URL is
 * specified, it prompts the user to provide the missing information.
 */
void MainWindow::on_pushButtonClone_clicked()
{
    // Clear the outputTextEdit
    ui->outputTextEdit->clear();

    // Get the repository URL from lineEditURL
    QString URL = ui->lineEditURL->text();
    QString command = "git clone " + URL;

    // Get the directory path from pathLineEdit
    QString path = ui->pathLineEdit->text();
    if (path.isEmpty()) {
        ui->outputTextEdit->append("Please specify a directory path.");
        return;
    }
    if (!URL.isEmpty()) {
        process->setArguments(QStringList() << "-c" << command);
    } else {
        ui->outputTextEdit->append("Please specify a repository URL.");
        return;
    }

    // Set the working directory to the specified path
    process->setWorkingDirectory(path);

    // Start the process
    process->start();
}
/**
 * @brief Slot function to handle the clicked signal of the "Run" button.
 *
 * This function is called when the "Run" button is clicked. It runs a custom Git
 * command specified by the user in the lineEditCommand widget. If no command is
 * specified, it prompts the user to provide one.
 */
void MainWindow::on_pushButtonRun_clicked()
{
    // Clear the outputTextEdit
    ui->outputTextEdit->clear();

    // Get the command from lineEditCommand
    QString command = ui->lineEditCommand->text();
    if (!command.isEmpty()) {
        process->setArguments(QStringList() << "-c" << command);
    } else {
        ui->outputTextEdit->append("Please specify a command.");
        return;
    }

    // Start the process
    process->start();
}


/*************************************************************************************************************************
 * **************************** STAGE and SNAPSHOT Buttons ***************************************************************
*************************************************************************************************************************/

/**
 * @brief Slot function to handle the clicked signal of the "Status" button.
 *
 * This function is called when the "Status" button is clicked. It runs the `git status`
 * command in the directory specified by the user in the `pathLineEdit` widget. If no
 * directory is specified, it runs the command in the current working directory.
 */
void MainWindow::on_pushButtonStatus_clicked()
{
    // Clear the outputTextEdit
    ui->outputTextEdit->clear();

    // Set up the QProcess to run the git status command
    process->setArguments(QStringList() << "-c" << "git status");

    // Set the working directory if specified
    QString path = ui->pathLineEdit->text();
    if (!path.isEmpty())
    {
        process->setWorkingDirectory(path);
    }

    // Start the process
    process->start();
}

/**
 * @brief Slot function to handle the clicked signal of the "Add All" button.
 *
 * This function is called when the "Add All" button is clicked. It runs the `git add .`
 * command to stage all changes in the current working directory.
 */
void MainWindow::on_pushButtonAddAll_clicked()
{
    // Clear the outputTextEdit
    ui->outputTextEdit->clear();

    // Set up the QProcess to run the git add . command
    process->setArguments(QStringList() << "-c" << "git add .");

    // Start the process
    process->start();
}

/**
 * @brief Slot function to handle the clicked signal of the "Add File" button.
 *
 * This function is called when the "Add File" button is clicked. It runs the `git add`
 * command to stage the specified file. If no file is specified, it prompts the user.
 */
void MainWindow::on_pushButtonAddFile_clicked()
{
    // Clear the outputTextEdit
    ui->outputTextEdit->clear();

    // Get the file name from lineEditFileName
    QString fileName = ui->lineEditFileName->text();
    QString command = "git add " + fileName;
    if (!fileName.isEmpty())
    {
        process->setArguments(QStringList() << "-c" << command);
    }
    else
    {
        ui->outputTextEdit->append("Please specify the file name.");
        return;
    }

    // Start the process
    process->start();
}


/**
 * @brief Slot function to handle the clicked signal of the "Commit" button.
 *
 * This function is called when the "Commit" button is clicked. It runs the `git commit`
 * command with the specified commit message. If no commit message is specified, it prompts the user.
 */
void MainWindow::on_pushButtonCommit_clicked()
{
    // Clear the outputTextEdit
    ui->outputTextEdit->clear();

    // Get the commit message from lineEditComment
    QString comment = ui->lineEditComment->text();
    if (!comment.isEmpty())
    {
        QString command = "git commit -m \"" + comment + "\"";
        process->setArguments(QStringList() << "-c" << command);
    }
    else
    {
        ui->outputTextEdit->append("Please write the comment.");
        return;
    }

    // Start the process
    process->start();
}

/**
 * @brief Slot function to handle the "Diff" button click.
 *
 * This function clears the outputTextEdit, sets the QProcess arguments to show the differences
 * between the working directory and the index, and starts the process.
 */
void MainWindow::on_pushButtonDiff_clicked()
{
    ui->outputTextEdit->clear();
    process->setArguments(QStringList() << "-c" << "git diff");
    process->start();
}

/**
 * @brief Slot function to handle the clicked signal of the "Diff Staged" button.
 *
 * This function is called when the "Diff Staged" button is clicked. It runs the `git diff --staged`
 * command to show the differences between the index and the last commit.
 */
void MainWindow::on_pushButtonDiffStaged_clicked()
{
    // Clear the outputTextEdit
    ui->outputTextEdit->clear();

    // Set up the QProcess to run the git diff --staged command
    process->setArguments(QStringList() << "-c" << "git diff --staged");

    // Start the process
    process->start();
}



/**
 * @brief Slot function to handle the clicked signal of the "Reset" button.
 *
 * This function is called when the "Reset" button is clicked. It runs the `git reset`
 * command to unstage the specified file. If no file is specified, it prompts the user.
 */
void MainWindow::on_pushButtonReset_clicked()
{
    // Clear the outputTextEdit
    ui->outputTextEdit->clear();

    // Get the file name from lineEditFileName
    QString fileName = ui->lineEditFileName->text();
    QString command = "git reset " + fileName;
    if (!fileName.isEmpty())
    {
        process->setArguments(QStringList() << "-c" << command);
    }
    else
    {
        ui->outputTextEdit->append("Please specify the file name.");
        return;
    }

    // Start the process
    process->start();
}


/*************************************************************************************************************************
 * **************************** BRANCH & MERGE Buttons *******************************************************************
*************************************************************************************************************************/


/**
 * @brief Slot function to handle the "Branch All" button click.
 *
 * This function clears the outputTextEdit, sets the QProcess arguments to list all branches,
 * and starts the process.
 */
void MainWindow::on_pushButtonBranchAll_clicked()
{
    ui->outputTextEdit->clear();

    // Set up the QProcess to run the git status command
    process->setArguments(QStringList() << "-c" << "git branch");

    process->start();
}


/**
 * @brief Slot function to handle the "Checkout" button click.
 *
 * This function clears the outputTextEdit, sets the QProcess arguments to checkout a branch,
 * and starts the process.
 */
void MainWindow::on_pushButtonCheckout_clicked()
{
    ui->outputTextEdit->clear();

    // Set up the QProcess to run the git status command
    process->setArguments(QStringList() << "-c" << "git checkout");

    process->start();
}

/**
 * @brief Slot function to handle the "Log" button click.
 *
 * This function clears the outputTextEdit, sets the QProcess arguments to show the git log,
 * and starts the process.
 */
void MainWindow::on_pushButtonLog_clicked()
{
    ui->outputTextEdit->clear();

    // Set up the QProcess to run the git status command
    process->setArguments(QStringList() << "-c" << "git log");

    process->start();
}

/**
 * @brief Slot function to handle the "Branch" button click.
 *
 * This function clears the outputTextEdit, retrieves the branch name from lineEditBranchName,
 * constructs the git branch command, sets the QProcess arguments, and starts the process.
 */
void MainWindow::on_pushButtonBranch_clicked()
{
    ui->outputTextEdit->clear();

    QString branchName = ui->lineEditBranchName->text();
    QString t = "git branch "+ branchName;
    if (!branchName.isEmpty())
    {
        // Set up the QProcess to run the git status command
        //ui->outputTextEdit->append(URL);
        process->setArguments(QStringList() << "-c" << t );
    }
    else
    {
        //process->setArguments(QStringList() << "-c" << "echo error");
        ui->outputTextEdit->append("Please specify the branch name.");
        return;
    }

    process->start();
}

/**
 * @brief Slot function to handle the "Merge" button click.
 *
 * This function clears the outputTextEdit, retrieves the branch name from lineEditBranchName,
 * constructs the git merge command, sets the QProcess arguments, and starts the process.
 */
void MainWindow::on_pushButtonMerge_clicked()
{
    ui->outputTextEdit->clear();

    QString branchName = ui->lineEditBranchName->text();
    QString t = "git merge "+ branchName;
    if (!branchName.isEmpty())
    {
        process->setArguments(QStringList() << "-c" << t );
    }
    else
    {
        ui->outputTextEdit->append("Please specify the branch name.");
        return;
    }

    process->start();

}

/*************************************************************************************************************************
 * **************************** SHARE & UPDATE Buttons *******************************************************************
*************************************************************************************************************************/
/**
 * @brief Slot function to handle the "Remote Add" button click.
 *
 * This function clears the outputTextEdit, retrieves the alias and URL from the respective line edits,
 * constructs the git remote add command, sets the QProcess arguments, and starts the process.
 */
void MainWindow::on_pushButtonRemoteAdd_clicked()
{
    ui->outputTextEdit->clear();
    QString Elias =  ui->lineEditEliasName->text();
    QString URL =  ui->lineEditURL_2->text();
    QString command = "git remote add " + Elias + " " + URL ;
    if ((!Elias.isEmpty()) && (!URL.isEmpty()))
    {
        process->setArguments(QStringList() << "-c" << command );
    }
    else
    {
        if (Elias.isEmpty())
        {
            ui->outputTextEdit->append("Please specify the Elias name.");
        }
        else
        {
            ui->outputTextEdit->append("Please specify the URL.");
        }
        return;
    }

    process->start();

}

/**
 * @brief Slot function to handle the "Fetch" button click.
 *
 * This function clears the outputTextEdit, retrieves the alias from the lineEditEliasName,
 * constructs the git fetch command, sets the QProcess arguments, and starts the process.
 */
void MainWindow::on_pushButtonFetch_clicked()
{
    ui->outputTextEdit->clear();
    QString Elias =  ui->lineEditEliasName->text();
    QString command = "git fetch " + Elias ;
    if (!Elias.isEmpty())
    {
        process->setArguments(QStringList() << "-c" << command );
    }
    else
    {
        ui->outputTextEdit->append("Please specify the Elias.");
        return;
    }

    process->start();
}

/**
 * @brief Slot function to handle the "Merge" button click (second instance).
 *
 * This function clears the outputTextEdit, retrieves the alias from the lineEditEliasName,
 * constructs the git merge command, sets the QProcess arguments, and starts the process.
 */
void MainWindow::on_pushButtonMerge_2_clicked()
{
    ui->outputTextEdit->clear();
    QString Elias =  ui->lineEditEliasName->text();
    QString command = "git merge " + Elias ;
    if (!Elias.isEmpty())
    {
        process->setArguments(QStringList() << "-c" << command );
    }
    else
    {
        ui->outputTextEdit->append("Please specify the Elias.");
        return;
    }

    process->start();

}

/**
 * @brief Slot function to handle the "Push" button click.
 *
 * This function clears the outputTextEdit, retrieves the alias from the lineEditEliasName,
 * constructs the git push command, sets the QProcess arguments, and starts the process.
 */
void MainWindow::on_pushButtonPush_clicked()
{
    ui->outputTextEdit->clear();
    QString Elias =  ui->lineEditEliasName->text();
    QString command = "git push " + Elias ;
    if (!Elias.isEmpty())
    {
        process->setArguments(QStringList() << "-c" << command );
    }
    else
    {
        ui->outputTextEdit->append("Please specify the Elias.");
        return;
    }

    process->start();
}

/**
 * @brief Slot function to handle the "Pull" button click.
 *
 * This function clears the outputTextEdit, sets the QProcess arguments to pull from the remote repository,
 * and starts the process.
 */
void MainWindow::on_pushButtonPull_clicked()
{
    ui->outputTextEdit->clear();
    process->setArguments(QStringList() << "-c" << "git pull" );
    process->start();
}

