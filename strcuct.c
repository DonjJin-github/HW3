#include <stdio.h>
//student1 ����ü ����
struct student1 {
char lastName;
int studentId;
char grade;
};
//student2 ����ü ����
typedef struct {
char lastName;
int studentId;
char grade;
} student2;

int main() 
{
printf("[----- [Your Name] [Student ID] -----]\n"); //""���� ���� ���
printf("\t�ֵ���\t    2019038016\t\n\n");           //""�� ������ �̸�, �й� ���
struct student1 st1 = {'A', 100, 'A'}; //st1 ��ü ���� �� ��ü���� ���� ���� �ʱ�ȭ
printf("st1.lastName = %c\n", st1.lastName); //st1��ü�� lastname ���
printf("st1.studentId = %d\n", st1.studentId);//st1��ü�� studentId ���
printf("st1.grade = %c\n", st1.grade);//st1��ü�� grdae ���
student2 st2 = {'B', 200, 'B'};//st2 ��ü ���� �� ��ü���� ���� ���� �ʱ�ȭ
printf("\nst2.lastName = %c\n", st2.lastName);//st2��ü�� lastname ���
printf("st2.studentId = %d\n", st2.studentId);//st2��ü�� studentId ���
printf("st2.grade = %c\n", st2.grade);//st2��ü�� grdae ���
student2 st3; //st3��ü ����
st3 = st2; //st3��ü�� st2��ü ����
printf("\nst3.lastName = %c\n", st3.lastName);//st3��ü�� lastname ���
printf("st3.studentId = %d\n", st3.studentId);//st3��ü�� studentId ���
printf("st3.grade = %c\n", st3.grade);//st3��ü�� grdae ���
/* equality test 
if(st3 == st2) /* not working 
printf("equal\n");
else
printf("not equal\n");*/
return 0;
}