/*
MacroIno - MAIN SCRIPT
Written by renaxdev

Contact: renaxdev@outlook.de
*/
void setup() {
    Serial.begin(9600); //Initialize Serial output
    pinMode(5, INPUT); //Set Pin 5 to Input (Button)
}

void loop() {
    if(digitalRead(5) == HIGH){ //Read button
        Serial.println("1"); //If pressed, send 1
        delay(200);
    }

    else {
        Serial.println(0); //If not pressed, send 0
        delay(200);
    }
}