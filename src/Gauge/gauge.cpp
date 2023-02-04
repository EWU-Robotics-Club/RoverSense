#include "gauge.h"

Gauge::Gauge(QWidget* t_parent, std::string gaugeHTML) : QWebEngineView(t_parent)
{
    //load the gauge's html file into the current web engine view
    this->load(QUrl::fromLocalFile(QString::fromStdString(gaugeHTML)));

}

Gauge::~Gauge() { }

void Gauge::Update() {}
