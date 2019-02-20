void OP(){ //Obstáculo pequeno
  {
  motor_parar();
  delay(100);
  motor_voltar(150);
  delay(250);
  motor_direita(60);
  delay(1400);
  motor_avancar(160);
  delay(1200);
  motor_esquerda(60);
  delay(1400);
  motor_avancar(150);
  delay(1300);
  motor_esquerda(60);
  delay(200);
  motor_avancar(150);
  delay(300);
  motor_esquerda(60);
  delay(200);
  motor_avancar(150);
  delay(200);
  motor_esquerda(60);
  delay(300);
  motor_avancar(150);
  delay(150);
  motor_avancar(150);
  delay(500);
  motor_avancar(150);
  delay(450);
  motor_parar();
  delay(100);
  digitalWrite(LEDOBSTACULO,LOW);
  }

 
  while (true)
  {
 loop();
  }
  }



 void OPG(){ // Desviar do obstáculo grande
  {
  motor_parar();
  delay(100);
  motor_voltar(150);
  delay(250);
  motor_direita(60);
  delay(1400);
  motor_avancar(160);
  delay(1300);
  motor_esquerda(60);
  delay(1400);
  motor_avancar(150);
  delay(2500);
  motor_esquerda(60);
  delay(1350);
  motor_parar();
  delay(100);
  motor_avancar(150);
  delay(950);
  motor_parar();
  delay(200);
  motor_direita(60);
  delay(1350);
  motor_parar();
  delay(100);
  digitalWrite(LEDOBSTACULO,LOW);
  }

 
  while (true) // quando a execuçao do obstaculo for verdade ele chamará o void loop para que volte executar sua programação normal
  {
    int sensibilidade =40;//40; 
   seguidor_de_linha.read(valor_sensor);    // faz a leitura dos valores 
   if(valor_sensor[3]<sensibilidade || valor_sensor[4]<sensibilidade){
     motor_avancar(150);
   }
   if(valor_sensor[3]>sensibilidade || valor_sensor[4] > sensibilidade){ 
     break;
     motor_direita(80);
     delay(200);
  loop();
  }
  }
  }
 
