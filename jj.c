#include <stdio.h>
#include <string.h>

#define NUM_STUDENTS 30
#define NUM_SUBJECTS 5
#define MAX_NAME_LENGTH 50

void add_student(char names[NUM_STUDENTS][MAX_NAME_LENGTH], int grades[NUM_STUDENTS][NUM_SUBJECTS], int index, const char *name, int grade_values[NUM_SUBJECTS])
{
    strcpy(names[index], name);
    for (int i = 0; i < NUM_SUBJECTS; i++)
    {
        grades[index][i] = grade_values[i];
    }
}

void concatenate_and_compare_names(char name1[MAX_NAME_LENGTH], char name2[MAX_NAME_LENGTH])
{
    char concatenated[MAX_NAME_LENGTH * 2];
    strcpy(concatenated, name1);
    strcat(concatenated, name2);
    printf("Concatenated Name: %s\n", concatenated);
    printf("Are names equal? %s\n", strcmp(name1, name2) == 0 ? "Yes" : "No");
}

void find_highest_grade_per_subject(int grades[NUM_STUDENTS][NUM_SUBJECTS], int highest_grades[NUM_SUBJECTS])
{
    for (int i = 0; i < NUM_SUBJECTS; i++)
    {
        highest_grades[i] = 0;
    }

    for (int i = 0; i < NUM_STUDENTS; i++)
    {
        for (int j = 0; j < NUM_SUBJECTS; j++)
        {
            if (grades[i][j] > highest_grades[j])
            {
                highest_grades[j] = grades[i][j];
            }
        }
    }
}

int main()
{
    char names[NUM_STUDENTS][MAX_NAME_LENGTH];
    int grades[NUM_STUDENTS][NUM_SUBJECTS];
    const char *subjects[NUM_SUBJECTS] = {"Math", "English", "Science", "History", "Art"};
    int highest_grades[NUM_SUBJECTS];

    // Adding 30 students with grades in 5 subjects
    for (int i = 0; i < NUM_STUDENTS; i++)
    {
        char name[MAX_NAME_LENGTH];
        sprintf(name, "Student%d", i + 1);
        int grade_values[NUM_SUBJECTS];
        for (int j = 0; j < NUM_SUBJECTS; j++)
        {
            grade_values[j] = (i + 1) * 3;
        }
        add_student(names, grades, i, name, grade_values);
    }

    // Concatenating and comparing student names
    concatenate_and_compare_names("Student1", "Student2");

    // Finding and displaying the highest grade in each subject
    find_highest_grade_per_subject(grades, highest_grades);
    printf("Highest Grades per Subject:\n");
    for (int i = 0; i < NUM_SUBJECTS; i++)
    {
        printf("%s: %d\n", subjects[i], highest_grades[i]);
    }

    return 0;
}
