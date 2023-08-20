// C++ code
//
void setup()
{
  pinMode(6,INPUT); 
  pinMode(7,OUTPUT); 
 }

void loop()
{
  int x = digitalRead(6);
  
  if (x==0)
  {
    digitalWrite(7, LOW);
  }
  else
  {
     digitalWrite(7, HIGH);
   }
}
