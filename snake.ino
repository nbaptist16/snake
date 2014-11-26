/*
SNAKE.pde
 
 Example file using the The Meggy Jr Simplified Library (MJSL)
  from the Meggy Jr RGB library for Arduino
   
 Blink a damned LED.
   
   
 
 Version 1.25 - 12/2/2008
 Copyright (c) 2008 Windell H. Oskay.  All right reserved.
 http://www.evilmadscientist.com/
 
 This library is free software: you can redistribute it and/or modify
 it under the terms of the GNU General Public License as published by
 the Free Software Foundation, either version 3 of the License, or
 (at your option) any later version.
 
 This library is distributed in the hope that it will be useful,
 but WITHOUT ANY WARRANTY; without even the implied warranty of
 MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 GNU General Public License for more details.
 
 You should have received a copy of the GNU General Public License
 along with this library.  If not, see <http://www.gnu.org/licenses/>.
 	  
 */

 
 
 
 

/*
 * Adapted from "Blink,"  The basic Arduino example.  
 * http://www.arduino.cc/en/Tutorial/Blink
 */

#include <MeggyJrSimple.h>    // Required code, line 1 of 2.

// Global variables go here...
struct Point
{
  int x;
  int y;
};
int xapp = random(8);
int yapp = random(8);
boolean gotApple = false; 
int direction = 0


void setup()                    // run once, when the sketch starts
{
  MeggyJrSimpleSetup();      // Required code, line 2 of 2.
}

void loop()                     // run over and over again
{ 
  DrawPx(xapp,yapp,Red);
  DisplaySlate();
  delay(75);
  ClearSlate();
  
  if (xapple == xsnake)
    if (yapple == ysnake)
      gotApple = true;

  
    
  // left and right
  CheckButtonsDown();
  if(Button_Right)
     direction = 90

   
 
   CheckButtonsDown();
   if (Button_Left)
     direction = 270
   // end
   
   
   // up and down
   CheckButtonsDown();
  if(Button_Up)
    direction = 0
   
  
   
   CheckButtonsDown();
   if (Button_Down)
     direction = 180
   // end
