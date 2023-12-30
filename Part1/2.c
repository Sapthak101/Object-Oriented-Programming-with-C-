#include<stdio.h>
#include<string.h>

struct data_319
{
    char name_319[100];
    int roll_no_319;
    int marks_319[100];
    int sum_319;
    char sub_319[100][100];
    double percentage;
};

void task1(struct data_319 st_details_319[], int n1_319, int n2_319);
void task2(struct data_319 st_details_319[], int n1_319, int n2_319);
void task3(struct data_319 st_details_319[], int n1_319, int n2_319);
void task4(struct data_319 st_details_319[], int n1_319, int n2_319);

int main()
{
 struct data_319 st_details_319[100];
 int i_319, j_319, n1_319, n2_319, choice, sum, total_number, roll, temp, k_319, choice2;
 double upper, lower;

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
    for (i_319=0; i_319<n1_319; i_319++)
    {   
        for (j_319=0; j_319<n2_319; j_319++)
        {   
            sum=sum+st_details_319[i_319].marks_319[j_319];
        } 
          total_number=n2_319*100;
          st_details_319[i_319].percentage=((double)sum/total_number)*100;
          sum=0;
    }
 
 do
 {
 printf("Enter 1 to find total marks and percentage of all n students \n");
 printf("Enter 2 display details of a student with a given roll number \n");
 printf("Enter 3 display the details for all the students having percentage in a given range \n");
 printf("Enter 4 to sort the array in ascending order of marks \n");
 scanf("%d", &choice);
 
 switch(choice)
 {
    case 1:
    {
        task1(st_details_319, n1_319, n2_319);
        break;
    }
    case 2:
    {
        task2(st_details_319, n1_319, n2_319);
        break;
    }
    case 3:
    {
        task3(st_details_319, n1_319, n2_319);   
        break;
    }
    case 4:
    {
        task4(st_details_319, n1_319, n2_319);
        break;
    }
    default :
        printf("The requested operation is invalid");
 }

 printf("Do you want to continue, press 1 to continue or any number to exit: \n");

 scanf("%d", &choice2);
 } while (choice2==1);
 
 return 0;
}

void task1(struct data_319 st_details_319[], int n1_319, int n2_319)
{
     int i_319, j_319, sum, total_number, roll;

        for (i_319=0; i_319<n1_319; i_319++)
        {
            printf("Name: %s \n", st_details_319[i_319].name_319); 
            
            for (j_319=0; j_319<n2_319; j_319++)
            {   
                sum=sum+st_details_319[i_319].marks_319[j_319];
            } 
            printf("The sum of marks is: %d\n", sum);
            total_number=n2_319*100;
            printf("The percentage is: %lf \n", 
            ((double)sum/total_number)*100);
            sum=0;
        }
}

void task2(struct data_319 st_details_319[], int n1_319, int n2_319)
{
 int i_319, j_319, sum, total_number, roll;    

    printf("Enter Your Roll Number:  \n");
    scanf("%d", &roll);

    for (i_319=0; i_319<n1_319; i_319++)
        {
            if (st_details_319[i_319].roll_no_319==roll)
            {
                printf("Name: %s \n", st_details_319[i_319].name_319); 
                for (j_319=0; j_319<n2_319; j_319++)
                    {
                        printf("The subject name: \n");
                        printf("%s\n", st_details_319[i_319].sub_319[j_319]);

                        printf("The obtained number: \n");
                        printf("%d\n", st_details_319[i_319].marks_319[j_319]);
                    }  
            }  
        }
}

void task3(struct data_319 st_details_319[], int n1_319, int n2_319)
{
 int i_319, j_319;
 double upper, lower;

    printf("Enter the percentage range between which you want to see the student details: \n");
    scanf("%lf %lf", &lower, &upper);

        for (i_319=0; i_319<n1_319; i_319++)
        {   
            if (st_details_319[i_319].percentage>=lower && 
            st_details_319[i_319].percentage<=upper)
            {
                printf("Name: %s \n", st_details_319[i_319].name_319); 
                printf("Roll Number: %d\n", st_details_319[i_319].roll_no_319);
                for (j_319=0; j_319<n2_319; j_319++)
                    {
                        printf("The subject name: \n");
                        printf("%s\n", st_details_319[i_319].sub_319[j_319]);

                        printf("The obtained number: \n");
                        printf("%d\n", st_details_319[i_319].marks_319[j_319]);
                    }  
            }        
        }
}

void task4(struct data_319 st_details_319[], int n1_319, int n2_319)
{
 int i_319, j_319, temp, k_319;

        for (i_319=0; i_319<n1_319; i_319++)
        {   
            for (j_319=0; j_319<n2_319; j_319++)
            {
                for (k_319=j_319+1; k_319<n2_319; k_319++)
                    {
                        if (st_details_319[i_319].marks_319[j_319]>st_details_319[i_319].marks_319[k_319])
                            {
                                temp=st_details_319[i_319].marks_319[j_319];
                                st_details_319[i_319].marks_319[j_319]=
                                st_details_319[i_319].marks_319[k_319];
                                st_details_319[i_319].marks_319[k_319]=temp;
                            }
                    }    
            }
        }

        for (i_319=0; i_319<n1_319; i_319++)
        {   
            printf("The marks obtained by student in assending order %s\n", st_details_319[i_319].name_319);
            for (j_319=0; j_319<n2_319; j_319++)
            {
              printf("%d\n", st_details_319[i_319].marks_319[j_319]);
            }
        }
}