#include<stdio.h>
#include<string.h>
struct person {
    char name[20];
    int age;
};
struct Student
{
    int rollNO;
    char Section;
    int class;
    struct person p;
    
};

int main() {
    struct Student s;
    printf("Enter the name of students:");
    gets(s.p.name);
    printf("Enter the class: ");
    scanf("%d",&s.class);
    printf("Enter the rollno: ");
    scanf("%d",&s.rollNO);
    printf("Enter the section: ");
    getc(s.Section);
    // scanf("%c",&s.Section);
    printf("Enter the age of student: ");
    scanf("%d",&s.p.age);

    printf("\n\nName: %s \nClass: %d \nRollno: %d \nSection: %c \nAge: %d\n",s.p.name,s.class,s.rollNO,s.Section,s.p.age);

    return 0;
}


