//created from http://sebastianwolff.info/blog/2011/04/portal-2-want-you-gone/
//note frequencies from http://www.phy.mtu.edu/~suits/notefreqs.html

void wantyougone(){
  //note lengths
  const int q = 225;  //quaver - have to change these values in chorus too
  const int c = 450;  //crotchet
  const int qb = q+notebreak; //quaver break
  const int cb = c+notebreak; //crotchet break

  delay(1000);

  //add in bass?
 
  //page 1
  //line 1
  //bar 3
  lcd.print("Well, here we");
  lcd.setCursor(0,1);
  lcd.print("are again");
  playNote(e5,q);
  playNote(a5,q);
  playNote(b5,q);
  playNote(cs6,q+(q/2));
  playNote(d6,(q/2));
  playNote(cs6,q);
  lcd.clear();
  
  //bar 4
  lcd.print("It's always such");
  lcd.setCursor(0,1);
  lcd.print("a pleasure");
  delay(qb);
  playNote(a5,q);
  playNote(a5,q);
  playNote(e5,q);
  playNote(b5,q);
  playNote(a5,q);
  playNote(gs5,q);
  playNote(a5,q);
  lcd.clear();
  
  //line 2
  //bar 1
  lcd.print("Remember when");
  lcd.setCursor(0,1);
  lcd.print("you tried to");
  delay((1.5*q)+notebreak);
  playNote(e5,q/2);
  playNote(a5,q);
  playNote(b5,q);
  playNote(cs5,q);
  playNote(d5,q);
  playNote(cs5,q);
  playNote(b5,q);
  lcd.clear();
  
  //bar 2
  lcd.print("kill me twice?");
  playNote(a5,c);
  playNote(b5,q);
  playNote(gs5,q+c);
  delay(cb);
  lcd.clear();
  
  //bar 3
  lcd.print("Oh how we");
  lcd.setCursor(0,1);
  lcd.print("laughed");
  delay(qb);
  playNote(e5,q);
  playNote(a5,q);
  playNote(b5,q);
  playNote(cs6,q+(q/2));
  lcd.clear();
  lcd.print("and laughed");
  playNote(d6,(q/2));
  playNote(cs6,c);
  lcd.clear();
  
  //line 3
  //bar 1
  lcd.print("Except I wasn't");
  lcd.setCursor(0,1);
  lcd.print("laughing");
  delay(qb);
  playNote(a5,q);
  playNote(a5,q);
  playNote(e5,q);
  playNote(b5,q);
  playNote(a5,q);
  playNote(gs5,q); 
  playNote(a5,q);
  lcd.clear();
  
  //bar 2
  lcd.print("Under the");
  lcd.setCursor(0,1);
  lcd.print("circumstances");
  delay(qb);
  playNote(e5,q);
  playNote(a5,q);
  playNote(b5,q);
  playNote(cs5,q);
  playNote(d5,q);
  playNote(cs5,q);
  playNote(b5,q);
  lcd.clear();
  
  //bar 3
  lcd.print("I've been");
  lcd.setCursor(0,1);
  lcd.print("shockingly nice");
  playNote(a5,c);
  playNote(fs6,c);
  playNote(f6,q);
  playNote(cs6,q);
  playNote(b5,q);
  playNote(as5,q+c);
  lcd.clear();
  
  //page 2
  //line 1
  //bar 1
  lcd.print("You want your");
  lcd.setCursor(0,1);
  lcd.print("freedom");
  delay(cb);
  playNote(as5,q);
  playNote(b5,q);
  playNote(cs6,q);
  playNote(cs6,c);
  
  //bar 2
  playNote(as5,c);
  lcd.clear();
  lcd.print("take it");
  playNote(gs6,c);
  playNote(fs6,c+q+c);
  lcd.clear();
  
  //bar 3
  lcd.print("That's what I'm");
  lcd.setCursor(0,1);
  lcd.print("counting on");
  delay(cb);
  playNote(b5,q);
  playNote(as5,q);
  playNote(fs5,q);
  playNote(b5,c);
  
  //line 2
  //bar 1
  playNote(as5,q);
  playNote(fs5,c*3);
  lcd.clear();
  
  //bar 2
  lcd.print("I used to want");
  lcd.setCursor(0,1);
  lcd.print("you dead but");
  delay((c*3)+notebreak);
  playNote(as5,q);
  playNote(b5,q);
  playNote(cs5,q);
  playNote(cs5,c);
  
  //bar 2
  playNote(as6,c);
  playNote(gs6,c);
  playNote(fs6,c);
 
  chorus();
 
  delay(c*6);
   
  //bar 3
  lcd.clear();
  lcd.print("She was a lot");
  lcd.setCursor(0,1);
  lcd.print("like you");
  delay(qb);
  playNote(e5,q);
  playNote(a5,q);
  playNote(b5,q);
  playNote(cs5,q);
  playNote(d5,q);
  playNote(cs5,c);
  lcd.clear();
  
  //page 3
  //line 1
  //bar 1
  lcd.print("(Maybe not");
  lcd.setCursor(0,1);
  lcd.print("quite as heavy)");
  delay((q*1.5)+notebreak);
  playNote(a5,q/2);
  playNote(a5,q);
  playNote(e5,q);
  playNote(b5,q);
  playNote(a5,q);
  playNote(gs5,q);
  playNote(a5,q);
  lcd.clear();
  
  //bar 2
  lcd.print("Now little");
  lcd.setCursor(0,1);
  lcd.print("Caroline is");
  delay(qb);
  playNote(e5,q);
  playNote(a5,q);
  playNote(b5,q);
  playNote(cs5,q);
  playNote(d5,q);
  playNote(cs5,q);
  playNote(b5,q);
  lcd.clear();
  
  //bar 3
  lcd.print("in here too");
  playNote(a5,c);
  playNote(b5,q);
  playNote(gs5,c);
  delay(cb);
  lcd.clear();
  
  //line 2
  //bar 1
  lcd.print("One day they");
  lcd.setCursor(0,1);
  lcd.print("woke me up");
  delay(qb);
  playNote(e5,q);
  playNote(a5,q);
  playNote(b5,q);
  playNote(cs6,q+(q/2));
  playNote(d6,(q/2));
  playNote(cs6,q);
  lcd.clear();
  
  //bar 2
  lcd.print("So I could");
  lcd.setCursor(0,1);
  lcd.print("live forever");
  delay(qb);
  playNote(a5,q);
  playNote(a5,q);
  playNote(e5,q);
  playNote(b5,q+(q/2));
  playNote(a5,(q/2));
  playNote(gs5,q);
  playNote(a5,q);
  lcd.clear();
  
  //bar 3
  lcd.print("It's such a");
  lcd.setCursor(0,1);
  lcd.print("shame the same");
  delay(qb);
  playNote(e5,q);
  playNote(a5,q);
  playNote(b5,q);
  playNote(cs5,q);
  playNote(d5,q);
  playNote(cs5,q);
  lcd.clear();
  lcd.print("will never");
  lcd.setCursor(0,1);
  lcd.print("happen to you");
  playNote(b5,q);
  
  //line 3
  //bar 1
  playNote(a5,c);
  playNote(fs6,c);
  playNote(f6,q);
  playNote(cs6,q);
  playNote(b5,q);
  playNote(as5,q+c);
  lcd.clear();
  
  //bar 2
  lcd.print("You've got your");
  lcd.setCursor(0,1);
  lcd.print("short");
  delay(cb);
  playNote(as5,q);
  playNote(b5,q);
  playNote(cs6,q);
  playNote(cs6,c);
  lcd.clear();
  
  //bar 3
  lcd.print("sad life left");
  playNote(as5,c);
  playNote(gs6,c);
  playNote(fs6,c+q+c);
  lcd.clear();
  
  //page 4
  //line 1
  //bar 1      //the next two bars should technically be double notes
  lcd.print("That's what I'm");
  lcd.setCursor(0,1);
  lcd.print("counting on");
  delay(cb);
  playNote(b5,q);
  playNote(as5,q);
  playNote(fs5,q);
  playNote(b5,c);
  
  //bar 2
  playNote(as5,q);
  playNote(fs5,c*3);
  
  //bar 3
  delay((c*3)+notebreak);
  lcd.clear();
  lcd.print("I'll let you");
  lcd.setCursor(0,1);
  lcd.print("get right to it");
  playNote(as5,q);
  playNote(b5,q);
  playNote(cs5,q);
  playNote(cs5,c);
  
  //line 2
  //bar 1
  playNote(as6,c);
  playNote(gs6,c);
  playNote(fs6,c);
  
  chorus();
  
  delay((c*6)+notebreak);
  lcd.clear();
  
  //line 3
  //bar 1
  lcd.print("Well you have");
  lcd.setCursor(0,1);
  lcd.print("been replaced");
  delay(qb);
  playNote(e5,q);
  playNote(a5,q);
  playNote(b5,q);
  playNote(cs6,q+(q/2));
  playNote(d6,(q/2));
  playNote(cs6,q);
  lcd.clear();
  
  //bar 4
  lcd.print("I don't need");
  lcd.setCursor(0,1);
  lcd.print("anyone now");
  delay(qb);
  playNote(a5,q);
  playNote(a5,q);
  playNote(e5,q);
  playNote(b5,q+(q/2));
  playNote(a5,(q/2));
  playNote(gs5,q);
  playNote(a5,q);
  
  //line 2
  //bar 1
  delay((1.5*q)+notebreak);
  lcd.clear();
  lcd.print("When I delete");
  lcd.setCursor(0,1);
  lcd.print("you maybe");
  playNote(e5,q);
  playNote(a5,q);
  playNote(b5,q);
  playNote(cs5,q);
  playNote(d5,q);
  playNote(cs5,q);
  playNote(b5,q);
  lcd.clear();
  
  //bar 2
  lcd.print("I'll stop");
  lcd.setCursor(0,1);
  lcd.print("feeling so bad");
  playNote(a5,c);
  playNote(fs6,c);
  playNote(f6,q);
  playNote(cs6,q);
  playNote(b5,q);
  playNote(as5,q+c);
  lcd.clear();
  
  //bar 3
  lcd.print("Go make some");
  lcd.setCursor(0,1);
  lcd.print("new disaster");
  delay(cb);
  playNote(as5,q);
  playNote(b5,q);
  playNote(cs6,q);
  playNote(cs6,c);
  
  //line 3
  //bar 1
  playNote(as5,c);
  playNote(gs6,c);
  playNote(fs6,c+q+c);
  lcd.clear();
  
  //bar 2
  lcd.print("That's what I'm");
  lcd.setCursor(0,1);
  lcd.print("counting on");
  delay(cb);
  playNote(b5,q);
  playNote(as5,q);
  playNote(fs5,q);
  playNote(b5,c);
  
  //bar 3
  playNote(as5,q);
  playNote(fs5,c*3);
  
  //page 6
  //line 1
  //bar 1
  delay((c*3)+notebreak);
  lcd.clear();
  lcd.print("You're someone");
  lcd.setCursor(0,1);
  lcd.print("else's problem");
  playNote(as5,q);
  playNote(b5,q);
  playNote(cs5,q);
  playNote(cs5,c);
  
  //bar 2
  playNote(as6,c);
  playNote(gs6,c);
  playNote(fs6,c);
  lcd.clear();

  chorus();
  delay(c+q+notebreak);
  chorus();
  delay(c+q+notebreak);
  lcd.clear();
  
  lcd.print("now I only want");
  lcd.setCursor(0,1);
  lcd.print("you gone...");
  playNote(fs6,c);
  
  //bar 2
  playNote(fs6,q);
  playNote(fs6,q);
  playNote(e6,q);
  playNote(e6,c);
  playNote(d6,q);
  playNote(cs6,q+c+c);
  lcd.clear();
  
  //end of tune
  lcd.print("Portal 3 plz");
  lcd.setCursor(0,1);
  lcd.print("Valve <3");
  delay(1000);
  lcd.clear(); 
}

void chorus(){
  const int q = 225;  //quaver
  const int c = 450;  //crotchet
  
  lcd.clear();
  lcd.print("now I only want");
  lcd.setCursor(0,1);
  lcd.print("you gone");
  playNote(fs6,c); 
  playNote(fs6,q);
  playNote(fs6,q);
  playNote(e6,q);
  playNote(e6,c);
  playNote(d6,q);
  playNote(cs6,c);
  playNote(b5,q/2);
  playNote(a5,(q/2)+c);
}

