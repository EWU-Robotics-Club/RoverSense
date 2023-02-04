#ifndef WINDOW_H
#define WINDOW_H

#include <QMainWindow>

#include "../CentralWidget/centralwidget.h"

class Window : public QMainWindow
{
    Q_OBJECT
public:
    explicit Window(QWidget *parent = nullptr);
    ~Window();

private:
    CentralWidget *m_centralWidget;

signals:

};

#endif // WINDOW_H
