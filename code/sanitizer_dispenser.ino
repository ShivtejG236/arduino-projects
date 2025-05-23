int pump=9;//attach your pump to PWM 9 of Arduino

#define echoPin 2 // attach pin D2 Arduino to pin Echo of HC-SR04
#define trigPin 3 //attach pin D3 Arduino to pin Trig of HC-SR04
long duration; // variable for the duration of sound wave travel
int distance; // variable for the distance measurement
long inch;
void setup() {
pinMode(pump, OUTPUT);
pinMode(trigPin, OUTPUT); // Sets the trigPin as an OUTPUT
pinMode(echoPin, INPUT); // Sets the echoPin as an INPUT
}

void loop() {
// Clears the trigPin condition
digitalWrite(trigPin, LOW);
delayMicroseconds(2);
// Sets the trigPin HIGH (ACTIVE) for 10 microseconds
digitalWrite(trigPin, HIGH);
delayMicroseconds(10);
digitalWrite(trigPin, LOW);
// Reads the echoPin, returns the sound wave travel time in microseconds
duration = pulseIn(echoPin, HIGH);
// Calculating the distance
distance = duration * 0.034 / 2; // Speed of sound wave divided by 2 (go and back)
inch=distance/2.54;//converting cm to inch
if(distance<10)
{
digitalWrite(pump, HIGH); // turn the pump on if distance less than 10 cm (HIGH is the voltage level)
delay(2000);
digitalWrite(pump, LOW); //For controlled dispensing
delay(3000);

}
else
{
digitalWrite(pump, LOW); // turn the pump off if distance greater than or equal to 10 cm (LOW is the voltage level)
}

}

/////////////////////////////////////////////////////////////////////////////////////////////////
