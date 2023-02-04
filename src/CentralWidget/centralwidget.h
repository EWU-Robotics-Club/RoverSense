#ifndef CENTRALWIDGET_H
#define CENTRALWIDGET_H

#include <QWidget>
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QFrame>
#include <QWebEngineView>
#include <QWebChannel>

#include "../Gauge/Speedometer/speedometer.h"

class CentralWidget : public QWidget
{
    Q_OBJECT
public:
    explicit CentralWidget(QWidget *parent = nullptr);
    ~CentralWidget();
private:
    QHBoxLayout* m_hBoxLayout;
    QFrame* m_rightFrame;
    QFrame* m_leftFrame;

signals:

};

#endif // CENTRALWIDGET_H
