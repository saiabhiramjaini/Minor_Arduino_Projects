void setup()
{
  pinMode(2, OUTPUT);
  pinMode(3,INPUT);
}
void loop()
{
  int x=digitalRead(3);
  if(x==1)
  {
  digitalWrite(2, LOW);
  }
  else
  {
  digitalWrite(2, HIGH);
  }
  }
