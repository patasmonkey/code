#include<stdio.h>
 int main(){
   int a;
   int b[]={100,1};
   int c[2];
#pragma acc karnels
   for(a=0;a<2;a++){
     if(a%2)c[a]=b[a]+b[a];
   }
   printf("%d %d\n",c[0],a);
   return 0;
 }

