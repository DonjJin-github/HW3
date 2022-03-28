#include<stdio.h>
#include<stdlib.h>
void main()
{
printf("[----- [Your Name] [Student ID] -----]\n"); //""안의 내용 출력
printf("\t최동진\t    2019038016\t\n\n");           //""의 내용인 이름, 학번 출력
int **x; //**x 선언
printf("sizeof(x) = %lu\n", sizeof(x));//x의 메모리 크기 출력
printf("sizeof(*x) = %lu\n", sizeof(*x));//*x의 메모리 크기 출력
printf("sizeof(**x) = %lu\n", sizeof(**x));//**x의 메모리 크기 출력
}