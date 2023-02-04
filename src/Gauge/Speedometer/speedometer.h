#ifndef SPEEDOMETER_H
#define SPEEDOMETER_H

#include "../gauge.h"

class Speedometer : public Gauge
{
public:
    Speedometer(QWidget* t_parent, std::string gaugeHTML);
    void Update() override;
    ~Speedometer();
};

#endif // SPEEDOMETER_H
