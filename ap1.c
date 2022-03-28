#include <stdio.h>
#include <stdlib.h>
void main()
{
    printf("[----- [Your Name] [Student ID] -----]\n"); //""안의 내용 출력
    printf("\t최동진\t    2019038016\t\n\n");           //""의 내용인 이름, 학번 출력
    int list[5]; //list[5]배열 선언
    int *plist[5] = {NULL,}; //포인터 배열 *plist[5] 선언 후 NULL로 초기화
    plist[0] = (int *)malloc(sizeof(int));  //plist[0]을 (int*)형으로 int의 크기만큼 동적 메모리 할당
    list[0] = 1; //list[0]에 정수 1 저장
    list[1] = 100; //list[1]에 정수 100 저장
    *plist[0] = 200; //*plist[0]에 200 저장
    printf("value of list[0] = %d\n", list[0]); //list[0]의 값 출력 (=1)
    printf("address of list[0] = %p\n", &list[0]); //list[0]의 주소를 16진수로 출력
    printf("value of list = %p\n", list); //list을 16진수로 출력(=list[0]의 주소) 
    printf("address of list (&list) = %p\n", &list); //list의 주소를 16진수로 출력(=list[0]의 주소)
    printf("----------------------------------------\n\n");
    printf("value of list[1] = %d\n", list[1]); //list[1]의 값 출력 (=100)w
    printf("address of list[1] = %p\n", &list[1]); //list[1]의 주소를 16진수로 출력
    printf("value of *(list+1) = %d\n", *(list + 1)); //*(lsit+1)의 값 출력(=list[1]의 값)
    printf("address of list+1 = %p\n", list+1);//list+1을 16진수로 출력(=list[1]의 주소)
    printf("----------------------------------------\n\n");
    printf("value of *plist[0] = %d\n", *plist[0]);// *plist[0]의 값 출력
    printf("&plist[0] = %p\n", &plist[0]); //plist[0]의 주소를 16진수로 출력
    printf("&plist = %p\n", &plist); //plist의 주소를 16진수로 출력(=plist[0]의 주소)
    printf("plist = %p\n", plist); //plist를 16진수로 출력 (=plist[0]의 주소)
    printf("plist[0] = %p\n", plist[0]); //plsit[0]을 16진수로 출력(=00B216A8)
    printf("plist[1] = %p\n", plist[1]); //plsit[1]을 16진수로 출력 (=0)
    printf("plist[2] = %p\n", plist[2]); //plsit[2]을 16진수로 출력 (=0)
    printf("plist[3] = %p\n", plist[3]); //plsit[3]을 16진수로 출력 (=0)
    printf("plist[4] = %p\n", plist[4]); //plsit[4]을 16진수로 출력 (=0)
    free(plist[0]); //동적으로 할당한 메모리 해제
}