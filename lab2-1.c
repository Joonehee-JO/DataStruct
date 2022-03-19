#include <stdio.h>

int main(){
    char charType;      //char형 변수 선언
    int integerType;    //int형 변수 선언
    float floatType;    //float형 변수 선언
    double doubleType;  //double형 변수 선언

    printf("Size of char : %ld bytes\n", sizeof(charType));     //선언한 변수 charType의 사이즈를 출력, char 1바이트가 나옴
    printf("Size of int : %ld bytes\n", sizeof(integerType));   //선언한 변수 integerType의 사이즈를 출력, int 4바이트가 나옴
    printf("Size of float : %ld bytes\n", sizeof(floatType));   //선언한 변수 floatType의 사이즈를 출력, float 4바이트가 나옴
    printf("Size of double : %ld bytes\n", sizeof(doubleType)); //선언한 변수 doubleType의 사이즈를 출력, double 8바이트가 나옴

    printf("-----------------------------------------\n");

    printf("Size of char : %ld bytes\n", sizeof(char));         //실제 자료형의 크기를 출력, char 1바이트가 나옴
    printf("Size of int : %ld bytes\n", sizeof(int));           //실제 자료형의 크기를 출력, int 4바이트가 나옴
    printf("Size of float : %ld bytes\n", sizeof(float));       //실제 자료형의 크기를 출력, float 4바이트가 나옴
    printf("Size of double : %ld bytes\n", sizeof(double));     //실제 자료형의 크기를 출력, double 8바이트가 나옴

    printf("-----------------------------------------\n");

    printf("Size of char* : %ld byte\n", sizeof(char*));        //char 포인터변수의 크기를 출력, 32비트 머신이기에 4바이트가 나옴
    printf("Size of int* : %ld byte\n", sizeof(int*));          //int 포인터변수의 크기를 출력, 32비트 머신이기에 4바이트가 나옴
    printf("Size of float* : %ld byte\n", sizeof(float*));      //float 포인터변수의 크기를 출력, 32비트 머신이기에 4바이트가 나옴
    printf("Size of double* : %ld byte\n", sizeof(double*));    //double 포인터변수의 크기를 출력, 32비트 머신이기에 4바이트가 나옴
    printf("-----------------------------------------\n");
    printf("[----- [JoonHee Cho] [2017038076] -----]\n");

    return 0;
}