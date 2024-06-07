// C++ code
//
const int led1 = 2;
const int led2 = 3;
const int led3=  4;
 // Fibonacci sequence
  int fib[3] = {1, 1, 2};

// Function to blink an LED
void blinkLED(int ledPin, int numBlinks) {
  for (int i = 0; i < numBlinks; i++) {
    digitalWrite(ledPin, HIGH);
    delay(500); // LED on for 500 ms
    digitalWrite(ledPin, LOW);
    delay(500); // LED off for 500 ms
  }
}

void setup()
{
  
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  Serial.begin(9600);
  
}

void loop()
{
  
  // 
  blinkLED(led1, fib[0]);
  blinkLED(led2, fib[1]);
  blinkLED(led3, fib[2]);
  
  delay(3000); // Delay before the next round

  // Update Fibonacci sequence
   
    // gpt gave wrong order
    fib[0] = fib[1];
    fib[1] = fib[2];
    int next = fib[0] + fib[1];
    fib[2] = next;
  // reset at 13
  if (fib[2]==34) {
    fib[0] = 1;
    fib[1] =1;
    fib[2] =2;
    
  }
  
  
 
  Serial.print(next);
  //Serial.print(fib[1]);
  //Serial.print(fib[2]);
}
