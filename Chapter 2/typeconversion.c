#include<stdio.h>

int main(void){
// An Arithmetic operation between
// int and int → int
//int and float → float
//float and float → float
/* 5/2 becomes 2 as both the operands are int
o 5.0/2 becomes 2.5 as one of the operands is float
o 2/5 becomes 0 as both the operands are int */
int a=3;
int b=17;
float c=b/a;
printf(" %f", c);
return 0;
}// demotion happns if we int d = 6.7
// printf("d=%d",d) , then d =  6 will be output
// order preference in operators in abscence of paranthesis =
// 1st * or % or /
//2nd + or -
// 3rd =

// order associativity
/* x*y/z → (x*y)/z
 x/y*z → (x/y)*z
*, / follows left to right associativity
*/