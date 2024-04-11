#include<stdio.h>
void main(){
  int a, b, c;
  a=9;
  b=1;
  c=5;
  if (a+b>c){
    c=a+b-c;
  }
  else if (a+b<c){
    c=c-a-b;
  }
}
