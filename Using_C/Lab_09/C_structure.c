// C_structure
#include <stdio.h>
#include <stdlib.h>

struct Student {
    int roll_no;
    char name[100];
    char branch[50];
    int batch_no;
};

int main() {
    int n;
    
    printf("Enter number of students: ");
    scanf("%d", &n);

    struct Student *students = (struct Student *)malloc(n * sizeof(struct Student));

    if (students == NULL) {
    printf("Memory allocation failed.\n");
    return 1;
}

    for (int i = 0; i < n; i++) {
        printf("\nStudent %d\n", i + 1);
        printf("Enter roll no: ");
        scanf(" %d", &students[i].roll_no);

        printf("Enter name: ");
        scanf(" %[^\n]s", students[i].name);

        printf("Enter branch: ");
        scanf(" %[^\n]s", students[i].branch);

        printf("Enter batch no: ");
        scanf(" %d", &(students[i].batch_no));
        // fflush(stdin);
    }

    printf("\n----- All Student Details -----\n");
    for (int i = 0; i < n; i++) {
        printf("\nStudent %d:\n", i + 1);
        printf("Roll No: %d\n", students[i].roll_no);
        printf("Name: %s\n", students[i].name);
        printf("Branch: %s\n", students[i].branch);
        printf("Batch No: %d\n", students[i].batch_no);
    }

    free(students);
    return 0;
}
