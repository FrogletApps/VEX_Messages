#include <Wire.h> 
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27,16,2);  // set the LCD address to 0x27 for a 16 chars and 2 line display

int programNumber = 0;       //choose which program to run - change this when debugging

int remember = 0;            //check to see if the button has changed
int messageNumber = 0;       //set to start on startup message
int tiltCount = 0;           //count number of tilts

int counttimer = 40;

const int ledPin = 13;       //the pin the LED is attached to
const int tiltSwitch = 10;   //the pin the tilt switch is attached to
const int buzzer = 2;        //the pin the buzzer is attached to

const int randomMsgMax = 25;    //number of messages + 1
const int randomToneMin = 150;  //minimum frequency for random tone
const int randomToneMax = 5001; //maximum frequency for random tone

//note frequencies
const int a4 = 440;
const int b4 = 493.88;
const int cs5 = 570;
//cs5 is very slightly out of tune, but actual note does not work correctly with buzzer
const int d5 = 587.33;
const int e5 = 659.25;s
const int fs5 = 740;
const int g5 = 784;
const int gs5 = 830.61;
//a5 and as5 are out of tune, actual note does not work correctly with buzzer
const int a5 = 885;
const int as5 = 920;
const int b5 = 987.77;
const int c6 = 1046.5;
const int cs6 = 1107.73;
const int d6 = 1174.66;
const int e6 = 1318.51;
const int f6 = 1396.91;
const int fs6 = 1479.98;
const int gs6 = 1661.22;
const int as6 = 1864.66;
const int notebreak = 50;

void playNote(int note, int time){
  tone(buzzer, note, time);
  delay(time+notebreak);
}

void setup()
{
  randomSeed(analogRead(0));
  pinMode(ledPin,OUTPUT);          //initialize the ledPin as an output
  pinMode(tiltSwitch,INPUT);       //initialize the tiltSwitch as an input
  digitalWrite(tiltSwitch, HIGH);  //set initial value of the tilt switch
  lcd.init();                      //initialize the lcd 

  lcd.backlight();               //turn on the LCD backlight
  lcd.print("Team ROUSE 8171");  //first line
  lcd.setCursor(0,1);            //move cursor to second line
  lcd.print("VEX Robotics");     //second line
  delay(2000);
  lcd.clear();
}

void loop() {  
  
  switch(programNumber){        //find the program to run
  case 0:
  {      
        counttimer--;    //decrease count timer from 40
        int digitalVal = digitalRead(tiltSwitch);  //check what the tiltSwitch is doing and store it in digitalVal
        if(digitalVal != remember){                //if digtialVal isn't the same as the last value
          tiltCount++;
        }
        if(digitalVal == HIGH){
          digitalWrite(ledPin,HIGH);     //turn the Arduino's built in LED on
          remember = HIGH;
          lcd.print("Tilt Count = ");
          lcd.setCursor(13,0);        //print value of tiltCount after message
          lcd.print(tiltCount);
        }
        else{
          digitalWrite(ledPin,LOW);    //turn the Arduino's built in LED off
          remember = LOW;
          lcd.print("Tilt Count = ");
          lcd.setCursor(13,0);        //print value of tiltCount after message
          lcd.print(tiltCount);
        }
        lcd.setCursor(0,1);
        lcd.print("Time = ");
        lcd.setCursor(7,1);
        lcd.print(counttimer/4);  //show number of seconds
        lcd.setCursor(12,1);
        lcd.print("P");
        if (tiltCount>=6){
            lcd.print("3");
        }
        else if (tiltCount>=2){
            lcd.print("2");
        }
         else if (tiltCount>=0){
            lcd.print("1");
          }
        delay(250);
        lcd.clear();
        if (counttimer == 0){
          tone(buzzer, b4, 100);        //quickly bleep buzzer to show the Arduino has selected program
          if (tiltCount>=6){
            lcd.print("Want You Gone");
            lcd.setCursor(0,1);
            lcd.print("Jonathan Coulton");
            programNumber = 3;
          }
          else if (tiltCount>=2){
            lcd.print("GodSaveTheQueen");
            lcd.setCursor(0,1);
            lcd.print("National Anthem"); 
            programNumber = 2;
          }
          else if (tiltCount>=0){
            lcd.print("Random Messages");
            programNumber = 1;
          }
         delay(1000);
         lcd.clear();
        }
  }
  break;
  case 1:
          randommessages();
    break;
  case 2:
          godsavethequeen(); 
    break;
  case 3:
          wantyougone(); 
    break;
  default:
    lcd.print("Error :(");
    lcd.setCursor(0,1);
    lcd.print("Program:");
    lcd.setCursor(8,1);
    lcd.print(programNumber);
    break;
  }
}




