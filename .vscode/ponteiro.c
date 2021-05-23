#include <stdio.h>
#include <conio.h>

int main(void){

 int value = 27;

 int *pointer;

 pointer = &value;

 printf("ex pointer \n \n");
 prinf("content variable: %d \n", value);
 prinf("local variable: %x \n", &value);
 prinf("content pointer: %x \n", pointer);

getch();
return 0;

}
