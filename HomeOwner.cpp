#include <iostream>
#include "SmartGeyser.h"
#include "SmartBed.h"

class HomeOwner {
private:
    const char* name;

public:
    HomeOwner(const char* n) : name(n) {}

    const char* getName() const {
        return name;
    }

    void setName(const char* n) {
        name = n;
    }

    void getOutOfBed(SmartBed& smartBed) {
        smartBed.wakeUp();
        std::cout << name << " gets out of bed.\n";
    }

    void enterBathroom() {
        std::cout << name << " enters the bathroom.\n";
    }

    // Method to interact with SmartGeyser
    void activateGeyser(SmartGeyser& geyser);
};

void HomeOwner::activateGeyser(SmartGeyser& geyser) {
    EnvironmentSensor* sensor = geyser.getEnvironmentSensor();
    if (sensor->detectSeason()) {
        if (sensor->detectTemperature() < 20.0) {
            geyser.activate();
        }
    }
}