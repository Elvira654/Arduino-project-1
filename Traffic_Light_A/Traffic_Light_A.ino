int led1= 10 ;
int led2= 9 ;
int led3= 8 ;

void setup() {
pinMode(led1, OUTPUT) ;
pinMode(led2, OUTPUT) ;
pinMode(led3, OUTPUT) ;


}

void loop() {
   digitalWrite(led1, HIGH) ;
  delay(8000);
   digitalWrite(led2, HIGH) ;
  delay(1000);
   digitalWrite(led1, LOW) ;
   digitalWrite(led2, LOW) ;
   digitalWrite(led3, HIGH) ;
  delay(8000);
   digitalWrite(led3, LOW) ;
  delay(1000);
   digitalWrite(led3, HIGH) ;
     delay(1000);
   digitalWrite(led3, LOW) ;
   digitalWrite(led2, HIGH) ;
  delay(2000);
 digitalWrite(led2, LOW) ;
                                            
  
  
  
  

}
