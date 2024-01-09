
  // Define the motor pin
    int ledpin = 2 ;

  
  
  
  void setup() {
    // put your setup code here, to run once:
    
    Serial.begin(9600);
    Serial.println("Bluetooth Started! Ready to pair...");
  pinMode(ledpin, OUTPUT);
  }
 
  void loop() {
  
    // Increase the duty cycle of the PWM signal
  for (int i = 0; i < 200; i++) {
    analogWrite(ledpin, i);
    
    delay(10);
  }

  // Decrease the duty cycle of the PWM signal
  for (int i = 200; i >= 0; i--) {
    analogWrite(ledpin, i);
    
    delay(10);
  }  
 }
   
 
