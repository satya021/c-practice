#include<stdio.h>
int main(){
int b;
printf("Enter a number\n");
scanf("%d",&b);
if(b%2==0){
    printf("%d is even \n");

}
else{
    printf("%d is odd \n");
}
return 0;
}