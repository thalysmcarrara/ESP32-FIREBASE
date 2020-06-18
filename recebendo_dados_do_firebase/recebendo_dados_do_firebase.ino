#include <WiFi.h>
#include<FirebaseESP32.h>

const char* usuario = "DESKTOP-VBHEP5F 5968";
const char* senha = "secret";

float temperatura;

#define HOST "https://esp32-2f6ae.firebaseio.com/"
#define Senha_Fire "lGi3lyF61RL6ERoqHfPKXEmlpMUkOYGljHpav46K"

void setup() {
  Serial.begin(115200);
  WiFi.begin(usuario,senha);

  while(WiFi.status() != WL_CONNECTED){
    delay(500);
    Serial.println("Conectando...");
    }
    Serial.println("Conectado ao WIFI");
  Firebase.begin(HOST,Senha_Fire);
}

void loop() 
{
 temperatura = Firebase.getFloat("sala1/temperatura");
 Serial.print("a temperatura eh: ");
 Serial.println(temperatura);
 
  
}
