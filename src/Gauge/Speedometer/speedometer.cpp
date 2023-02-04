#include "speedometer.h"

Speedometer::Speedometer(QWidget* t_parent, std::string gaugeHTML) : Gauge(t_parent, gaugeHTML)
{
}


void Speedometer::Update()
{
    //code to update the speedometer goes here
    this->page()->runJavaScript("gauge.value = 50;");

}


Speedometer::~Speedometer()
{

}
