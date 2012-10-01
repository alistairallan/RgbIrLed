#include <IRremote.h>
/*https://github.com/shirriff/Arduino-IRremote*/
#include <RgbIrLed.h>

IRsend irsend;

//Type 0 is IR remote APA1616 24 Button Remote
RgbIrLed rgbled(0);

void setup() {   
  
  Serial.begin(9600);
}

void loop()
{
 
  for(int x=1; x<5; x++)
  {
    strobe(rgbled.Red,250);
  }
  
  for(int x=1; x<5; x++)
  {
    strobe(rgbled.Green,250);
  }
  
  for(int x=1; x<5; x++)
  {
    strobe(rgbled.Blue,250);
  }
  
  for(int x=1; x<5; x++)
  {
     //Make sure the RGB Led is turned on
     pingpong(rgbled.Red);
  }
  
  
}


//Strobe a single colour
void strobe(unsigned long color, int duration)
{
  irsend.sendNEC(rgbled.Off, 32);
  delay(duration-50);
  irsend.sendNEC(rgbled.On, 32);
  delay(50);
  irsend.sendNEC(color, 32);
  delay(duration-50);
  irsend.sendNEC(rgbled.Off, 32);
  delay(50);
}

//Fade out and in of a single colour
void pingpong(unsigned long color)
{
  //some incosistent performance 
   irsend.sendNEC(rgbled.On, 32);
   delay(50);
   irsend.sendNEC(color, 32);
   delay(50);
   for(int x=0; x<8; x++)
  { 
  irsend.sendNEC(rgbled.Darker, 32);
  delay(200);
  }
   for(int x=0; x<8; x++)
  { 
  irsend.sendNEC(rgbled.Brighter, 32);
  delay(200);
  }
  
}