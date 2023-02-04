#ifndef GAUGE_H
#define GAUGE_H

#include <QWebEngineView>

class Gauge : public QWebEngineView
{
public:
    Gauge(QWidget* t_parent, std::string gaugeHTML);
    virtual void Update();
    virtual ~Gauge();
};

#endif // GAUGE_H
