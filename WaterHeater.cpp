#include <iostream>

class WaterHeater : public EnvironmentSensor {
public:
    void heatWater() {
        std::cout << "Water heating...\n";
    }
};