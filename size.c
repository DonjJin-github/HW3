#include<stdio.h>
#include<stdlib.h>
void main()
{
printf("[----- [Your Name] [Student ID] -----]\n"); //""���� ���� ���
printf("\t�ֵ���\t    2019038016\t\n\n");           //""�� ������ �̸�, �й� ���
int **x; //**x ����
printf("sizeof(x) = %lu\n", sizeof(x));//x�� �޸� ũ�� ���
printf("sizeof(*x) = %lu\n", sizeof(*x));//*x�� �޸� ũ�� ���
printf("sizeof(**x) = %lu\n", sizeof(**x));//**x�� �޸� ũ�� ���
}