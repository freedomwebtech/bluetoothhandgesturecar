int IN1 = 2;
int IN2 = 3;

int IN3 = 4;
int IN4 = 5;





void setup() {

Serial.begin(9600); // opens serial port, sets data rate to 9600 bps
pinMode(IN1, OUTPUT);
pinMode(IN2, OUTPUT);
pinMode(IN3, OUTPUT);
pinMode(IN4, OUTPUT);
analogWrite(IN1, 0);
analogWrite(IN2, 0);
analogWrite(IN3, 0);
analogWrite(IN4, 0);

}

void loop() {

if(Serial.available()) {

   int a= Serial.parseInt();// read the incoming data as string

   Serial.println(a);


    if (a == 1) //forward
    {

    analogWrite(IN1, 0);
    analogWrite(IN2, 150);
    analogWrite(IN3, 0);
    analogWrite(IN4, 150);
   
    }
    if (a==0)//stop
    {
    analogWrite(IN1, 0);
    analogWrite(IN2, 0);
    analogWrite(IN3, 0);
    analogWrite(IN4, 0);
     
    }
    if (a == 2) //right
 
    {
    analogWrite(IN1, 0);
    analogWrite(IN2, 150);
    analogWrite(IN3, 0);
    analogWrite(IN4, 0);
     
    }
    if (a == 3) //left
 
    {
    analogWrite(IN1, 150);
    analogWrite(IN2, 0);
    analogWrite(IN3, 0);
    analogWrite(IN4, 0);
    
   }
    if (a == 4) //back
 
    {
    analogWrite(IN1, 150);
    analogWrite(IN2, 0);
    analogWrite(IN3, 150);
    analogWrite(IN4, 0);
      
   }  
         
}

}
