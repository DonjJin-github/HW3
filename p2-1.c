#include <stdio.h>
#define MAX_SIZE 100 //#define 매크로를 사용하여 MAX_SIZE = 100
float sum(float [], int); //sum함수 원형 선언
float input[MAX_SIZE], answer; //input[MAX_SIZE], answer를 전역변수로 선언
int i; //i를 전역변수로 선언
void main(void)
{
printf("[----- [Your Name] [Student ID] -----]\n"); //""안의 내용 출력
printf("\t최동진\t    2019038016\t\n\n");           //""의 내용인 이름, 학번 출력
for(i=0; i < MAX_SIZE; i++)//i=0부터 100까지 반복되는 반복문
input[i] = i;//input[i]에 i저장
/* for checking call by reference */
printf("address of input = %p\n", input); //input을 16진수로 출력(=input[0]의 주소)
answer = sum(input, MAX_SIZE);//answer에 sum(input, MAX_SIZE)의 리턴 값 저장,sum함수의 printf안의 내용 출력
printf("The sum is: %f\n", answer); //answer값을 10진수로 출력
}

float sum(float list[], int n)
{
printf("value of list = %p\n", list); //list를 16진수로 출력(=list[0]의 주소)
printf("address of list = %p\n\n", &list);//list자체의 고유 주소 출력
int i; //변수 i 선언
float tempsum = 0; //tempsum선언 후 0으로 초기화
for(i = 0; i < n; i++)//i=0부터 i<n까지 반복되는 반복문
tempsum += list[i];//tempsum에 list[i]의 값을 더하고 저장
return tempsum; //tempsum으로 리턴
}