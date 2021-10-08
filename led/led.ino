#define led1 D1
#define led2 D0


void setup() {
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);

}

void loop() {
 digitalWrite(led1, HIGH);
 digitalWrite(led2, LOW);
 delay(1000);
 digitalWrite(led2, HIGH);
 digitalWrite(led1, LOW);
 delay(1000); 
 
 
 
 
 
 
 
}
