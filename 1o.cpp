// Device Monitoring System(Hierarchical Inheritance)
#include <iostream>
#include <string>
using namespace std;

class Device {
protected:
    string deviceID;
    string firmwareVersion;
public:
    void setDevice(string id, string fw) {
        deviceID = id;
        firmwareVersion = fw;
    }
};

class SmartLight : public Device {
private:
    int brightness;
    string colorMode;
public:
    void setLight(int b, string c) {
        brightness = b;
        colorMode = c;
    }
    void display() {
        cout << "\nSmartLight Status:\nID: " << deviceID
             << "\nFirmware: " << firmwareVersion
             << "\nBrightness: " << brightness
             << "\nColor Mode: " << colorMode << endl;
    }
};

class SmartThermostat : public Device {
private:
    float currentTemp, setPoint;
public:
    void setThermostat(float ct, float sp) {
        currentTemp = ct;
        setPoint = sp;
    }
    void display() {
        cout << "\nSmartThermostat Status:\nID: " << deviceID
             << "\nFirmware: " << firmwareVersion
             << "\nCurrent Temp: " << currentTemp
             << "\nSetpoint: " << setPoint << endl;
    }
};

int main() {
    SmartLight light;
    light.setDevice("SL001", "v1.2");
    light.setLight(80, "Warm White");
    light.display();

    SmartThermostat thermostat;
    thermostat.setDevice("ST001", "v2.0");
    thermostat.setThermostat(25.5, 22.0);
    thermostat.display();

    return 0;
}
