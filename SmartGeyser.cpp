#include <iostream>
#include "EnvironmentSensor.h"
#include "WaterHeater.h"

class SmartGeyser {
private:
    EnvironmentSensor* environmentSensor;
    WaterHeater* waterHeater;

public:
    SmartGeyser(EnvironmentSensor* es, WaterHeater* wh) : environmentSensor(es), waterHeater(wh) {}

    void activate() {
        std::cout << "Geyser activated.\n";
    }

    void deactivate() {
        std::cout << "Geyser deactivated.\n";
    }

    EnvironmentSensor* getEnvironmentSensor() const {
        return environmentSensor;
    }

    void setEnvironmentSensor(EnvironmentSensor* es) {
        environmentSensor = es;
    }

    WaterHeater* getWaterHeater() const {
        return waterHeater;
    }

    void setWaterHeater(WaterHeater* wh) {
        waterHeater = wh;
    }
};