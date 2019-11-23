/*
@title: Open Terminal
@author: Fabio Souza
@license: GPLv3
@repo: https://github.com/FBSeletronica/Oficina-Rubber-Ducky-Franzininho-diy
@description: Exemplo para Abrir um Terminal
*/

#define LINUX  //Comentar essa linha se for compilar para Windows

//Inclui biblioteca de teclado
#include "DigiKeyboard.h"

void setup(){
  //não faz nada em setup
}

void loop() {

 #ifndef LINUX
 DigiKeyboard.sendKeyStroke(0);
 DigiKeyboard.delay(500);
 DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
 DigiKeyboard.delay(500);
 DigiKeyboard.print("cmd");
 DigiKeyboard.sendKeyStroke(KEY_ENTER);
 DigiKeyboard.delay(500);

 #else
 DigiKeyboard.sendKeyStroke(0);
 DigiKeyboard.delay(2000);
 DigiKeyboard.sendKeyStroke(KEY_T , MOD_CONTROL_LEFT | MOD_ALT_LEFT);

 #endif

 while(1);
 
}

// DigiKeyboard.print("echo YOU HAVE BEEN PWNED > YOU_HAVE_BEEN_PWNED.TXT");
// DigiKeyboard.sendKeyStroke(KEY_ENTER);
// DigiKeyboard.delay(500);
// DigiKeyboard.print("exit");
// DigiKeyboard.sendKeyStroke(KEY_ENTER);
// DigiKeyboard.delay(500);
