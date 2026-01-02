#include <Arduino.h>

/************************Hardware Related Macros************************************/
#define         MG_PIN                       (A0)     //define which analog input channel you are going to use
#define         MQ3_PIN                      (A1)     //define which analog input channel you are going to use

/***********************Software Related Macros************************************/
#define         READ_SAMPLE_INTERVAL         (5)    //define how many samples you are going to take in normal operation
#define         READ_SAMPLE_TIMES            (5)     //define the time interval(in milisecond) between each samples in
                                                     //normal operation

void setup() {
  Serial.begin(9600);
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(A0,INPUT);
  pinMode(A1,INPUT);
}

void loop() 
{
  static bool ledState = false;
  float mq3Value = 0;
  float mg811Value = 0;
  for (int i=0; i<READ_SAMPLE_TIMES; i++)
  {
    mq3Value += analogRead(MQ3_PIN);
    mg811Value += analogRead(MG_PIN);
    delay(READ_SAMPLE_INTERVAL);
  }
  mq3Value = mq3Value *5/1024.0/ READ_SAMPLE_TIMES;
  mg811Value = mg811Value *5/1024.0/ READ_SAMPLE_TIMES;

  // affiche les deux valeurs avec 3 chiffres après la virgule
  Serial.println("Analog reading: "+String(mg811Value,3)+" V  "+String(mq3Value,3)+" V");

  digitalWrite(LED_BUILTIN, ledState ? HIGH : LOW);
  ledState = !ledState;
  delay(3);
}



