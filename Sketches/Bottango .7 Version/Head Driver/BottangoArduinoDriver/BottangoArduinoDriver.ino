// !!! DRIVER VERSION: 0.7.0a1 !!!
// !!! Api Version: 8 !!!

#include "src/BottangoCore.h"
#include "src/BasicCommands.h"


#define SERIAL1_TX_PIN      33  //  // Serial 1 Tx Pin
#define SERIAL1_RX_PIN      25 //  // Serial 1 Rx Pin
#define SERIAL1_DEFAULT_BAUD_RATE 9600

// Function to process the serial command and trigger actions
void processSerialCommand(String command) {
  // Serial.println("Received command: " + command);  // Debugging print
  #ifdef USE_CODE_COMMAND_STREAM
    if (command.startsWith(":a") || (command.startsWith(":A"))) {
      String animationName = command.substring(2);  // Extract animation name (e.g., "Wave")
      Serial.println("Animation Name: " + animationName);  // Debugging print
      byte animationId = animationName.toInt();
      BottangoCore::commandStreamProvider.startCommandStream(animationId, false); Serial.println("Animation triggered"); 
    }
  #endif
}
void setup()
{
  Serial1.begin(SERIAL1_DEFAULT_BAUD_RATE,SERIAL_8N1,SERIAL1_RX_PIN,SERIAL1_TX_PIN);
  BottangoCore::bottangoSetup();
}

void loop()
{
  // // Process serial input to trigger animations
  if (Serial1.available()) {
    String command = Serial1.readStringUntil('\r');  // Read the command from serial
    processSerialCommand(command);  // Trigger corresponding action
  }
  BottangoCore::bottangoLoop();
}
