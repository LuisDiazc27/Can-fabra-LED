void setup() {

  Serial.begin(9600);
  int frecuencia = 200;
  while(frecuencia<1000){
    Serial.println(frecuencia);
    tone(2, frecuencia, 50);
    delay(50);
    frecuencia = frecuencia +random(0,25);
  }
  while(frecuencia>200){
    Serial.println(frecuencia);
    tone(2,frecuencia,50);
    delay(250);
    frecuencia=frecuencia/1.05; 
  }

}

void loop() {
  // put your main code here, to run repeatedly:

}
