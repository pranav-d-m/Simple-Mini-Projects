#include<stdio.h>
int add(int x , int y);
int main()
{
    int a,b;
    char op;
    float res;

    printf("Enter any two numbers:");

    scanf("%d",&a);
    scanf("%d",&b);

    printf("Enter the operator '+','-','/','x' ");
    scanf("%c",&op);

    if (op != '+' ||op != '-' ||op != 'x' ||op != '/')
    {
        printf("Enter operator: ");
        scanf("%c",&op);
    }

    res = (op == '+') ? (a+b) :
          (op == '-') ? (a-b) :
          (op == 'x') ? (a*b) :
          (op == '/') ? ((b != 0) ? ((float)a / b) : 0.0) :
           0.0;
    
    if (op == '/' && b == 0) 
    {
        printf("Error: Cannot divide by zero.\n");
    } 
    else
    {
        printf("Result = %.2f\n", res);
    }
    return 0;
}
