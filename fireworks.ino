int leds[] = {27, 14, 12};                
void setup () { 
  for (int i = 0; i < sizeof(leds) / sizeof(leds[0]); i++) {
      pinMode (leds[i],OUTPUT); }  //Configure LED pin as output
}

void loop () {

  for (int i = 0; i < sizeof(leds) / sizeof(leds[0]); i++) {
    digitalWrite (leds[i],HIGH); // red on       
    delay (1000); 
  }

  for (int i = 0; i < sizeof(leds) / sizeof(leds[0]); i++) {
    digitalWrite (leds[i],LOW); // red on       
  }
  delay (500); 

  for (int i = 0; i < sizeof(leds) / sizeof(leds[0]); i++) {
    digitalWrite (leds[i],HIGH); // red on       
  }
  delay (100); 
  for (int i = 0; i < sizeof(leds) / sizeof(leds[0]); i++) {
    digitalWrite (leds[i],LOW); // red on       
  }
    delay (1000); 
}     
