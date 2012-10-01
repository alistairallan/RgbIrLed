/*
  RGBled.cpp - IR RGB Led Library.
  Created by Alistair Allan, September 24, 2012.
  Released into the public domain.
*/

// include core Wiring API
#include "Arduino.h"
#include "RgbIrLed.h"

RgbIrLed::RgbIrLed(int type)
{
 //TYPE 0 = APA1616 24 Button Remote
 if(type==0)
 {
   Brighter = 0xF700FF;
   Darker = 0xF7807F;
   Off = 0xF740BF;
   On = 0xF7C03F;
   Red = 0xF720DF;
   Green = 0xF7A05F;
   Blue = 0xF7609F;
   White = 0xF7E01F;
   Flash = 0xF7D02F;
   Strobe = 0xF7F00F;
   Fade = 0xF7C837;
   Smooth = 0xF7E817;
   BR1 = 0xF710EF;
   BR2 = 0xF730CF;
   BR3 = 0xF708F7;
   BR4 = 0xF728D7;

   BG1 = 0xF7906F;
   BG2 = 0xF7B04F;
   BG3 = 0xF78877;
   BG4 = 0xF7A857;

   BB1 = 0xF750AF;
   BB2 = 0xF7708F;
   BB3 = 0xF748B7;
   BB4 = 0xF76897;
}

//TYPE 0 = LED618 24 Button Remote
 if(type==1)
 {
   Brighter = 0xFFA05F;
   Darker = 0xFF20DF;
   Off = 0xFF609F;
   On = 0xFFE01F;
   Red = 0xFF906F;
   Green = 0xFF10EF;
   Blue = 0xFF50AF;
   White = 0xFFD02F;
   Flash = 0xFFF00F;
   Strobe = 0xFFE817;
   Fade = 0xFFD827;
   Smooth = 0xFFC837;
   BR1 = 0xFFB04F;
   BR2 = 0xFFA857;
   BR3 = 0xFF9867;
   BR4 = 0xFF8877;

   BG1 = 0xFF30CF;
   BG2 = 0xFF28D7;
   BG3 = 0xFF18E7;
   BG4 = 0xFF08F7;

   BB1 = 0xFF708F;
   BB2 = 0xFF6897;
   BB3 = 0xFF58A7;
   BB4 = 0xFF48B7;
}


}



