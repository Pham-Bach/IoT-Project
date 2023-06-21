#include <ESP8266WiFi.h>                                               
#include <FirebaseArduino.h>  

#define FIREBASE_HOST "newproject-1e9af-default-rtdb.firebaseio.com" 
#define FIREBASE_AUTH "q9vFTe4nLpkplVozSgTID9TtJbKwejTwVY2N1mOb"   
#define WIFI_SSID "PhongMayTinh"   
#define WIFI_PASSWORD "ttcnttsgu"

String fireStatus = "";                                                     // led status received from firebase
int led1 = 2;  
void setup() {
  Serial.begin(115200);
  delay(1000);  
  pinMode(led1, OUTPUT);                 
  WiFi.begin(WIFI_SSID, WIFI_PASSWORD);                                      //try to connect with wifi
  Serial.print("Connecting to ");
  Serial.print(WIFI_SSID);
  while (WiFi.status() != WL_CONNECTED) {
    Serial.print(".");
    delay(500);
  }
  Serial.println();
  Serial.print("Connected to ");
  Serial.println(WIFI_SSID);
  Serial.print("IP Address is : ");
  Serial.println(WiFi.localIP());                                                      //print local IP address
  Firebase.begin(FIREBASE_HOST, FIREBASE_AUTH);                                       // connect to firebase
  delay(4000);
  Firebase.setString("LED1", "OFF");  //send initial string of led status
}

void loop() {
  fireStatus = Firebase.getString("LED1");                                      // get ld status input from firebase
  if (fireStatus == "ON") {                                                          // compare the input of led status received from firebase
    Serial.println("Led 1 Turned ON");                         
    digitalWrite(led1, LOW);      // SÁNG ĐÈN                                                   // make external led ON
  } 
  else if (fireStatus == "OFF") {                                                  // compare the input of led status received from firebase
    Serial.println("Led 1 Turned OFF");
    digitalWrite(led1, HIGH);      // TẮT ĐÈN                                                // make external led OFF
  }
  else {
    Serial.println("Wrong Credential! Please send ON/OFF");
  }

 
}
