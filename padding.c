#include <stdio.h>
struct student { // student ����ü ����
char lastName[13]; /* 13 bytes */
int studentId; /* 4 bytes */
short grade; /* 2 bytes */
};

int main()
{
printf("[----- [Your Name] [Student ID] -----]\n"); //""���� ���� ���
printf("\t�ֵ���\t    2019038016\t\n\n");           //""�� ������ �̸�, �й� ���   
struct student pst; //student ��ü pst ����
printf("size of student = %ld\n", sizeof(struct student)); //student����ü�� �޸� ũ�� ���
printf("size of int = %ld\n", sizeof(int)); //int�� �޸� ũ�� ���
printf("size of short = %ld\n", sizeof(short)); //short�� �޸� ũ�� ���
return 0;
}