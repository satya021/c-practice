#include<stdio.h>
int main(){
int age;
printf("Enter your age\n");
scanf("%d",&age);
if(age>90){
    printf("you are above 90, you cant drive\n");
}
else{
    printf("You can drive");
}
return 0;
}