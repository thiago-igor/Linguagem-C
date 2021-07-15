#include <stdio.h>

void func1();
void func2(void (*pf)()); 

int main() {

  func2(func1); 
  
  return 0;
}

void func1(){
  printf("oi meu bem");
}
void func2(void(*pf)()){
  (*pf)();
}