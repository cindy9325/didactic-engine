#include <stdio.h>
/* 2016/09/22 */
int first4(int x){
   return x/10000;
}
int last4(int x){
   /* Input is 8 digits
      Output is 16 digits
      The operator % in C computes the remainder after division.
      For example, the answer of 23%7 will be 2.*/
   return x%10000;
}
int first8(int x){
   return x/100000000;
}
int last8(int x){
   return x%100000000;
}
int shift4(int x){
   return x*10000;
}
int main(void){
  int x;
  int a, b;
  int c1, c2, c3;
  /* Assume that the input is always an 8-digit positive integer. */
  scanf("%d", &x);
  a = first4(x);
  b = last4(x);
  c3 = last4(b * b);
  c2 = last8(2 * a * b + shift4(last4(a * a)) + first4(b * b));
  c1 = first4(a * a) + first8(2 * a * b + shift4(last4(a * a)) + first4(b * b));
  printf("%4d%08d%04d", c1, c2, c3);
  /* %04d will display a 4-digit number and add 0 as padding before the number if necessary */
  return 0;
}
