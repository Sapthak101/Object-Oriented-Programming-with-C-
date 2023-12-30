#include<stdio.h>
#include<string.h>

struct data_319
{
    char name_319[100];
    int roll_no_319;
    int marks_319[100];
    int sum_319;
    char sub_319[100][100];
};

int main()
{
 struct data_319 st_details_319[100];
 int i_319, j_319, n1_319, n2_319;

 printf("Enter the number of student for whom you want to enter the data: \n");
 scanf("%d", &n1_319);
 printf("Enter the number of subject for which you want the marks: \n");
 scanf("%d", &n2_319);

 printf("Enter the data of the students: \n");
 for (i_319=0; i_319<n1_319; i_319++)
 {
    printf("Enter name: \n");
    scanf("%s", st_details_319[i_319].name_319);  

    printf("Enter Roll No.: \n");
    scanf("%d", &st_details_319[i_319].roll_no_319);

    for (j_319=0; j_319<n2_319; j_319++)
    {
        printf("Enter the subject name: \n");
        scanf("%s", st_details_319[i_319].sub_319[j_319]);

        printf("Enter the obtained number: \n");
        scanf("%d", &st_details_319[i_319].marks_319[j_319]);
    }  
 }
 
 printf("The entered data of the students: \n");
 for (i_319=0; i_319<n1_319; i_319++)
 {
    printf("Name: %s\n", st_details_319[i_319].name_319);
    printf("Roll No.: %d\n", st_details_319[i_319].roll_no_319);

    for (j_319=0; j_319<n2_319; j_319++)
    {
        printf("Enter the subject name: \n");
        printf("%s \n", st_details_319[i_319].sub_319[j_319]);

        printf("Enter the obtained number: \n");
        printf("%d", st_details_319[i_319].marks_319[j_319]);
    }  
 }
                        
 return 0;
}