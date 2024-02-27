void with internet () {
     //Manual Switch Control
     if (digitalRead (SwitchPin1) == LOW) {
     delay (200);
     relayOnOff (1);
     Blynk. virtualWrite (VPIN_BUTTON_1, toggleState_1); // Update Button Widget
     }
     else if (digitalRead (SwitchPin2) == LOW) {
     delay (200);
     relayOnOff (2);
     Blynk.virtualWrite (VPIN_BUTTON_2, toggleState_2);  // Update Button Widget
     }
     else if (digitalRead (SwitchPin3) == LOW) {
     delay (200);
     relayOnOff (3);
     Blynk. virtualWrite (VPIN_BUTTON_3, toggleState_3); // Update Button Widget
     }
     else if (digitalRead (SwitchPin4) == LOW) {
     delay (200);
     relayOnOff (4);
     Blynk.virtualWrite (VPIN_BUTTON_4, toggleState_4); // Update Button Widget
     }
}

void without internet(){
     //Manual Switch Control
     if (digitalRead (SwitchPin1) == LOW) {
     delay (200);
     relayOnOff (1);
     }
     else if (digitalRead (SwitchPin2) == LOW){ 
     delay (200);
     relayOnOff (2);
     }
     else if (digitalRead (SwitchPin3) == LOW){
     delay (200);
     relayOnOff (3);
     }
     else if (digitalRead (SwitchPin4) == LOW) {
     delay (200);
     relayOnOff (4);
     }
}
BLYNK_CONNECTED(){
  // Request the latest state from the server
  Blynk.syncVirtual (VPIN_BUTTON_1);
  Blynk.syncVirtual (VPIN_BUTTON_2);
  Blynk.syncVirtual (VPIN_BUTTON_3); 
  Blynk.syncVirtual (VPIN_BUTTON_4);
}
// When App button is pushed switch the state

BLYNK_WRITE (VPIN_BUTTON_1) {
  toggleState_1 = param.asInt();
  digitalWrite (RelayPinl, toggleState_1);
}

BLYNK_WRITE (VPIN_BUTTON_2) {
  toggleState_2 = param.asInt();
  digitalWrite (RelayPin2, toggleState_2);
}

BLYNK_WRITE (VPIN_BUTTON_3) {
  toggleState_3 = param.asInt();
  digitalWrite (RelayPin3, toggleState_3);
}

BLYNK_WRITE (VPIN_BUTTON_4) {
  toggleState_4 =param.asInt();
  digitalWrite (RelayPin4, toggleState_4);
}
BLYNK_CONNECTED(){
  // Request the latest state from the server
  Blynk.syncVirtual (VPIN_BUTTON_1);
  Blynk.syncVirtual (VPIN_BUTTON_2);
  Blynk.syncVirtual (VPIN_BUTTON_3); 
  Blynk.syncVirtual (VPIN_BUTTON_4);
}
// When App button is pushed switch the state
BLYNK_WRITE (VPIN_BUTTON_1) {
  toggleState_1 = param.asInt();
  digitalWrite (RelayPinl, toggleState_1);
}
BLYNK_WRITE (VPIN_BUTTON_2) {
  toggleState_2 = param.asInt();
  digitalWrite (RelayPin2, toggleState_2);
}
BLYNK_WRITE (VPIN_BUTTON_3) {
  toggleState_3 = param.asInt();
  digitalWrite (RelayPin3, toggleState_3);
}
BLYNK_WRITE (VPIN_BUTTON_4) {
  toggleState_4 =param.asInt();
  digitalWrite (RelayPin4, toggleState_4);
}
void checkBlynkStatus() { // called every 3 seconds by SimpleTimer

  bool isconnected = Blynk.connected();
  if (isconnected == false) {
    wifiFlag = 1;
    digitalWrite (wifiLed, HIGH); //Turn off WiFi LED
  }
  if (isconnected ==true){
  wifiFlag= 0;
  digitalWrite (wifiled, LOW); //Turn on WiFi LED
  }
}
