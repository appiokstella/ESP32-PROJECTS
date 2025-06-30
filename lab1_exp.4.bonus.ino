const int potPin = 2; 

int potValue;
float voltage = 0;
float percentage = 0;

void setup() {
  Serial.begin(115200);
}

void loop() {
  potValue = analogRead(potPin);
  voltage = (3.3 / 4095.0) * potValue;
  percentage = (potValue / 4095.0) * 100;

  Serial.print("Potentiometer Value: ");
  Serial.print(potValue);
  Serial.print("  |  ");

  Serial.print("Voltage: ");
  Serial.print(voltage, 2);  
  Serial.print(" V  |  ");
  
  Serial.print("Percentage: ");
  Serial.print(percentage, 1);  
  Serial.println(" %");

  delay(50);
}
