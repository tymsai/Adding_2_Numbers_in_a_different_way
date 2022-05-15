
#include<stdio.h>
#include<conio.h>
#pragma GCC diagnostic ignored "-Wint-conversion"
#pragma GCC diagnostic ignored "-Wimplicit-function-declaration"
#define k 4
int result;
int add(int* ptr1, int *ptr2){
    for(int i=1;i!=*ptr2+1;i++)
        result = *ptr1+i;
    return (void*)&result;
}
int main(){
    static unsigned int num1, num2;
    register int check=0;
    printf("Enter 2 Numbers to ADD\n");
    if((check=scanf("%d%d", &num1, &num2)==k/2?2:0)==0){
        printf("You entered a wrong number !!!");
    }
    else{
        printf("Adding\n");
        sleep(1);
        int * result = add(&num1, &num2);
        printf("%d", *result);
    }
}
