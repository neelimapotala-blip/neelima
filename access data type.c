#include <stdio.h>
#include <string.h>

struct student
{
    int rno;
    char name[50];
    float per;
};

int main()
{
    struct student s1, s2;

    s1.rno = 976;
    strcpy(s1.name, "NEELIMA");
    s1.per = 83.8;

    printf("Enter student 2 details (rollno name percentage): ");
    scanf("%d %s %f", &s2.rno, s2.name, &s2.per);

    printf("\nStudent 1 details are:\n");
    printf("Student roll no is %d\n", s1.rno);
    printf("Student name is %s\n", s1.name);
    printf("Student percentage is %.2f\n", s1.per);

    printf("\nStudent 2 details are:\n");
    printf("Student roll no is %d\n", s2.rno);
    printf("Student name is %s\n", s2.name);
    printf("Student percentage is %.2f\n", s2.per);

    return 0;
}
