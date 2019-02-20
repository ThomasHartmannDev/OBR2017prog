void levabolinha3()
{
  motor_avancar(140);
  delay(3000);  //Avança por 3 segundos e para
  motor_parar();
  delay(1000);
  while(true)
    {
   //Avança até que o SHARP da esquerda e da direita encontrem juntos algo a mais ou menos 5cm
if(analogRead(SHARPE) > 500)
{
  motor_parar();
  delay(1000);
  if(analogRead(SHARPD) > 500);
  {
    motor_avancar(140); //Avança mais um pouco para encostar no triângulo e deposita as vítimas
    delay(400);
    motor_parar();
    delay(300);
    motor.write(180);
    delay(1500);
    motor_baixo(140);
    delay(800);
    motor_desliga();
    delay(200);
    motor_cima(255);
    delay(1000);
    motor_desliga();
    delay(200);
    motor_baixo(140);
    delay(800);
    motor_desliga();
    delay(200);
    motor_cima(255);
    delay(1000);
    motor_desliga();
    delay(200);
    motor_baixo(140);
    delay(800);
    motor_desliga();
    delay(200);
    motor_cima(255);
    delay(1000);
    motor_desliga();
    delay(200);
    digitalWrite(LEDRAMPA, HIGH);
      delay(200);
       digitalWrite(LEDOBSTACULO, HIGH);
        delay(200);
         digitalWrite(LEDVERDEE, HIGH);
          delay(200);
           digitalWrite(LEDVERDED, HIGH);
            delay(200);
    motor_parar();
    delay(99999);
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
