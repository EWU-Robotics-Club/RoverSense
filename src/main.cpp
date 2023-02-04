#include <QApplication>
#include <QWidget>
#include <QPushButton>
#include <QFrame>
#include <QWebEngineView>
#include <QThread>

#include "Window/window.h"


int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    Window window;
    return app.exec();

}
