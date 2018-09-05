const int num = 6;
const int kpinleds[num]={2,3,4,5,6,7};
void setup() {
  for(int k=0;k<num;k++)
  {
    pinMode(kpinleds[k],OUTPUT);
  }
  pinMode(10,INPUT);
  pinMode(10,HIGH);
}

void loop() {
if (digitalRead(10)==LOW)
{
   for(int i=0;i<num;i++)
  {
    digitalWrite(kpinleds[i],LOW);
    delay(100);
    digitalWrite(kpinleds[i],HIGH);
  }
  for(int x=num-1;x>=0;x--)
  {
    digitalWrite(kpinleds[x],LOW);
    delay(100);
    digitalWrite(kpinleds[x],HIGH);
  }
}
else
{
  for(int i=0;i<num;i++)
  {
    digitalWrite(kpinleds[i],HIGH);
    delay(100);
    digitalWrite(kpinleds[i],LOW);
  }
  for(int x=num-1;x>=0;x--)
  {
    digitalWrite(kpinleds[x],LOW);
    delay(100);
    digitalWrite(kpinleds[x],HIGH);
  }
}

}
