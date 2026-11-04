int leds[] = {12, 14, 27};                
void setup () { 
  for (int i = 0; i < sizeof(leds) / sizeof(leds[0]); i++) {
      pinMode (leds[i],OUTPUT); }  //Configure LED pin as output
}

int codes[][3] = {
    {0, 0, 0},
    {0, 0, 1},
    {0, 1, 0},
    {0, 1, 1},
    {1, 0, 0},
    {1, 0, 1},
    {1, 1, 0}, 
    {1, 1, 1} 
};

void loop () {

    for(int i=0; i < sizeof(codes) / sizeof(codes[0]); i++){
      for(int j=0; j < 3; j++){
          if(codes[i][j] == 1){
              digitalWrite(leds[j], HIGH);
          } 
      }
      delay (500); 
      for (int i = 0; i < sizeof(leds) / sizeof(leds[0]); i++) {
        digitalWrite (leds[i],LOW); // red on       
      }
      delay (500); 
    }
}
