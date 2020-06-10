
#include <EthernetClient.h>
byte mac[]={0xFF,0xDE,0xAD,0x12};
char server="google.com";
EthernetClient client;
void setup() {
  Ethernet.begin(mac);
  if (client.connect(server,80)){
    client.println("GET index.html/HTTP/1.1");
    client.stop();
  }
  
}

void loop() {
  // put your main code here, to run repeatedly:

}