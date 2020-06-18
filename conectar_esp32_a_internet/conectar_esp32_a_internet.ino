/*conectar o ESP32 na internet */

#include <WiFi.h>

const char* usuario = "DESKTOP-VBHEP5F 5968";
const char* senha = "secret";

void setup() {
  Serial.begin(115200);
  WiFi.begin(usuario,senha);

  while(WiFi.status() != WL_CONNECTED){
    delay(500);
    Serial.println("Conectando...");
    }
    Serial.println("Conectado ao WIFI");
}

void loop() {
  
}
