#include <LiquidCrystal.h>
#define RS 7 //PINS RS (4) De la lcd
#define EN 6 //PINS EN (6) De la lcd
#define D4 5 //PINS DB4 (11) De la lcd
#define D5 4 //PINS DB5 (12) De la lcd
#define D6 3 //PINS DB6 (13) De la lcd
#define D7 2 //PINS DB7 (14) De la lcd
LiquidCrystal lcd(RS,EN,D4,D5,D6,D7);
//hola= ....---.-...-
int buz=8;
int led=9;
void setup() {
  pinMode(buz,OUTPUT);
  pinMode(led,OUTPUT);
lcd.begin(16,2);//Inicial lcd(No.columnas, NO.filas);
lcd.clear();
Serial.begin(9600);

}
void loop() {
lcd.setCursor(15,0);
for(int c=15;c>=0;c++){
//if(Serial.available()>0){
  String a=Serial.readString();
 lcd.clear();

 lcd.setCursor(0,1);
  lcd.print(a);
  lcd.home();
  for(int x=0;x<a.length();x++){
    if(a.charAt(x)=='a'){      
      lcd.print(".-");  
      digitalWrite(buz,HIGH);
    digitalWrite(led,HIGH);
      delay(200);
    digitalWrite(buz,LOW);
    digitalWrite(led,LOW);
    delay(500);

  digitalWrite(buz,HIGH);
      digitalWrite(led,HIGH);
      delay(700);
    digitalWrite(buz,LOW);
    digitalWrite(led,LOW);
    delay(500);

    
    }
   else if(a.charAt(x)=='b'){
      lcd.print("-...");
//Guion
        digitalWrite(buz,HIGH);
      digitalWrite(led,HIGH);
      delay(700);
    digitalWrite(buz,LOW);
    digitalWrite(led,LOW);
    delay(500);
//punto
digitalWrite(buz,HIGH);
    digitalWrite(led,HIGH);
      delay(200);
    digitalWrite(buz,LOW);
    digitalWrite(led,LOW);
    delay(500);
 
//punto
digitalWrite(buz,HIGH);
    digitalWrite(led,HIGH);
      delay(200);
    digitalWrite(buz,LOW);
    digitalWrite(led,LOW);
    delay(500);

//punto
digitalWrite(buz,HIGH);
    digitalWrite(led,HIGH);
      delay(200);
    digitalWrite(buz,LOW);
    digitalWrite(led,LOW);
    delay(500);

    }
   else if(a.charAt(x)=='c'){
      lcd.print("-.-.");
//Guion
digitalWrite(buz,HIGH);
      digitalWrite(led,HIGH);
      delay(700);
    digitalWrite(buz,LOW);
    digitalWrite(led,LOW);
    delay(500);

//punto
digitalWrite(buz,HIGH);
    digitalWrite(led,HIGH);
      delay(200);
    digitalWrite(buz,LOW);
    digitalWrite(led,LOW);
    delay(500);

//Guion
digitalWrite(buz,HIGH);
      digitalWrite(led,HIGH);
      delay(700);
    digitalWrite(buz,LOW);
    digitalWrite(led,LOW);
    delay(500);

//punto
digitalWrite(buz,HIGH);
    digitalWrite(led,HIGH);
      delay(200);
    digitalWrite(buz,LOW);
    digitalWrite(led,LOW);
    delay(500);

    }
    else if(a.charAt(x)=='d'){
      lcd.print("-..");
      //Guion
      digitalWrite(buz,HIGH);
      digitalWrite(led,HIGH);
      delay(700);
    digitalWrite(buz,LOW);
    digitalWrite(led,LOW);
    delay(500);

      //punto
      digitalWrite(buz,HIGH);
    digitalWrite(led,HIGH);
      delay(200);
    digitalWrite(buz,LOW);
    digitalWrite(led,LOW);
    delay(500);

      //punto
digitalWrite(buz,HIGH);
    digitalWrite(led,HIGH);
      delay(200);
    digitalWrite(buz,LOW);
    digitalWrite(led,LOW);
    delay(500);

    }
    else if(a.charAt(x)=='e'){
      lcd.print(".");
      //punto
      digitalWrite(buz,HIGH);
    digitalWrite(led,HIGH);
      delay(200);
    digitalWrite(buz,LOW);
    digitalWrite(led,LOW);
    delay(500);

    }
    else if(a.charAt(x)=='f'){
      lcd.print("..-.");
//punto
digitalWrite(buz,HIGH);
    digitalWrite(led,HIGH);
      delay(200);
    digitalWrite(buz,LOW);
    digitalWrite(led,LOW);
    delay(500);

//punto
digitalWrite(buz,HIGH);
    digitalWrite(led,HIGH);
      delay(200);
    digitalWrite(buz,LOW);
    digitalWrite(led,LOW);
    delay(500);

//guion
digitalWrite(buz,HIGH);
      digitalWrite(led,HIGH);
      delay(700);
    digitalWrite(buz,LOW);
    digitalWrite(led,LOW);
    delay(500);

//punto
digitalWrite(buz,HIGH);
    digitalWrite(led,HIGH);
      delay(200);
    digitalWrite(buz,LOW);
    digitalWrite(led,LOW);
    delay(500);

    }
    else if(a.charAt(x)=='g'){
      lcd.print("--.");
//guion
digitalWrite(buz,HIGH);
      digitalWrite(led,HIGH);
      delay(700);
    digitalWrite(buz,LOW);
    digitalWrite(led,LOW);
    delay(500);

//guion
digitalWrite(buz,HIGH);
      digitalWrite(led,HIGH);
      delay(700);
    digitalWrite(buz,LOW);
    digitalWrite(led,LOW);
    delay(500);

//punto
digitalWrite(buz,HIGH);
    digitalWrite(led,HIGH);
      delay(200);
    digitalWrite(buz,LOW);
    digitalWrite(led,LOW);
    delay(500);
    
    }
    else if(a.charAt(x)=='h'){
      lcd.print("....");
//punto
digitalWrite(buz,HIGH);
    digitalWrite(led,HIGH);
      delay(200);
    digitalWrite(buz,LOW);
    digitalWrite(led,LOW);
    delay(500);

//punto
digitalWrite(buz,HIGH);
    digitalWrite(led,HIGH);
      delay(200);
    digitalWrite(buz,LOW);
    digitalWrite(led,LOW);
    delay(500);

//punto
digitalWrite(buz,HIGH);
    digitalWrite(led,HIGH);
      delay(200);
    digitalWrite(buz,LOW);
    digitalWrite(led,LOW);
    delay(500);

//punto
digitalWrite(buz,HIGH);
    digitalWrite(led,HIGH);
      delay(200);
    digitalWrite(buz,LOW);
    digitalWrite(led,LOW);
    delay(500);

    }
    else if(a.charAt(x)=='i'){
      lcd.print("..");
//punto
digitalWrite(buz,HIGH);
    digitalWrite(led,HIGH);
      delay(200);
    digitalWrite(buz,LOW);
    digitalWrite(led,LOW);
    delay(500);
//punto
digitalWrite(buz,HIGH);
    digitalWrite(led,HIGH);
      delay(200);
    digitalWrite(buz,LOW);
    digitalWrite(led,LOW);
    delay(500);

    }
    else if(a.charAt(x)=='j'){
      lcd.print(".---");
    //punto
    digitalWrite(buz,HIGH);
    digitalWrite(led,HIGH);
      delay(200);
    digitalWrite(buz,LOW);
    digitalWrite(led,LOW);
    delay(500);

    //guion
    digitalWrite(buz,HIGH);
      digitalWrite(led,HIGH);
      delay(700);
    digitalWrite(buz,LOW);
    digitalWrite(led,LOW);
    delay(500);

    //guion
digitalWrite(buz,HIGH);
      digitalWrite(led,HIGH);
      delay(700);
    digitalWrite(buz,LOW);
    digitalWrite(led,LOW);
    delay(500);

    //guion
digitalWrite(buz,HIGH);
      digitalWrite(led,HIGH);
      delay(700);
    digitalWrite(buz,LOW);
    digitalWrite(led,LOW);
    delay(500);

    }
    else if(a.charAt(x)=='k'){
      lcd.print("-.-");
//guion
digitalWrite(buz,HIGH);
      digitalWrite(led,HIGH);
      delay(700);
    digitalWrite(buz,LOW);
    digitalWrite(led,LOW);
    delay(500);

//punto
digitalWrite(buz,HIGH);
    digitalWrite(led,HIGH);
      delay(200);
    digitalWrite(buz,LOW);
    digitalWrite(led,LOW);
    delay(500);

//guion
digitalWrite(buz,HIGH);
      digitalWrite(led,HIGH);
      delay(700);
    digitalWrite(buz,LOW);
    digitalWrite(led,LOW);
    delay(500);

    }
    else if(a.charAt(x)=='l'){
      lcd.print(".-..");
//punto
digitalWrite(buz,HIGH);
    digitalWrite(led,HIGH);
      delay(200);
    digitalWrite(buz,LOW);
    digitalWrite(led,LOW);
    delay(500);

//guion
digitalWrite(buz,HIGH);
      digitalWrite(led,HIGH);
      delay(700);
    digitalWrite(buz,LOW);
    digitalWrite(led,LOW);
    delay(500);

//punto
digitalWrite(buz,HIGH);
    digitalWrite(led,HIGH);
      delay(200);
    digitalWrite(buz,LOW);
    digitalWrite(led,LOW);
    delay(500);

//punto
digitalWrite(buz,HIGH);
    digitalWrite(led,HIGH);
      delay(200);
    digitalWrite(buz,LOW);
    digitalWrite(led,LOW);
    delay(500);

    }
    else if(a.charAt(x)=='m'){
      lcd.print("--");
//guion
digitalWrite(buz,HIGH);
      digitalWrite(led,HIGH);
      delay(700);
    digitalWrite(buz,LOW);
    digitalWrite(led,LOW);
    delay(500);

//guion
digitalWrite(buz,HIGH);
      digitalWrite(led,HIGH);
      delay(700);
    digitalWrite(buz,LOW);
    digitalWrite(led,LOW);
    delay(500);

    }
    else if(a.charAt(x)=='n'){
      lcd.print("-.");
//guion
digitalWrite(buz,HIGH);
      digitalWrite(led,HIGH);
      delay(700);
    digitalWrite(buz,LOW);
    digitalWrite(led,LOW);
    delay(500);

//punto
digitalWrite(buz,HIGH);
    digitalWrite(led,HIGH);
      delay(200);
    digitalWrite(buz,LOW);
    digitalWrite(led,LOW);
    delay(500);

    }
    else if(a.charAt(x)=='o'){
      lcd.print("---");
      digitalWrite(buz,HIGH);
      digitalWrite(led,HIGH);
      delay(700);
    digitalWrite(buz,LOW);
    digitalWrite(led,LOW);
    delay(500);
      digitalWrite(buz,HIGH);
      digitalWrite(led,HIGH);
      delay(700);
      digitalWrite(buz,LOW);
    digitalWrite(led,LOW);
    delay(500);
      digitalWrite(buz,HIGH);
      digitalWrite(led,HIGH);
      delay(700);
      digitalWrite(buz,LOW);
      digitalWrite(led,LOW);
    delay(500);
    }
    else if(a.charAt(x)=='p'){
      lcd.print(".--.");
//punto
digitalWrite(buz,HIGH);
    digitalWrite(led,HIGH);
      delay(200);
    digitalWrite(buz,LOW);
    digitalWrite(led,LOW);
    delay(500);

//guion
digitalWrite(buz,HIGH);
      digitalWrite(led,HIGH);
      delay(700);
    digitalWrite(buz,LOW);
    digitalWrite(led,LOW);
    delay(500);

//guion
digitalWrite(buz,HIGH);
      digitalWrite(led,HIGH);
      delay(700);
    digitalWrite(buz,LOW);
    digitalWrite(led,LOW);
    delay(500);

//punto
digitalWrite(buz,HIGH);
    digitalWrite(led,HIGH);
      delay(200);
    digitalWrite(buz,LOW);
    digitalWrite(led,LOW);
    delay(500);
    
    }
    else if(a.charAt(x)=='q'){
      lcd.print("--.-");
//guion
digitalWrite(buz,HIGH);
      digitalWrite(led,HIGH);
      delay(700);
    digitalWrite(buz,LOW);
    digitalWrite(led,LOW);
    delay(500);

//guion
digitalWrite(buz,HIGH);
      digitalWrite(led,HIGH);
      delay(700);
    digitalWrite(buz,LOW);
    digitalWrite(led,LOW);
    delay(500);

//punto
digitalWrite(buz,HIGH);
    digitalWrite(led,HIGH);
      delay(200);
    digitalWrite(buz,LOW);
    digitalWrite(led,LOW);
    delay(500);

//guion
digitalWrite(buz,HIGH);
      digitalWrite(led,HIGH);
      delay(700);
    digitalWrite(buz,LOW);
    digitalWrite(led,LOW);
    delay(500);

    }
    else if(a.charAt(x)=='r'){
      lcd.print(".-.");
//punto
digitalWrite(buz,HIGH);
    digitalWrite(led,HIGH);
      delay(200);
    digitalWrite(buz,LOW);
    digitalWrite(led,LOW);
    delay(500);

//guion
digitalWrite(buz,HIGH);
      digitalWrite(led,HIGH);
      delay(700);
    digitalWrite(buz,LOW);
    digitalWrite(led,LOW);
    delay(500);

//punto
digitalWrite(buz,HIGH);
    digitalWrite(led,HIGH);
      delay(200);
    digitalWrite(buz,LOW);
    digitalWrite(led,LOW);
    delay(500);

    }
    else if(a.charAt(x)=='s'){
      lcd.print("...");
    digitalWrite(buz,HIGH);
    digitalWrite(led,HIGH);
      delay(200);
    digitalWrite(buz,LOW);
    digitalWrite(led,LOW);
    delay(200);
      digitalWrite(buz,HIGH);
      digitalWrite(led,HIGH);
      delay(200);
      digitalWrite(buz,LOW);
    digitalWrite(led,LOW);
      delay(200);
      digitalWrite(buz,HIGH);
      digitalWrite(led,HIGH);
      delay(200);
      digitalWrite(buz,LOW);
    digitalWrite(led,LOW);
    delay(500);
    }
    else if(a.charAt(x)=='t'){
      lcd.print("-");
//guion
digitalWrite(buz,HIGH);
      digitalWrite(led,HIGH);
      delay(700);
    digitalWrite(buz,LOW);
    digitalWrite(led,LOW);
    delay(500);

    }
    else if(a.charAt(x)=='u'){
      lcd.print("..-");
      //punto
      digitalWrite(buz,HIGH);
    digitalWrite(led,HIGH);
      delay(200);
    digitalWrite(buz,LOW);
    digitalWrite(led,LOW);
    delay(500);

      //punto
digitalWrite(buz,HIGH);
    digitalWrite(led,HIGH);
      delay(200);
    digitalWrite(buz,LOW);
    digitalWrite(led,LOW);
    delay(500);

      //guion
      digitalWrite(buz,HIGH);
      digitalWrite(led,HIGH);
      delay(700);
    digitalWrite(buz,LOW);
    digitalWrite(led,LOW);
    delay(500);

    }
    else if(a.charAt(x)=='v'){
      lcd.print("...-");
//punto
digitalWrite(buz,HIGH);
    digitalWrite(led,HIGH);
      delay(200);
    digitalWrite(buz,LOW);
    digitalWrite(led,LOW);
    delay(500);

//punto
digitalWrite(buz,HIGH);
    digitalWrite(led,HIGH);
      delay(200);
    digitalWrite(buz,LOW);
    digitalWrite(led,LOW);
    delay(500);

//punto
digitalWrite(buz,HIGH);
    digitalWrite(led,HIGH);
      delay(200);
    digitalWrite(buz,LOW);
    digitalWrite(led,LOW);
    delay(500);

//guion
digitalWrite(buz,HIGH);
      digitalWrite(led,HIGH);
      delay(700);
    digitalWrite(buz,LOW);
    digitalWrite(led,LOW);
    delay(500);

    }
    else if(a.charAt(x)=='w'){
      lcd.print(".--");
//punto
digitalWrite(buz,HIGH);
    digitalWrite(led,HIGH);
      delay(200);
    digitalWrite(buz,LOW);
    digitalWrite(led,LOW);
    delay(500);

//guion
digitalWrite(buz,HIGH);
      digitalWrite(led,HIGH);
      delay(700);
    digitalWrite(buz,LOW);
    digitalWrite(led,LOW);
    delay(500);

//guion
digitalWrite(buz,HIGH);
      digitalWrite(led,HIGH);
      delay(700);
    digitalWrite(buz,LOW);
    digitalWrite(led,LOW);
    delay(500);

    }
    else if(a.charAt(x)=='x'){
      lcd.print("-..-");
//guion
digitalWrite(buz,HIGH);
      digitalWrite(led,HIGH);
      delay(700);
    digitalWrite(buz,LOW);
    digitalWrite(led,LOW);
    delay(500);

//punto
digitalWrite(buz,HIGH);
    digitalWrite(led,HIGH);
      delay(200);
    digitalWrite(buz,LOW);
    digitalWrite(led,LOW);
    delay(500);

//punto
digitalWrite(buz,HIGH);
    digitalWrite(led,HIGH);
      delay(200);
    digitalWrite(buz,LOW);
    digitalWrite(led,LOW);
    delay(500);

//guion
digitalWrite(buz,HIGH);
      digitalWrite(led,HIGH);
      delay(700);
    digitalWrite(buz,LOW);
    digitalWrite(led,LOW);
    delay(500);

    }
    else if(a.charAt(x)=='y'){
      lcd.print("-.--");
//guion
digitalWrite(buz,HIGH);
      digitalWrite(led,HIGH);
      delay(700);
    digitalWrite(buz,LOW);
    digitalWrite(led,LOW);
    delay(500);
//punto
digitalWrite(buz,HIGH);
    digitalWrite(led,HIGH);
      delay(200);
    digitalWrite(buz,LOW);
    digitalWrite(led,LOW);
    delay(500);

//guion
digitalWrite(buz,HIGH);
      digitalWrite(led,HIGH);
      delay(700);
    digitalWrite(buz,LOW);
    digitalWrite(led,LOW);
    delay(500);
//guion
digitalWrite(buz,HIGH);
      digitalWrite(led,HIGH);
      delay(700);
    digitalWrite(buz,LOW);
    digitalWrite(led,LOW);
    delay(500);
    }
    else if(a.charAt(x)=='z'){
      lcd.print("--..");
    //guion
    digitalWrite(buz,HIGH);
      digitalWrite(led,HIGH);
      delay(700);
    digitalWrite(buz,LOW);
    digitalWrite(led,LOW);
    delay(500);
    //guion
    digitalWrite(buz,HIGH);
      digitalWrite(led,HIGH);
      delay(700);
    digitalWrite(buz,LOW);
    digitalWrite(led,LOW);
    delay(500);
    //punto
    digitalWrite(buz,HIGH);
    digitalWrite(led,HIGH);
      delay(200);
    digitalWrite(buz,LOW);
    digitalWrite(led,LOW);
    delay(500);

    //punto
digitalWrite(buz,HIGH);
    digitalWrite(led,HIGH);
      delay(200);
    digitalWrite(buz,LOW);
    digitalWrite(led,LOW);
    delay(500);
    
    }    
    Serial.println(a.charAt(x));
   lcd.scrollDisplayLeft();
     }
   
}
lcd.scrollDisplayLeft();
delay(500);
lcd.clear();
  

  
    }
 

//}
