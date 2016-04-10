//created from http://www.8notes.com/scores/10147.asp
//note frequencies from http://www.phy.mtu.edu/~suits/notefreqs.html

void godsavethequeen(){
  //note lengths
  const int q = 300;  //quaver
  const int c = 600;  //crotchet
  const int qb = q+notebreak; //quaver break
  const int cb = c+notebreak; //crotchet break
  
  //line 1
  //bar 1
  lcd.print("God save our");
  lcd.setCursor(0,1);
  lcd.print("gracious Queen");
  playNote(g5,c);
  playNote(g5,c);
  playNote(a5,c);
  
  //bar 2
  playNote(fs5,c+q);
  playNote(g5,q);
  playNote(a5,c);
  lcd.clear();
  
  //bar 3
  lcd.print("Long live our");
  lcd.setCursor(0,1);
  lcd.print("noble Queen");
  playNote(b5,c);
  playNote(b5,c);
  playNote(c6,c);
  
  //bar 4
  playNote(b5,c+q);
  playNote(a5,q);
  playNote(g5,c);
  lcd.clear();
  
  //bar 5
  lcd.print("God save the");
  lcd.setCursor(0,1);
  lcd.print("Queen!");
  playNote(a5,c);
  playNote(g5,c);
  playNote(fs5,c);
  
  //bar 6
  playNote(g5,c);
  playNote(g5,q);
  playNote(a5,q);
  playNote(b5,q);
  playNote(c6,q);
  lcd.clear();
  
  //line 2
  //bar 1
  lcd.print("Send her");
  lcd.setCursor(0,1);
  lcd.print("victorious");
  playNote(d6,c);
  playNote(d6,c);
  playNote(d6,c);
  
  //bar 2
  playNote(d6,c+q);
  playNote(c6,q);
  playNote(b5,c);
  lcd.clear();
  
  //bar 3
  lcd.print("Happy and");
  lcd.setCursor(0,1);
  lcd.print("glorious");
  playNote(c6,c);
  playNote(c6,c);
  playNote(c6,c);

  //bar 4
  playNote(c6,c+q);
  playNote(b5,q);
  playNote(a5,c);
  lcd.clear();
  
  //line 3
  //bar 1
  lcd.print("Long to reign");
  lcd.setCursor(0,1);
  lcd.print("over us");
  playNote(b5,c);
  playNote(c6,q);
  playNote(b5,q);
  playNote(a5,q);
  playNote(g5,q);
  
  //bar 2
  playNote(b5,c+q);
  playNote(c6,q);
  playNote(d6,c);
  lcd.clear();
  
  //bar 3
  lcd.print("God save the");
  lcd.setCursor(0,1);
  lcd.print("Queeeeeeeeeeeen!");
  playNote(e6,q);
  playNote(c6,q);
  playNote(b5,c);
  playNote(a5,c);
  
  //bar 4
  playNote(g5,(c*3));
  lcd.clear();
  
  //end of tune
  lcd.print("QEII 4eva");
  lcd.setCursor(0,1);
  lcd.print("UK IS BEST!!!");
  delay(1000);
  lcd.clear();
}



