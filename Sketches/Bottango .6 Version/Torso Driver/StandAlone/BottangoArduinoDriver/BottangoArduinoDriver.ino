#include "src/BottangoCore.h"
#include "src/BasicCommands.h"
// #include "GeneratedCommandStreams.h"  // Include the generated animation code from Bottango

#define SERIAL1_TX_PIN      33  //  // Serial 1 Tx Pin
#define SERIAL1_RX_PIN      25 //  // Serial 1 Rx Pin
#define SERIAL1_DEFAULT_BAUD_RATE 9600

void setup() 
{
    Serial.begin(115200);  // Initialize serial communication at 115200 baud rate
    Serial1.begin(SERIAL1_DEFAULT_BAUD_RATE,SERIAL_8N1,SERIAL1_RX_PIN,SERIAL1_TX_PIN);
   
    BottangoCore::bottangoSetup();  // Initialize BottangoCore using bottangoSetup
   
    Serial.println("Bottango setup complete. Torso Driver");
}

void loop() {
    // Process serial input to trigger animations
    if (Serial.available()) {
        String command = Serial.readStringUntil('\n');  // Read the command from serial
        processSerialCommand(command);  // Trigger corresponding action
    }
        if (Serial1.available()) {
        String command = Serial1.readStringUntil('\r');  // Read the command from serial
        processSerialCommand(command);  // Trigger corresponding action
    }
    // Use BottangoCore::bottangoLoop() to handle servo updates and active animations
    BottangoCore::bottangoLoop();  // This will update the servos and handle animations
}

// Function to process the serial command and trigger actions
void processSerialCommand(String command) {
  // Serial.println("Received command: " + command);  // Debugging print
    if (command.startsWith(":a") || (command.startsWith(":A"))) {
      String animationName = command.substring(2);  // Extract animation name (e.g., "Wave")
      Serial.println("Animation Name: " + animationName);  // Debugging print
      byte animationId = animationName.toInt();
      BottangoCore::commandStreamProvider.startCommandStream(animationId, false); Serial.println("Animation triggered"); 
    }        
}
