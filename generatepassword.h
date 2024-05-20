#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>

char Password(int a,int b,int c,int d,char password[],int length){
//1
if(a==1&&b==1&&c==1&&d==1){
    char str1[] = "ABCDEFGHIJKLM#$^&*-_=+:.NOPQRS012345TUVWXYZabc#$^&*-_=+defghijklmnopqrstuvwxyz0123456789!@#$^&*?";
    for (int i = 0; i < length; i++) {
        int index = rand() % (strlen(str1));
            password[i] = str1[index];
    }
    password[length] = '\0'; 
    printf("Password is: %s",password);
    }
//2
else if(a==0&&b==1&&c==1&&d==1){
    char str1[] = "ABCDEFGHIJKLMNOPQRS012345TUVWXYZabcdefghijklmnopqrstuvwxyz0123456789";
    for (int i = 0; i < length; i++) {
        int index = rand() % (strlen(str1));
            password[i] = str1[index];    
    }
    password[length] = '\0'; 
    printf("Password is: %s",password);
    } 
//3
else if(a==0&&b==0&&c==1&&d==1){
    char str1[] = "abcdefghijklmnopqrstuvwxyz0123456789";
    for (int i = 0; i < length; i++) {
        int index = rand() % (strlen(str1));
            password[i] = str1[index];
    }
    password[length] = '\0'; 
    printf("Password is: %s",password);
    }
//4
else if(a==0&&b==0&&c==0&&d==1){
    char str1[] = "0123456789";
    for (int i = 0; i < length; i++) {
        int index = rand() % (strlen(str1));
            password[i] = str1[index];
    }
    password[length] = '\0'; 
    printf("Password is: %s",password);
    }
//5
else if(a==1&&b==0&&c==0&&d==0){
    char str1[] = "!@#$%^&*_-+=<>?/':.";
    for (int i = 0; i < length; i++) {
        int index = rand() % (strlen(str1));
            password[i] = str1[index];
    }
    password[length] = '\0'; 
    printf("Password is: %s",password);
    }
//6
else if(a==1&&b==0&&c==1&&d==0){
    char str1[] = "a!@#$%^&*_-+=<>?/':.bcdefghijklmnopqrstuvwxyz";
    for (int i = 0; i < length; i++) {
        int index = rand() % (strlen(str1));
            password[i] = str1[index];
    }
    password[length] = '\0'; 
    printf("Password is: %s",password);
    }
//7
else if(a==0&&b==1&&c==0&&d==1){
    char str1[] = "ABCDEFGHIJKLMNOPQRS012345TUVWXYZ6789";
    for (int i = 0; i < length; i++) {
        int index = rand() % (strlen(str1));
            password[i] = str1[index];
    }
    password[length] = '\0'; 
    printf("Password is: %s",password);
    }
//8
else if(a==1&&b==1&&c==0&&d==0){
    char str1[] = "ABCDEFGHIJKLM!@#$%^&*_-+=<>?/':.NOPQRSTUVWXYZ";
    for (int i = 0; i < length; i++) {
        int index = rand() % (strlen(str1));
            password[i] = str1[index];
    }
    password[length] = '\0'; 
    printf("Password is: %s",password);
    }
//9
else if(a==1&&b==1&&c==1&&d==0){
    char str1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
    for (int i = 0; i < length; i++) {
        int index = rand() % (strlen(str1));
            password[i] = str1[index];
        }
    password[length] = '\0'; 
    printf("Password is: %s",password);
    }
//10
else if(a==1&&b==0&&c==1&&d==1){
    char str1[] = "012345abcdefghijklmnopqrstuvwxyz0123456789";
    for (int i = 0; i < length; i++) {
        int index = rand() % (strlen(str1));
            password[i] = str1[index];
        }
    password[length] = '\0'; 
    printf("Password is: %s",password);
    }
//11
else if(a==1&&b==1&&c==0&&d==1){
    char str1[] = "ABCDEFGHIJKLMNOPQRS012345TUVWXYZ0123456789";
    for (int i = 0; i < length; i++) {
        int index = rand() % (strlen(str1));
            password[i] = str1[index];
        }
    password[length] = '\0'; 
    printf("Password is: %s",password);
    }
//12
else if(a==0&&b==1&&c==0&&d==0){
    char str1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    for (int i = 0; i < length; i++) {
        int index = rand() % (strlen(str1));
            password[i] = str1[index];
        }
    password[length] = '\0'; 
    printf("Password is: %s",password);
    }
//13
else if(a==1&&b==0&&c==0&&d==1){
    char str1[] = "ABCDEFGHIJKLMNOPQRS012345TUVWXYZ56789";
    for (int i = 0; i < length; i++) {
        int index = rand() % (strlen(str1));
            password[i] = str1[index];
    }
    password[length] = '\0'; 
    printf("Password is: %s",password);
    }
//14
else if(a==0&&b==0&&c==1&&d==0){
    char str1[] = "abcdefghijklmnopqrstuvwxyz";
    for (int i = 0; i < length; i++) {
        int index = rand() % (strlen(str1));
            password[i] = str1[index];
    }
    password[length] = '\0'; 
    printf("Password is: %s",password);
    }
//15
else if(a==0&&b==1&&c==1&&d==0){
    char str1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
    for (int i = 0; i < length; i++) {
        int index = rand() % (strlen(str1));
            password[i] = str1[index];
    }
    password[length] = '\0'; 
    printf("Password is: %s",password);
    }
else
    printf("Invalid combination of input flags.\n");
}