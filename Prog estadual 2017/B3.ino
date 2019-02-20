void B3 () //Terceira linha do segundo ponto
{
  if(analogRead(SHARPE) > 350)
   {
    if(analogRead(SHARPC) < 400)
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
    delay(200);
    motor_avancar(140);
    delay(700);
    motor_direita(60);
    delay(1400);
    motor_parar();
    delay(200);
    motor_avancar(140);
    delay(1050);
    motor_parar();
    delay(400);
    motor_direita(60);
    delay(1500);
    motor_voltar(180); //Alinha na parede
    delay(1800);
    motor_parar();
    delay(500);
    while(true)
    {
    B4(); //Vai para a quarta linha
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
    delay(200);
    motor_avancar(140);
    delay(700);
    motor_direita(60);
    delay(1400);
    motor_parar();
    delay(200);
    motor_avancar(140);
    delay(1050);
    motor_parar();
    delay(400);
    motor_direita(60);
    delay(1500);
    motor_voltar(180); //Alinha na parede
    delay(1800);
    motor_parar();
    delay(500);
    while(true)
    {
    B4(); //Vai para a quarta linha
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


