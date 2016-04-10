//created from http://sebastianwolff.info/blog/2008/12/still-alive-sheet-music/
//note frequencies from http://www.phy.mtu.edu/~suits/notefreqs.html

void stillalive(){
  //note lengths
  const int q = 150;  //quaver
  const int c = 300;  //crotchet
  const int notebreak = 50;  //break at the end of a note
  const int qb = q+notebreak; //quaver break
  const int cb = c+notebreak; //crotchet break
  
  lcd.print("Still Alive");  //first line
  lcd.setCursor(0,1);            //move cursor to second line
  lcd.print("Jonathan Coulton");     //second line
  delay(2000);
  lcd.clear();
  
    //line 1
  //bar 1
  playNote(g5,q);
  delay(qb);          //delay must be as long as the previous note and then the delay you want
  playNote(fs5,q);
  delay(qb);
  playNote(e5,q);
  delay(qb);
  playNote(e5,q);
  delay(qb);
  
  //bar 2
  playNote(fs5,c);
  delay(cb);
  
  delay(c*3);      //three crotchet rest
  
  //bar 3
  delay(q*3);
  playNote(a4,q);
  delay(qb);
  playNote(g5,q);
  delay(qb);
  playNote(fs5,q);
  delay(qb);
  playNote(e5,q);
  delay(qb);
  playNote(e5,q);
  delay(qb);
  
  //bar 4
  playNote(fs5,c+q);
  delay(c+q+notebreak);
  playNote(d5,c);
  delay(cb);
  playNote(e5,q);
  delay(qb);
  
  //line 2
  //bar 1
  playNote(a4,q*8);
  delay(q*8+notebreak);
  playNote(a4,q);
  delay(qb);
  
  //bar2
  
  //end of tune
  lcd.print("This isn't");
  lcd.setCursor(0,1);
  lcd.print("finished :(");
  delay(2000);
  lcd.clear();
}
