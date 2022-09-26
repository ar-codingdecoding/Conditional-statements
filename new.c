#include <stdio.h>
int main() 
{

    int marks;
    printf("enter your marks here\n");        

     scanf("%d", &marks);
     printf("You have entered %d marks\n", marks);
if (marks>75)
{
    printf("You are eligible for KVPY exam!\n", marks);

}
else if (marks<75)
{
    printf("you have to submit JEE mains marks\n", marks);


int JEE_marks;
printf("Enter Your Percentile\n");
scanf("%d", &JEE_marks);
printf("You have entered %d percentile\n", JEE_marks);
if (JEE_marks>90)
{
    printf("Congratulations You are eligible for next round!");
}
else{
    printf("Try again next year, Good Luck!");
}
}


  return 0;

}