// LunaSat Solar Panel Voltage/Power/Energy
// Note: P8 Jumper must be connected.

void setup() {
  // put your setup code here, to run once:
  // Initialize serial communication at 9600 bits per second:
  Serial.begin(9600);

}

void loop() {
  // Keep track of time passed:
  long int t = millis();
  
  // put your main code here, to run repeatedly:
  int solarCellReading = analogRead(A1);

  // Convert the analog reading (which goes from 0 - 1023) to a voltage (0 - 3.3v):
  float voltage = solarCellReading * (3.3 / 1023.0);

  // Calculating power (mW) based off of a current of 0.0446 A:
  float power = voltage * 0.0446;

  // Calculate Energy (J) as time goes on:
  //float energy = power * t;

  // Print out the values you read:
  Serial.print(voltage, 5);
  Serial.print(" ");
  Serial.println(power, 5);
  //Serial.print(" ");
  //Serial.println(energy);
}
