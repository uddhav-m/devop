
#include "HomeOwner.cpp"
#include "SmartBed.cpp"

int main() {
    HomeOwner homeowner("John");
    SmartBed smartBed;
    homeowner.getOutOfBed(smartBed);
    homeowner.enterBathroom();

    EnvironmentSensor environmentSensor;
    WaterHeater waterHeater;
    SmartGeyser geyser(&environmentSensor, &waterHeater);
    homeowner.activateGeyser(geyser);

    return 0;
}