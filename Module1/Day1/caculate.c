#include <stdio.h>

int main() {
    int roll_no, physics_marks, math_marks, chemistry_marks;
    char name[100];

    printf("Enter Roll No: ");
    scanf("%d", &roll_no);

    printf("Enter Name: ");
    scanf(" %[^\n]s", name); 

    printf("Enter Marks in Physics: ");
    scanf("%d", &physics_marks);
    printf("Enter Marks in Maths: ");
    scanf("%d", &math_marks);

    printf("Enter Marks in Chemistry: ");
    scanf("%d", &chemistry_marks);

    int total_marks = physics_marks + math_marks + chemistry_marks;
    float percentage = (float) total_marks / 3;

    printf("\nSummary\n");
    printf("Roll No: %d\n", roll_no);
    printf("Name: %s\n", name);
    printf("Physics Marks: %d\n", physics_marks);
    printf("Math Marks: %d\n", math_marks);
    printf("Chemistry Marks: %d\n", chemistry_marks);
    printf("Total Marks: %d\n", total_marks);
    printf("Percentage: %.2f%%\n", percentage);

    return 0;
}
