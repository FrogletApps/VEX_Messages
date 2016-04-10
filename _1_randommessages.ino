void randommessages(){
  int digitalVal = digitalRead(tiltSwitch);  //check what the tiltSwitch is doing and store it in digitalVal
  if(digitalVal != remember){                //if digtialVal isn't the same as the last value
    messageNumber = random(randomMsgMax);       //then generate a new random number
    tone(buzzer, random(randomToneMin, randomToneMax), 100); //play a tone between min and max frequencies
  }
  if(digitalVal == HIGH){
    digitalWrite(ledPin,HIGH);     //turn the Arduino's built in LED on
    remember = HIGH;
  }
  else{
    digitalWrite(ledPin,LOW);    //turn the Arduino's built in LED off
    remember = LOW;
  }
    switch(messageNumber){        //find a message related to the random number
      case 0:
        lcd.print("Team ROUSE 8171");  //first line
        lcd.setCursor(0,1);            //move cursor to second line
        lcd.print("VEX Robotics");     //second line
      break;
      case 1:
        lcd.print("Bleep");
        lcd.setCursor(0,1);
        lcd.print("Bloop");
      break;
      case 2:
        lcd.print("Best Team");
        lcd.setCursor(0,1);
        lcd.print("EEEVERRRRR!!!1!");
      break;
      case 3:
        lcd.print("** sigh **");
        lcd.setCursor(0,1);
        lcd.print("");
      break;
      case 4:
        lcd.print("Wow, those ");
        lcd.setCursor(0,1);
        lcd.print("judges are cool");
      break;
      case 5:
        lcd.print("Why do I even");
        lcd.setCursor(0,1);
        lcd.print("feel pain?");
      break;
      case 6:
        lcd.print("I'm a");
        lcd.setCursor(0,1);
        lcd.print("robot ninja");
      break;
      case 7:
        lcd.print("Wubba Lubba");
        lcd.setCursor(0,1);
        lcd.print("Dub DUB!");
      break;
      case 8:
        lcd.print("Who's a badass");
        lcd.setCursor(0,1);
        lcd.print("Arduino?   I am!");
      break;
      case 9:
        lcd.print("I must protect");
        lcd.setCursor(0,1);
        lcd.print("the humans");
      break; 
      case 10:
        lcd.print("I wanna go to");
        lcd.setCursor(0,1);
        lcd.print("space, SPAAACEE!");
      break;
      case 11:
        lcd.print("This will all");
        lcd.setCursor(0,1);
        lcd.print("end in tears...");
      break;
      case 12:
        lcd.print("Target");
        lcd.setCursor(0,1);
        lcd.print("acquired");
      break;
      case 13:
        lcd.print("The cake");
        lcd.setCursor(0,1);
        lcd.print("is a lie");
      break;
      case 14:
        lcd.print("This sentence");
        lcd.setCursor(0,1);
        lcd.print("is false");
      break;
      case 15:
        lcd.print("Type witty");
        lcd.setCursor(0,1);
        lcd.print("comment here");
      break; 
      case 16:
        lcd.print("I miss the");
        lcd.setCursor(0,1);
        lcd.print("bucky balls");
      break; 
      case 17:
        lcd.print("#vexbanter");
        lcd.setCursor(0,1);
        lcd.print("");
      break; 
      case 18:
        lcd.print("You lost");
        lcd.setCursor(0,1);
        lcd.print("the game");
      break; 
      case 19:
        lcd.print("COMBUSTIBLE");
        lcd.setCursor(0,1);
        lcd.print("LEMONS!");
      break; 
      case 20:
        lcd.print("Turn it off");
        lcd.setCursor(0,1);
        lcd.print("and on again?");
      break; 
      case 21:
        lcd.print("0100111011001101");
        lcd.setCursor(0,1);
        lcd.print("1021100010011100");
      break; 
      case 22:
        lcd.print("I think it needs");
        lcd.setCursor(0,1);
        lcd.print("more cable ties");
      break; 
      case 23:
        lcd.print("All the diodes");
        lcd.setCursor(0,1);
        lcd.print("on my left hurt");
      break; 
      case 24:
        lcd.print("Lacking emotions");
        lcd.setCursor(0,1);
        lcd.print("makes me sad");
      break; 
      //if the number does not match any of the above then error
      default:
        lcd.print("Error :(");
        lcd.setCursor(0,1);
        lcd.print("Message:");
        lcd.setCursor(8,1);
        lcd.print(messageNumber);
      break;
    }  

delay(250);  //a short delay to prevent the screen constantly changing
lcd.clear(); //clear the screen
}
