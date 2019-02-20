void triangulo2()
{
  motor_avancar(140);
  delay(3200);
  motor_direita(60);
  delay(650);
  motor_avancar(150);
  delay(1350);
  motor_parar();
  delay(300);

if(analogRead(SHARPLE)>350){ //Verifica se o triângulo está no segundo ponto
  motor_parar();
  delay(500);
  while(true){
  motor_parar();
  delay(100); //Se estiver, ele chama a programação para o segundo ponto
  digitalWrite(LEDVERDEE, HIGH);
  curva2();
  }
}
else{ //Se não estiver ele não faz uma terceira leitura, pois sabe-se que só resta esse ponto
  motor_direita(60);
  delay(850);
  motor_parar();
  delay(100);
  motor_avancar(160);
  delay(2100);
  motor_parar();
  delay(100);
  motor_direita(60);
  delay(800);
  motor_parar();
  delay(100);
  motor_avancar(140);
  delay(400);
  motor_parar();
  delay(100);
  motor_direita(60);
  delay(2050);
  
  while(true){ // Após contornar o terceiro ponto da área de resgate ele chama os voids feitos para o terceiro ponto
    curva3(); 
  }
}
  motor_parar();
  delay(99999);
}

