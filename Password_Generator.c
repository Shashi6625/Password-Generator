#include<stdio.h>
#include<stdlib.h>
#include"generatepassword.h"
void main(){
    srand(time(NULL));
    int a,b,c,d;
    printf("Welcome to the Password generator! \n");
    SHASHI:
    printf("What would you want to include in your password? \n");
    printf("Include special characters (1 for yes, 0 for no): ");
    scanf("%d", &a);
    printf("Include uppercase letters (1 for yes, 0 for no): ");
    scanf("%d", &b);
    printf("Include lowercase letters (1 for yes, 0 for no): ");
    scanf("%d", &c);
    printf("Include numbers (1 for yes, 0 for no): ");
    scanf("%d", &d);
    printf("Enter the length of the password: ");
    int length;
    scanf("%d",&length);
    char password[length+1];
    if (length <= 0) 
        printf("Invalid length. Please enter a positive integer.\n");
    Password(a,b,c,d, password,length);
    printf("\nWant to generate another password?/Exit(1/0)\n");
    int m;
    scanf("%i",&m);
    if(m==1)
        goto SHASHI;
    else 
        exit(1);
}