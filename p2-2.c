#include <stdio.h>
void print1 (int *ptr, int rows); //void print1�Լ� ���� ����
int main()
{
printf("[----- [Your Name] [Student ID] -----]\n"); //""���� ���� ���
printf("\t�ֵ���\t    2019038016\t\n\n");           //""�� ������ �̸�, �й� ���
int one[] = {0, 1, 2, 3, 4}; //one �迭 ���� �� {0, 1, 2, 3, 4}�� �ʱ�ȭ
printf("one = %p\n", one); //one�� 16������ ���(=one[0]�� �ּ�)
printf("&one = %p\n", &one);//one�� �ּ� 16������ ���(=one[0]�� �ּ�)
printf("&one[0] = %p\n", &one[0]);//one[0]�� �ּҸ� 16������ ���
printf("\n");
print1(&one[0], 5);//print1�Լ� ȣ��
return 0;
}
void print1 (int *ptr, int rows)
{/* print out a one-dimensional array using a pointer */
int i; //���� i ����
printf ("Address \t Contents\n"); 
for (i = 0; i < rows; i++)//i=0���� rows ���� �ݺ��ϴ� �ݺ���
printf("%p \t %5d\n", ptr + i, *(ptr + i));//ptr+i(=ptr[i]�� �ּ�)�� 16������ ���, *(ptr+i)�� ��(=ptr[i]) ���
printf("\n");
}