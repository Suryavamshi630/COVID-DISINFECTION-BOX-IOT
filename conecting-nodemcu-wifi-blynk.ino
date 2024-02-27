#define AUTH ""
#define WIFI_SSID ""
#define WIFI_PASS ""

void relayonoff (int relay) {
switch (relay) {
  case 1:
         if (toggleState_1 == 1) {
         digitalWrite (RelayPin1, LOW); // turn on relay 1 
         toggleState_1 = 0;
         Serial.println("Devicel ON");
         } 
         else{
         digitalWrite (RelayPin1, HIGH); // turn off relay 1 
         toggleState_1 = 1;
         Serial.println("Devicel OFF");
         }
         delay(100);
  break;
  case 2:
         if (toggleState_2 ==1) {
         digitalWrite (RelayPin2, LOW); // turn on relay 2 
         toggleState_2 = 0;
         Serial.println("Device2 ON");
         } 
         else{
         digitalWrite (RelayPin2, HIGH); // turn off relay 2 
         toggleState_2 = 1;
         Serial.println("Device2 OFF");
         }
         delay(100);
  break; 
  case 3:
         if (toggleState_3== 1) {
         digitalWrite (RelayPin3, LOW); // turn on relay 3 
         toggleState_3 = 0;
         Serial.println("Device3 ON");
         } 
         else{
         digitalWrite (RelayPin3, HIGH); // turn off relay 3 
         toggleState_3 = 1;
         Serial.println("Device3 OFF");
         }
         delay(100);
  break;
  case 4:
         if (toggleState_4== 1) {
         digitalWrite (RelayPin4, LOW); // turn on relay 4 
         toggleState_4 = 0;
         Serial.println("Device4 ON");
         }
         else{
         digitalWrite (RelayPin4, HIGH); // turn off relay 4
         toggleState_4 = 1;
         Serial.println("Device4 OFF");
         }
         delay(100);
  break;
  default: break;
  }
}
