void curva1(){
// Primeira linha da varredura do primeiro ponto, ele se alinha e segue até a parede 
 motor_parar();
 delay(1000);
 motor_direita(60);
 delay(2400);
 motor_parar();
 delay(100);
 digitalWrite(LEDOBSTACULO,LOW);
 
 while(true){ 
  
   if(analogRead(SHARPE) > 350) //Quando o SHARP encontra algo a uma distância de 4 - 5cm e o Sharp de cima ao mesmo tempo encontrar a mais de 15cm
   {
    if(analogRead(SHARPC) < 400) // Entende-se que é uma vítima, então ele realiza o resgate
   {
   digitalWrite(LEDRAMPA, HIGH);

   motor_parar();
   delay(200);
   motor_voltar(140);
   delay(300);
   motor_parar();
   delay(200);
   motor_baixo(120);
   delay(1500);
   motor_parar();
   delay(200);
   motor_cima(255);
   delay(1500);
   motor_desliga();
   motor_parar();
   delay(200);
   motor_voltar(140);
   delay(500);
   motor_parar();
   delay(200);
   digitalWrite(LEDRAMPA, LOW);
   
   }
   else { //Caso o SHARP de cima ler menos do que os 10cm, entende-se que é parede, então ele vai para a próxima linha
    motor_parar();
    delay(200);
    motor_voltar(140);
    delay(700);
    motor_parar();
    delay(200);
    motor_baixo(100);
    delay(1000);
    motor_parar();
    delay(400);
    motor_voltar(140);
    delay(200);
    motor_parar();
    delay(400);
    motor_cima(255);
    delay(1500);
    motor_parar();
    delay(200);
    motor_desliga();
    motor_parar();
    delay(50);
    motor_avancar(140);
    delay(700);
    motor_esquerda(60);
    delay(1400);
    motor_parar();
    delay(200);
    motor_avancar(140);
    delay(1100);
    motor_parar();
    delay(400);
    motor_esquerda(60);
    delay(1500);
    motor_voltar(170); //Alinha na parede
    delay(1700);
    motor_parar();
    delay(500);
    while(true)
    {
    linha2(); //Segue para a segunda linha do primeiro ponto
   }
   }
   }

   if(analogRead(SHARPD) > 350){
    if(analogRead(SHARPC) < 400){
    digitalWrite(LEDRAMPA, HIGH);

   motor_parar();
   delay(200);
   motor_voltar(140);
   delay(300);
   motor_parar();
   delay(200);
   motor_baixo(120);
   delay(1500);
   motor_parar();
   delay(200);
   motor_cima(255);
   delay(1500);
   motor_desliga();
   motor_parar();
   delay(200);
   motor_voltar(140);
   delay(500);
   motor_parar();
   delay(200);
  digitalWrite(LEDRAMPA, LOW);
   }
   else {
    motor_parar();
    delay(200);
    motor_voltar(140);
    delay(700);
    motor_parar();
    delay(200);
    motor_baixo(100);
    delay(1000);
    motor_parar();
    delay(400);
    motor_voltar(140);
    delay(200);
    motor_parar();
    delay(400);
    motor_cima(255);
    delay(1500);
    motor_parar();
    delay(200);
    motor_desliga();
    motor_parar();
    delay(50);
    motor_avancar(140);
    delay(700);
    motor_esquerda(60);
    delay(1400);
    motor_parar();
    delay(200);
    motor_avancar(140);
    delay(1100);
    motor_parar();
    delay(400);
    motor_esquerda(60);
    delay(1500);
    motor_voltar(170); //Alinha na parede
    delay(1700);
    motor_parar();
    delay(500);
    while(true)
    {
    linha2(); //Segue para a segunda linha do primeiro ponto
   }
   }
   }
   
      
   
   
  
  unsigned long Millis = millis(); 
  if (Millis - tempo1 >= intervalo){
  Millis = tempo1;
motor_avancar(150);
  }
 else {
motor_parar();
}
}
}



