#include "window.h"

Window::Window(QWidget *parent) : QMainWindow{parent}
{
    m_centralWidget = new CentralWidget(this);
    this->setCentralWidget(m_centralWidget);

    this->resize(800, 600);
    this->setWindowTitle("RoverSense");
    this->show();
}

Window::~Window()
{
    delete m_centralWidget;
}
