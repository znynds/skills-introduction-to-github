void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(2,INPUT_PULLUP);//开关输入信号
  for(int pinSet = 3;pinSet <= 9;pinSet++)  pinMode(pinSet,OUTPUT);
  randomSeed(analogRead(A0));//括号内为读取a0引脚数据，并将其作为随机种子
}
int Num,i;
void loop() {
  // put your main code here, to run repeatedly:
  if(!digitalRead(2)){
    
    Num = getRandomNumber(1,10);
    displayNumber(Num);
    
  }
  
  
}

int getRandomNumber(int minNumber,int maxNumber){
  int randomNumber;
  int i ;
    for ( i = 1; i <= 5; i++) {  
    displayRandom();         //显示随机图案，混淆注意力
    delay(50 + i * 10);      //让随机图案显示时间由快到慢，增加混淆
    randomNumber = random(minNumber,maxNumber);
    
    displayNumber(randomNumber);
    delay(100);
    displayClear();
    delay(100);
    

    Serial.println(randomNumber);
  }
  return randomNumber;
}

void displayClear(){
  digitalWrite(3,LOW);
  digitalWrite(4,LOW); 
  digitalWrite(5,LOW);
  digitalWrite(6,LOW);
  digitalWrite(7,LOW);
  digitalWrite(8,LOW);
  digitalWrite(9,LOW);
}

void displayNumber(int LedNumber){
  switch(LedNumber){
    case 1:
      digitalWrite(4,HIGH); 
      digitalWrite(5,HIGH);
      break;
    case 2:
      digitalWrite(3,HIGH);
      digitalWrite(4,HIGH);
      digitalWrite(6,HIGH);
      digitalWrite(7,HIGH);
      digitalWrite(9,HIGH);
      break;
    case 3:
      digitalWrite(3,HIGH);
      digitalWrite(4,HIGH); 
      digitalWrite(5,HIGH);
      digitalWrite(6,HIGH);
      digitalWrite(9,HIGH);
      break;
    case 4:
      digitalWrite(4,HIGH); 
      digitalWrite(5,HIGH);
      digitalWrite(8,HIGH);
      digitalWrite(9,HIGH);
      break;
    case 5:
      digitalWrite(3,HIGH);
      digitalWrite(5,HIGH); 
      digitalWrite(6,HIGH);
      digitalWrite(8,HIGH);
      digitalWrite(9,HIGH);
      break;
    case 6:
      digitalWrite(3,HIGH);
      digitalWrite(5,HIGH); 
      digitalWrite(6,HIGH);
      digitalWrite(7,HIGH);
      digitalWrite(8,HIGH);
      digitalWrite(9,HIGH);
      break;
    case 7:
      digitalWrite(3,HIGH);
      digitalWrite(4,HIGH); 
      digitalWrite(5,HIGH);
      break;
    case 8:
      digitalWrite(3,HIGH);
      digitalWrite(4,HIGH); 
      digitalWrite(5,HIGH);
      digitalWrite(6,HIGH);
      digitalWrite(7,HIGH);
      digitalWrite(8,HIGH);
      digitalWrite(9,HIGH);
      break;
    case 9:
      digitalWrite(3,HIGH);
      digitalWrite(4,HIGH); 
      digitalWrite(5,HIGH);
      digitalWrite(6,HIGH);
      digitalWrite(8,HIGH);
      digitalWrite(9,HIGH);
      break;
  }
}
void displayRandom(){
  int randomPin = random(3,9);
  digitalWrite(randomPin, HIGH);  
}
