void colord()  
{  
  //Rotina que le o valor das cores  
  digitalWrite(S2D, LOW);  
  digitalWrite(S3D, LOW);  
  //count OUT, pRed, RED  
  redd = pulseIn(OUTD, digitalRead(OUTD) == HIGH ? LOW : HIGH);  
  digitalWrite(S3D, HIGH);  
  //count OUT, pBLUE, BLUE  
  blued = pulseIn(OUTD, digitalRead(OUTD) == HIGH ? LOW : HIGH);  
  digitalWrite(S2D, HIGH);  
  //count OUT, pGreen, GREEN  
  greend = pulseIn(OUTD, digitalRead(OUTD) == HIGH ? LOW : HIGH);  
}

void virar_direita()
{
  motor_avancar(180);
  delay(200);
  motor_direita(20);
  delay(1000);
  motor_avancar(180);
  delay(150);
  motor_parar();
  delay(100);
  digitalWrite(LEDVERDED,LOW);
  while(true){
    loop();
  }
  }
  
  
  //////////////////////////////////////////////////////////////
  
  void colore()  
{  
  //Rotina que le o valor das cores  
  digitalWrite(S2E, LOW);  
  digitalWrite(S3E, LOW);  
  //count OUT, pRed, RED  
  rede = pulseIn(OUTE, digitalRead(OUTE) == HIGH ? LOW : HIGH);  
  digitalWrite(S3E, HIGH);  
  //count OUT, pBLUE, BLUE  
  bluee = pulseIn(OUTE, digitalRead(OUTE) == HIGH ? LOW : HIGH);  
  digitalWrite(S2E, HIGH);  
  //count OUT, pGreen, GREEN  
  greene = pulseIn(OUTE, digitalRead(OUTE) == HIGH ? LOW : HIGH);  
}

void virar_esquerda()
{

  motor_parar();
  delay(100);
  motor_avancar(180);
  delay(200);
  motor_esquerda(20);
  delay(1000);
  motor_avancar(180);
  delay(150);
  motor_parar();
  delay(100);
  digitalWrite(LEDVERDEE,LOW);
  while(true){
    loop();
  }
  }
  void colorf()  
{  
  //Rotina que le o valor das cores  
  digitalWrite(S2F, LOW);  
  digitalWrite(S3F, LOW);  
  //count OUT, pRed, RED  
  redf = pulseIn(OUTF, digitalRead(OUTF) == HIGH ? LOW : HIGH);  
  digitalWrite(S3F, HIGH);  
  //count OUT, pBLUE, BLUE  
  bluef = pulseIn(OUTF, digitalRead(OUTF) == HIGH ? LOW : HIGH);  
  digitalWrite(S2F, HIGH);  
  //count OUT, pGreen, GREEN  
  greenf = pulseIn(OUTF, digitalRead(OUTF) == HIGH ? LOW : HIGH);  
}

void nada(){
  motor_parar();
  delay(100000000);
  }
