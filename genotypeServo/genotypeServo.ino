#include <Servo.h>

 
// Define servo objects
Servo servo1;
Servo servo2;
Servo servo3;

 

// Fibonacci sequence
int fib[3] = {1, 1, 2};

 

void setup() {
  // Attach servos to their respective pins
  servo1.attach(9);
  servo2.attach(10);
  servo3.attach(11);
  Serial.begin(9600);
  
  servo1.write(0);
  delay(100);
  servo2.write(0);
  delay(100);
  servo3.write(0);
  delay(100);
  
  
}

void loop() {
 
  
  // move 1
  for (int i = 0; i < fib[0]; i++) {
    servo1.write(90); // Move servo to 90 degrees
    delay(500); // Hold position for 500 ms
    servo1.write(0); // Move servo back to 0 degrees
    delay(500); // Hold position for 500 ms
  }
  delay(1000); // Delay before the next round
  
  // move 2
  for (int i = 0; i < fib[1]; i++) {
    servo2.write(90); // Move servo to 90 degrees
    delay(500); // Hold position for 500 ms
    servo2.write(0); // Move servo back to 0 degrees
    delay(500); // Hold position for 500 ms
  }
  delay(1000); // Delay before the next round
  
  // move 3
  for (int i = 0; i < fib[2]; i++) {
    servo3.write(90); // Move servo to 90 degrees
    delay(500); // Hold position for 500 ms
    servo3.write(0); // Move servo back to 0 degrees
    delay(500); // Hold position for 500 ms
  }
  delay(4000); // Delay before the next round
  

  // Update Fibonacci sequence
  fib[0] = fib[1];
  fib[1] = fib[2];
  int next = fib[0] + fib[1];
  fib[2] = next;

  // Reset at 21
  if (fib[2] == 21) {
    fib[0] = 1;
    fib[1] = 1;
    fib[2] = 2;
  }

  Serial.print(next);
  //Serial.print(fib[1]);
  //Serial.print(fib[2]);
}
