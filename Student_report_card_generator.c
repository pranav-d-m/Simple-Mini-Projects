#include<stdio.h>
float total(float s1, float s2, float s3, float s4, float s5)
{
    return s1+s2+s3+s4+s5;
}
float avg(float s1, float s2, float s3, float s4, float s5)
{
    return (s1+s2+s3+s4+s5)/5;
}
int main()
{
    char name; int roll;

    for(int i = 1; i <= 64; i++)
    {
        printf("Name: ");
        scanf("%s",name);
        printf("\nRoll.no: ");
        scanf("%d",roll);

        int m1,m2,m3,m4,m5;
        printf("Enter Math marks: ");
        scanf("%d",&m1);
        printf("\nEnter Science marks: ");
        scanf("%d",&m2);
        printf("\nEnter Social marks: ");
        scanf("%d",&m3);
        printf("\nEnter Kannada marks: ");
        scanf("%d",&m4);
        printf("\nEnter English marks: ");
        scanf("%d",&m5);

        printf("Total = ");
        float total(float m1, float m2, float m3, float m4, float m5);

        printf("Average = ");
        float avg(float m1, float m2, float m3, float m4, float m5);

        //Display
        printf("\nWELCOME TO CAR SCHOOL");

        for(int i = 0; i <= 10; i++)
        {
            printf("*");
        }
        printf("Name:               %s",name);
        printf("Roll.no:            %d",roll);
        printf("\t\tMarks\t\t");
        printf("MATHEMATICS:        %d",m1);
        printf("SCIENCE:            %d",m1);
        printf("SOCIAL SCIENCE:     %d",m1);
        printf("KANNADA:            %d",m1);
        printf("ENGLISH:            %d",m1);

        printf("Total:              ");
        float total(float m1, float m2, float m3, float m4, float m5);

        int sum = m1+m2+m3+m4+m5;
        printf("\nAverage:          ");
        float avg(float m1, float m2, float m3, float m4, float m5);

        if(sum >= 420)
        {
            printf("\nGrade:         A");
        }
        else if(sum < 420 && sum >= 370)
        {
            printf("\nGrade:          B");
        }
        else if(sum < 370 && sum >= 250)
        {
            printf("\nGrade:          C");
        }
        else if(sum < 250)
        {
            printf("\nGrade:          F");
        }
        else{
            printf("Invalid marks");
        }
    }
    return 0;
}