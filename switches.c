/*
    Project name : Switches
    Modified Date: 12-06-2024
    Code by : Projectslearner
    Website : https://projectslearner.com/learn/arduino-nano-switches
*/

// Define the pin connected to the switch
const int switchPin = 2;

void setup() {
  // Set the switch pin as input
  pinMode(switchPin, INPUT);
  
  // Initialize serial communication
  Serial.begin(9600);
}

void loop() {
  // Read the state of the switch
  int switchState = digitalRead(switchPin);
  
  // Print the state to the Serial Monitor
  Serial.print("Switch state: ");
  Serial.println(switchState);
  
  // Add a short delay to avoid rapid serial prints
  delay(100);
}
