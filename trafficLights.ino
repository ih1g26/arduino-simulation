int LED3 = 12;
int LED2 = 14;
int LED1 = 27;                     //Assign LED to pin GPIO2
void  setup () { 
      pinMode (LED1,OUTPUT);
      pinMode (LED2,OUTPUT);
      pinMode (LED3,OUTPUT);   //Configure LED pin as output
}

void loop () {
  digitalWrite (LED3,HIGH); // red on       
  delay (1000); 
  digitalWrite (LED2,HIGH);        //red and amber
  delay (1000);                       
  digitalWrite(LED3,LOW);       //green, turn off red and amber
  digitalWrite(LED2,LOW);   
  digitalWrite (LED1,HIGH);
  delay (1000);  
  digitalWrite (LED1,LOW);  //amber, turn off green
  digitalWrite (LED2,HIGH);
  delay (1000);  
  digitalWrite (LED2,LOW); //turn off amber (loop and turn on red)
}   
