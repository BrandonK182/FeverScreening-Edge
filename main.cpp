#include <iostream>
#include "device/flirone_interface.cc"
#include <pthread.h>

int main() {
    // Create and run FlirOneInterface
    device::FlirOneConfig config;
    device::FlirOneImageResult result;
    config.name = "Test";
    device::FlirOneInterface flir_interface(config);
    flir_interface.Run();

    flir_interface.Stop();
    return 0;
}

//g++ -I. main.cpp -lusb-1.0
//g++ -I. main.cpp -lusb-1.0 -pthread