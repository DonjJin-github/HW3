#include <stdio.h>
#include <stdlib.h>
void main()
{
printf("[----- [Your Name] [Student ID] -----]\n"); //""���� ���� ���
printf("\t�ֵ���\t    2019038016\t\n\n");           //""�� ������ �̸�, �й� ���
    int list[5]; //list[5]�迭 ����
    int *plist[5]; //�����͹迭 *plist[5]����
    list[0] = 10; //list[0]�� 10����
    list[1] = 11; //list[1]�� 11����
    plist[0] = (int*)malloc(sizeof(int)); //plist[0]�� (int*)������ int�� ũ�⸸ŭ �����Ҵ�
    printf("list[0] \t= %d\n", list[0]); //list[0]�� �� ��� (=10)
    printf("address of list \t= %p\n", list); //list�� 16������ ���
    printf("address of list[0] \t= %p\n", &list[0]); //list�� �ּҸ� 16������ ���
    printf("address of list + 0 \t= %p\n", list+0); //list+0�� 16������ ���(=list[0]�� �ּ�)
    printf("address of list + 1 \t= %p\n", list+1); //list+1�� 16������ ���(=list[1]�� �ּ�) 
    printf("address of list + 2 \t= %p\n", list+2); //list+2�� 16������ ���(=list[2]�� �ּ�)
    printf("address of list + 3 \t= %p\n", list+3); //list+3�� 16������ ���(=list[3]�� �ּ�)
    printf("address of list + 4 \t= %p\n", list+4); //list+4�� 16������ ���(=list[4]�� �ּ�)
    printf("address of list[4] \t= %p\n", &list[4]); //list[4]�� �ּҸ� 16������ ���
    free(plist[0]); //�������� �Ҵ��� �޸� ����
}