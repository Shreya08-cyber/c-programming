#include <stdio.h>
int power(int x,int y){ return (y==0)?1:x*power(x,y-1); }
int main(){ printf("%d\n",power(2,5)); return 0; }
