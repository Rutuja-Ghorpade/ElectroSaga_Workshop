int buzzer = 3;
int sensor = A0;

void setup()
{
  Serial.begin(9600);
  pinMode(3,OUTPUT);
}

void loop()
{
  int sensor_value = analogRead(A0);
  Serial.print("sensor value : ");
  Serial.println(sensor_value);

  if (sensor_value > 500)
  {
    digitalWrite(3,HIGH);
  }
  else
  {
    digitalWrite(3,LOW);
  }
}