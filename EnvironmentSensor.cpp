#include <iostream>

class EnvironmentSensor {
public:
    virtual bool detectSeason() {
        // Simulated method, returns true for winter
        return true;
    }

    virtual double detectTemperature() {
        // Simulated method, returns temperature
        return 25.5; // Sample temperature
    }
};