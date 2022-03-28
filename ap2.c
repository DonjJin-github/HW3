#include <stdio.h>
#include <stdlib.h>
void main()
{
printf("[----- [Your Name] [Student ID] -----]\n"); //""안의 내용 출력
printf("\t최동진\t    2019038016\t\n\n");           //""의 내용인 이름, 학번 출력
    int list[5]; //list[5]배열 선언
    int *plist[5]; //포인터배열 *plist[5]선언
    list[0] = 10; //list[0]에 10저장
    list[1] = 11; //list[1]에 11저장
    plist[0] = (int*)malloc(sizeof(int)); //plist[0]을 (int*)형으로 int의 크기만큼 동적할당
    printf("list[0] \t= %d\n", list[0]); //list[0]의 값 출력 (=10)
    printf("address of list \t= %p\n", list); //list를 16진수로 출력
    printf("address of list[0] \t= %p\n", &list[0]); //list의 주소를 16진수로 출력
    printf("address of list + 0 \t= %p\n", list+0); //list+0를 16진수로 출력(=list[0]의 주소)
    printf("address of list + 1 \t= %p\n", list+1); //list+1를 16진수로 출력(=list[1]의 주소) 
    printf("address of list + 2 \t= %p\n", list+2); //list+2를 16진수로 출력(=list[2]의 주소)
    printf("address of list + 3 \t= %p\n", list+3); //list+3를 16진수로 출력(=list[3]의 주소)
    printf("address of list + 4 \t= %p\n", list+4); //list+4를 16진수로 출력(=list[4]의 주소)
    printf("address of list[4] \t= %p\n", &list[4]); //list[4]의 주소를 16진수로 출력
    free(plist[0]); //동적으로 할당한 메모리 해제
}