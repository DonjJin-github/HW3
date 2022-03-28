#include <stdio.h>
//student1 구조체 선언
struct student1 {
char lastName;
int studentId;
char grade;
};
//student2 구조체 선언
typedef struct {
char lastName;
int studentId;
char grade;
} student2;

int main() 
{
printf("[----- [Your Name] [Student ID] -----]\n"); //""안의 내용 출력
printf("\t최동진\t    2019038016\t\n\n");           //""의 내용인 이름, 학번 출력
struct student1 st1 = {'A', 100, 'A'}; //st1 객체 선언 후 객체안의 변수 값들 초기화
printf("st1.lastName = %c\n", st1.lastName); //st1객체의 lastname 출력
printf("st1.studentId = %d\n", st1.studentId);//st1객체의 studentId 출력
printf("st1.grade = %c\n", st1.grade);//st1객체의 grdae 출력
student2 st2 = {'B', 200, 'B'};//st2 객체 선언 후 객체안의 변수 값들 초기화
printf("\nst2.lastName = %c\n", st2.lastName);//st2객체의 lastname 출력
printf("st2.studentId = %d\n", st2.studentId);//st2객체의 studentId 출력
printf("st2.grade = %c\n", st2.grade);//st2객체의 grdae 출력
student2 st3; //st3객체 선언
st3 = st2; //st3객체에 st2객체 저장
printf("\nst3.lastName = %c\n", st3.lastName);//st3객체의 lastname 출력
printf("st3.studentId = %d\n", st3.studentId);//st3객체의 studentId 출력
printf("st3.grade = %c\n", st3.grade);//st3객체의 grdae 출력
/* equality test 
if(st3 == st2) /* not working 
printf("equal\n");
else
printf("not equal\n");*/
return 0;
}