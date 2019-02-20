void triangulo() { // Ao terminar a rampa, o robô entra na sala de resgate
motor.write(80);
delay(800);
motor_avancar(190);
delay(1400);
motor_parar();
delay(1000);
motor_esquerda(40);
delay(1300);
motor_parar();
delay(1000);
motor_voltar(195);
delay(1700);
motor_avancar(150); // Vai em direção ao primeiro ponto onde pode estar a área de resgate
delay(3000);
motor_direita(60);
delay(750);
motor_avancar(150);
delay(1350);
motor_parar();
delay(300);

if(analogRead(SHARPLE)>200){ //Robô faz a leitura do SHARP da lateral, para verificar se há o triangulo
  digitalWrite(LEDOBSTACULO, HIGH);
  motor_parar();
  delay(500);
  while(true){ //Se após a verificação for detectado a área de resgate, ele chama a primeira linha deste ponto
  motor_parar();
  delay(100);
   curva1();
  }
}
else{ // Caso a área de resgate não estiver no primeiro ponto, ele vai para o segundo faz uma nova leitura
  motor_avancar(150);
  delay(1000);
  motor_direita(60);
  delay(700);
  motor_voltar(205);
  delay(2200);
  motor_parar();
  delay(100);
  while(true){
    triangulo2();
  }
}
motor_parar();
delay(10000); 
}

