#include<stdio.h>
#include<string.h>

//Creating a structure variable to store the record of students
typedef struct studentGradeManagement{
    char name[100];
    int class;
    int rollNumber;
    int marks[5];
} studentGradeManagement;

int main(){

    //Declaring a variable student of type studentGradeManagement
    studentGradeManagement student;

    //Prompting input from user
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

    //Calculating total marks of the students
    for (int i = 0; i < 5; i++)
        totalMarks = totalMarks + student.marks[i];

    //Calculating average marks of the students
    float averageMarks = (float) totalMarks / 5;

    //Calculating percentage iof the students
    float percentage =  ((float)totalMarks / 500) * 100;

    int highestMarks = student.marks[0];
    int lowestMarks = student.marks[0];

    for(int i = 0; i < 5; i++){
        //Calculating the highest marks
        if (student.marks[i] > highestMarks)
            highestMarks = student.marks[i];

        //Calculating the lowest marks
        if (student.marks[i] < lowestMarks)
            lowestMarks = student.marks[i];
    }

    //Displaying the output
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
