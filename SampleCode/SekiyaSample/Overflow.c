#include<stdio.h>

void hello(void){
 printf("呼び出してないよ\n");
}

void func(void){
 void* buf[5];
 static int i;
 
 for(i = 0;i < 50;i++){
   buf[i] = hello;
 }
}

int main(void){
  int buf[1000];
  buf[999] = 10;
  func();

  return 0;
}