/*
@title: Teclado
@author: Fabio Souza
@license: GPLv3
@repo: https://github.com/FBSeletronica/Oficina-Rubber-Ducky-Franzininho-diy
@description: Exemplo exibir como enviar caracteres em forma de strings
*/

#include "DigiKeyboard.h"

void setup() {
  //Não faz nada no setup
}

void loop() {
  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.delay(500);
  DigiKeyboard.println("Teste Teclado com a Franzininho!");
  DigiKeyboard.delay(5000);
}
