#include <stdio.h>
#define MAX_SIZE 100 //#define ��ũ�θ� ����Ͽ� MAX_SIZE = 100
float sum(float [], int); //sum�Լ� ���� ����
float input[MAX_SIZE], answer; //input[MAX_SIZE], answer�� ���������� ����
int i; //i�� ���������� ����
void main(void)
{
printf("[----- [Your Name] [Student ID] -----]\n"); //""���� ���� ���
printf("\t�ֵ���\t    2019038016\t\n\n");           //""�� ������ �̸�, �й� ���
for(i=0; i < MAX_SIZE; i++)//i=0���� 100���� �ݺ��Ǵ� �ݺ���
input[i] = i;//input[i]�� i����
/* for checking call by reference */
printf("address of input = %p\n", input); //input�� 16������ ���(=input[0]�� �ּ�)
answer = sum(input, MAX_SIZE);//answer�� sum(input, MAX_SIZE)�� ���� �� ����,sum�Լ��� printf���� ���� ���
printf("The sum is: %f\n", answer); //answer���� 10������ ���
}

float sum(float list[], int n)
{
printf("value of list = %p\n", list); //list�� 16������ ���(=list[0]�� �ּ�)
printf("address of list = %p\n\n", &list);//list��ü�� ���� �ּ� ���
int i; //���� i ����
float tempsum = 0; //tempsum���� �� 0���� �ʱ�ȭ
for(i = 0; i < n; i++)//i=0���� i<n���� �ݺ��Ǵ� �ݺ���
tempsum += list[i];//tempsum�� list[i]�� ���� ���ϰ� ����
return tempsum; //tempsum���� ����
}