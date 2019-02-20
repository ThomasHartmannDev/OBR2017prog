void curva3() //Primeira linha da varredura do terceiro ponto , ele anda até que encontre uma parede
{
 
 while(true){
  
   if(analogRead(SHARPE) > 350)  //Quando o SHARP da frente detecta algo a uma distância de 4 - 5cm  ele faz uma leitura do sensor que fica em cima
   {
    if(analogRead(SHARPC) < 400) // Se a leitura dele for de mais que 10cm, ele entende que é uma vítima, então faz o resgate da mesma
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
   else { //Se a leitura do SHARP de cima for menor que 10cm, entende-se que é parede, então ele faz o desvio e parte para a outra linha
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
    delay(1000);
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
    C2(); //Vai para a segunda linha do terceiro ponto
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
    delay(1000);
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
    C2(); // Vai para a segunda linha do terceiro ponto
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



