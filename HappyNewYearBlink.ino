 /*
  HappyNewYearBlink
  
  Blink message in Morse code
 */

//"С Новым Годом! Hapy New Year!"
String message = "***    -* --- *-- -*-- --    --* --- -** --- -- --**--    **** *- *--* *--* -*--    -* * *--    -*-- * *- *-* --**-- ";
// Pin 13 has an LED connected on most Arduino boards.
// give it a name:
int led = 13;
int i = 0;

void setup() {                
  // initialize the digital pin as an output.
  pinMode(led, OUTPUT);     
}

void blinkDash() {
  digitalWrite(led, HIGH);
  delay(1000);
  digitalWrite(led, LOW);
  delay(500);
}
  
void blinkDot() {
  digitalWrite(led, HIGH);
  delay(500);
  digitalWrite(led, LOW);
  delay(500);
}

void pause() {
   delay(1000);
}

void loop() {
    if( i < message.length()) {
      if (message.charAt(i) == '*') {
        blinkDot();
      } else if (message.charAt(i) == '-') {
        blinkDash();
      } else {
        pause();
      }
      i++;
    } else {
      i = 0;
     
    }
}
