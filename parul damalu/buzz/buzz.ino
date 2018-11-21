int buzz=4,i;
void setup() {
 pinMode(buzz,OUTPUT);
 
}

void loop() 
{
 for(i=0;i<10;i++)
 {
tone(buzz,100*i,100);
delay(200);
 }
 for(i=9;i>=0;i--)
 {
tone(buzz,100*i,100);
delay(200);
 }
}
