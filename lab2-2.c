#include <stdio.h>

int main(){
    int i;      //int형 변수 i 선언        
    int *ptr;   //int형 포인터변수 ptr선언
    int **dptr; //int형 이중포인터변수 dptr선언

    i=1234;     //i에 1024 할당

    printf("[checking values before ptr = &i]\n");  
    printf("value of i == %d\n",i);         //i의 값 출력, 1024가 나옴
    printf("address of i == %p\n",&i);      //i의 주소 출력, 0061FF1C 나옴
    printf("value of ptr == %p\n",ptr);     //포인터값 출력, 초기화를 안해줬기에 쓰레기값이 나옴
    printf("address of ptr == %p\n",&ptr);  //포인터변수의 주소 출력, 포인터변수도 변수이기에 0061FF18 나옴

    ptr = &i;   //포인터변수에 i의 주소 할당

    printf("[checking values before ptr = &i]\n");  
    printf("value of i == %d\n",i);         //i의 값 출력, 똑같이 1024가 나옴
    printf("address of i == %p\n",&i);      //i의 주소 출력,똑같이 0061FF1C 나옴
    printf("value of ptr == %p\n",ptr);     //포인터값 출력, i의 주소를 할당해줬기에 i주소 0061FF1C가 나옴
    printf("address of ptr == %p\n",&ptr);  //포인터변수의 주소 출력, 똑같이 0061FF18 나옴

    dptr = &ptr; //이중포인터에 포인터변수의 주소 할당

    printf("\n[checking values after dptr = &ptr]\n");
    printf("value of i == %d\n", i);            //i의 값 출력, 똑같이 1234가 나옴
    printf("address of i == %p\n", &i);         //i의 주소 출력, 똑같이 0061FF1C 나옴
    printf("value of ptr == %p\n", ptr);        //포인터값 출력, 똑같이 0061FF1C가 나옴        
    printf("address of ptr == %p\n", &ptr);     //포인터변수의 주소 출력, 똑같이 0061FF18 나옴
    printf("value of *ptr == %d\n", *ptr);      //포인터값 역참조해서 출력, 포인터가 현재 a의 메모리 주소를 가리키기에 1024가 나옴
    printf("value of dptr == %p\n", dptr);      //이중포인터변수의 값 출력, 포인터변수의 주소값을 갖고있기에 0061FF18가 나옴
    printf("address of dptr == %p\n", &dptr);   //dptr의 주소 출력, 이중포인터도 메모리상 주소를 갖고있기에 0061FF14가 나옴
    printf("value of *dptr == %p\n", *dptr);    //dptr의 값 역참조해서 출력, 한번 역참조하면 ptr이 갖고있는 i의 주소 0061FF1C가 나옴
    printf("value of **dptr == %d\n", **dptr);  //dptr의 값 두번 역참조해서 출력, i의 값 1234가 나옴

    *ptr = 7777; //ptr이 가리키는 곳, i의 메모리에 7777할당

    printf("\n[after *ptr = 7777]\n");
    printf("value of i == %d\n", i);            //i의 값 출력, ptr이 가리키는 곳에 7777을 할당해줬기에 7777이 나옴
    printf("value of *ptr == %d\n", *ptr);      //ptr의 값 역참조하여 출력, 마찬가지로 i의 메모리주소를 가리키기에 7777이나옴
    printf("value of **dptr == %d\n", **dptr);  //dptr의 값 두번 역참조하여 출력, 한번 역참조할시 i의주소가 두번 역참조시 i의 값 7777이 나옴

    **dptr = 8888; //dptr이 두번 역참조하여 가리키는 i의 메모리에 8888할당

    printf("\n[after **dptr = 8888]\n");
    printf("value of i == %d\n", i);            //i의 값 출력, 8888이나옴
    printf("value of *ptr == %d\n", *ptr);      //ptr이 가리키는 곳을 역참조하여 8888이 나옴
    printf("value of **dptr == %d\n", **dptr);  //마찬가지로 dptr이 가리키는 주소를 다시 한 번 역참조하여 8888이 나옴

    printf("[----- [JoonHee Cho] [2017038076] -----]\n");
    
    return 0;
}