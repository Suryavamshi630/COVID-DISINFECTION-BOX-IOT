void setup()
{
  Serial.begin(9600);


  pinMode (Relay Pin1, OUTPUT); 
  pinMode (RelayPin2, OUTPUT); 
  pinMode (RelayPin3, OUTPUT); 
  pinMode (RelayPin4, OUTPUT);

  pinMode (wifiled, OUTPUT);
  pinMode (SwitchPin1, INPUT_PULLUP); 
  pinMode (SwitchPin2, INPUT_PULLUP); 
  pinMode (SwitchPin3, INPUT_PULLUP);
  pinMode (SwitchPin4, INPUT_PULLUP);

//During Starting all Relays should TURN OFF 
  digitalWrite (RelayPinl, toggleState_1); 
  digitalWrite (RelayPin2, toggleState_2); 
  digitalWrite(RelayPin3, toggleState_3); 
  digitalWrite (RelayPin4, toggleState_4);

  WiFi.begin (WIFI_SSID, WIFI_PASS);
  timer.setInterval (3000L, checkBlynkStatus); // check if Blynk server is connected eve 
  Blynk.config (AUTH);
}

void loop()
{
  if (WiFi.status() != WL_CONNECTED)
  {
    Serial.println("WiFi Not Connected");
  }
  else
  {
    Serial.println("WiFi Connected");
    Blynk.run();
  }

  timer.run(); // Initiates SimpleTimer
  if (wifiFlag == 0)
    with_internet ();
  else
    without_internet ();
}
