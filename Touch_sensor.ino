int touch_inp = 6;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600); 
  pinMode(touch_inp, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
 int Status = digitalRead (touch_inp);
  Serial.println(Status);
  delay(200);
}
