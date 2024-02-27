#include <BlynkSimpleEsp8266.h>
#define Relay Pin1 5 //D1
#define RelayPin2 4 //D2
#define RelayPin3 14 //D5 
#define RelayPin4 12 //D6

#define SwitchPin1 10 //SD3 
#define SwitchPin2 0 //D3 
#define SwitchPin3 13 //D7
#define SwitchPin4 3 //RX

#define wifiLed 16 //DO

#define VPIN_BUTTON_1    V1
#define VPIN_BUTTON_2    V2
#define VPIN_BUTTON_3    V3
#define VPIN_BUTTON_4    V4

int toggleState_1 =1; //Define integer to remember the toggle state for relay 1 
int toggleState_2 =1; //Define integer to remember the toggle state for relay 2 
int toggleState_3 =1; //Define integer to remember the toggle state for relay 3 
int toggleState_4 =1; //Define integer to remember the toggle state for relay 4
int wifiFlag = 0;
