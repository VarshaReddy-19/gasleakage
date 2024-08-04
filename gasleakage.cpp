#define Sensor pin = A0;

   #define relay pin = D9;

   #define Buzzer Pin = D8;



       code created by Innovative ideas 

        For any help  DM on

 https://www.instagram.com/innovative_ideas_yt/?hl=en

    */ 



 #define sensorDigital A0



#define relay 9



#define buzzer 8



#define sensorAnalog A1



void setup() {



  pinMode(sensorDigital, INPUT);



    pinMode(relay, OUTPUT);



      pinMode(buzzer, OUTPUT);



        Serial.begin(9600);



        }



        void loop() {



          bool digital = digitalRead(sensorDigital);



            int analog = analogRead(sensorAnalog);



  Serial.print("Analog value : ");



    Serial.print(analog);



      Serial.print("t");



        Serial.print("Digital value :");



          Serial.println(digital);



  if (digital == 0) {



      digitalWrite(relay, LOW);

        

       digitalWrite(buzzer, HIGH);

        delay(5000);

        digitalWrite(relay, HIGH);

        digitalWrite(buzzer, LOW);



            } else {



                digitalWrite(relay, HIGH);



                    digitalWrite(buzzer, LOW);



       }



            }