#include <stdio.h>
#include <stdlib.h>
void main()
{
    printf("[----- [Your Name] [Student ID] -----]\n"); //""���� ���� ���
    printf("\t�ֵ���\t    2019038016\t\n\n");           //""�� ������ �̸�, �й� ���
    int list[5]; //list[5]�迭 ����
    int *plist[5] = {NULL,}; //������ �迭 *plist[5] ���� �� NULL�� �ʱ�ȭ
    plist[0] = (int *)malloc(sizeof(int));  //plist[0]�� (int*)������ int�� ũ�⸸ŭ ���� �޸� �Ҵ�
    list[0] = 1; //list[0]�� ���� 1 ����
    list[1] = 100; //list[1]�� ���� 100 ����
    *plist[0] = 200; //*plist[0]�� 200 ����
    printf("value of list[0] = %d\n", list[0]); //list[0]�� �� ��� (=1)
    printf("address of list[0] = %p\n", &list[0]); //list[0]�� �ּҸ� 16������ ���
    printf("value of list = %p\n", list); //list�� 16������ ���(=list[0]�� �ּ�) 
    printf("address of list (&list) = %p\n", &list); //list�� �ּҸ� 16������ ���(=list[0]�� �ּ�)
    printf("----------------------------------------\n\n");
    printf("value of list[1] = %d\n", list[1]); //list[1]�� �� ��� (=100)w
    printf("address of list[1] = %p\n", &list[1]); //list[1]�� �ּҸ� 16������ ���
    printf("value of *(list+1) = %d\n", *(list + 1)); //*(lsit+1)�� �� ���(=list[1]�� ��)
    printf("address of list+1 = %p\n", list+1);//list+1�� 16������ ���(=list[1]�� �ּ�)
    printf("----------------------------------------\n\n");
    printf("value of *plist[0] = %d\n", *plist[0]);// *plist[0]�� �� ���
    printf("&plist[0] = %p\n", &plist[0]); //plist[0]�� �ּҸ� 16������ ���
    printf("&plist = %p\n", &plist); //plist�� �ּҸ� 16������ ���(=plist[0]�� �ּ�)
    printf("plist = %p\n", plist); //plist�� 16������ ��� (=plist[0]�� �ּ�)
    printf("plist[0] = %p\n", plist[0]); //plsit[0]�� 16������ ���(=00B216A8)
    printf("plist[1] = %p\n", plist[1]); //plsit[1]�� 16������ ��� (=0)
    printf("plist[2] = %p\n", plist[2]); //plsit[2]�� 16������ ��� (=0)
    printf("plist[3] = %p\n", plist[3]); //plsit[3]�� 16������ ��� (=0)
    printf("plist[4] = %p\n", plist[4]); //plsit[4]�� 16������ ��� (=0)
    free(plist[0]); //�������� �Ҵ��� �޸� ����
}