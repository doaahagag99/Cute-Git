/**
 * @file main.cpp
 * @author Doaa Hagag (doaahagag128@gmail.com)
 * @brief Entry point for the Git management desktop application.
 *
 * This file contains the main function which serves as the entry point for the Git Manager
 * desktop application. The application is developed using the Qt framework and provides a
 * graphical user interface (GUI) for managing Git commands. It initializes the QApplication
 * and MainWindow instances, and starts the event loop.
 *
 * Key Features:
 * - Provides a GUI for executing Git commands such as clone, init, add, commit, diff, branch, and merge.
 * - Utilizes QProcess to handle Git commands and capture their output.
 * - Designed with a user-friendly interface featuring buttons and text fields for command input.
 * - Includes file and directory browsing capabilities using QFileDialog.
 * - Displays command outputs and errors in a text edit widget.
 * - Manages process outputs and exit statuses efficiently.
 * @version 1.0.0
 * @date 2024-06-12
 */
#include "mainwindow.h"
#include <QApplication>


/**
 * @brief Main function to start the Git Manager application.
 *
 * This function initializes the QApplication and MainWindow instances, sets up the main
 * window, and starts the Qt event loop.
 *
 * @param argc Number of command-line arguments.
 * @param argv Array of command-line arguments.
 * @return int Application exit status.
 */

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
}
