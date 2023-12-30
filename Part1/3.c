#include<stdio.h>
#include<stdlib.h>

struct data
{
    char name[100];
    int age, id; 
    float basic_pay, gross_pay;
};
int main()
{
 struct data *ptr;
 int n, i;

 printf("Enter the number of record files you want to open: \n");
 scanf("%d", &n);

 ptr = (struct data*) malloc(n * sizeof(struct data));
 
    for (i=0; i<n; i++)
    {
        printf("Enter the id, name, age, Basic pay of employee $ %d: \n", i+1);
        scanf("%d %s %d %f", &(ptr+i)->id, (ptr+i)->name, &(ptr+i)->age, 
                                                      &(ptr+i)->basic_pay);
    
        (ptr+i)->gross_pay=(0.10*(ptr+i)->basic_pay)+(ptr+i)->basic_pay+
        (0.80*(ptr+i)->basic_pay) ;
    }

    for (i=0; i<n; i++)
    {
    
        printf("\nId: %d, Name: %s, Age: %d, Gross Pay $: %.2f\n", 
        (ptr+i)->id, (ptr+i)->name, 
        (ptr+i)->age, (ptr+i)->gross_pay);
    }

   free(ptr);

return 0;
}