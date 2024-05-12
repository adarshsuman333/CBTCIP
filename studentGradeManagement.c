#include<stdio.h>
#include<string.h>

typedef struct studentGradeManagement{
    char name[100];
    int class;
    int rollNumber;
    int marks[5];
} studentGradeManagement;

int main(){
    studentGradeManagement student;

    printf("Enter name : ");
    fgets(student.name, 100, stdin);

    printf("Enter class : ");
    scanf("%d", &student.class);

    printf("Enter roll number : ");
    scanf("%d", &student.rollNumber);

    for (int i = 0; i < 5; i++){
        printf("Enter your marks for subject %d : (out of 100)\n", i+1);
        scanf("%d", &student.marks[i]);
    }

    int totalMarks = 0;
    for (int i = 0; i < 5; i++)
        totalMarks = totalMarks + student.marks[i];

    float averageMarks = (float) totalMarks / 5;

    float percentage =  ((float)totalMarks / 500) * 100;

    int highestMarks = student.marks[0];
    int lowestMarks = student.marks[0];

    for(int i = 0; i < 5; i++){
        if (student.marks[i] > highestMarks)
            highestMarks = student.marks[i];

        if (student.marks[i] < lowestMarks)
            lowestMarks = student.marks[i];
    }

    printf("\n----------------------------------------------------\n");
    printf("\nName: %s\n", student.name);
    printf("Class: %d\n", student.class);
    printf("Roll Number: %d\n", student.rollNumber);
    printf("Total Marks: %d\n", totalMarks);
    printf("Average Marks: %.2f\n", averageMarks);
    printf("Highest Marks: %d\n", highestMarks);
    printf("Lowest Marks: %d\n", lowestMarks);
    printf("Percentage : %.2f\n", percentage);
    printf("\n----------------------------------------------------\n");
    return 0;
}