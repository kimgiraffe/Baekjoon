#include <stdio.h>
#include <stdlib.h> 
int main(){
int A,B,C,i,m,k; 
int array[10]={0,};
scanf("%d",&A); scanf("%d",&B); scanf("%d",&C);
m=A*B*C; 

while(m!=0){
k=m%10; m/=10; array[k]++; 
} 

for(i=0;i<10;i++) 
printf("%d \n",array[i]); 
return 0;
}
