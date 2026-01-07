#include <stdio.h>
#include <math.h>
void menu();
double division(double,double);
double modulus(int,int);

int main()
{
    int choice;
    double first, second, result;
    while (1)
    {
        menu();
        scanf("%d", &choice);
        if (choice == 7)
        {
            break;
        }
        if (choice<1||choice>7)
        {
            fprintf(stderr,"Invalid Menu Choice");
            continue;
        }
        
        printf("\nPlease enter the first number: ");
        scanf("%lf", &first);
        printf("\nPlease enter the second number: ");
        scanf("%lf", &second);
        switch (choice)
        {
        case 1:
            result = first + second;

            break;
        case 2:
            result = first - second;

            break;
        case 3:
            result = first * second;

            break;
        case 4:
            result = division(first,second);

            break;
        case 5:
            result = modulus(first,second);
            break;
        case 6:
            result = pow(first, second);
            break;
        }
        if (!isnan(result))
        {
         printf("\nResult of operation is %.2f",result);
            
        }
        
        
    }

    return 0;
}
double division(double a,double b){
    if (b==0)
    {
        fprintf(stderr,"Invalid Argument for Division");
        return NAN;
    }else{
        return a/b;
    }
    
}
double modulus(int a,int b){
    if (b==0)
    {
        fprintf(stderr,"Invalid Argument for Modulus");
        return NAN;
    }else{
        return a%b;
    }
    
}
void menu()
{
    printf("\n\n-----------------------------------\n");
    printf("Welcome to Simple Calculator\n");
    printf("\nChoose one of the following options:");
    printf("\n1.Addition");
    printf("\n2.Substraction");
    printf("\n3.Multiply");
    printf("\n4.Divide");
    printf("\n5.Modulus");
    printf("\n6.Power");
    printf("\n7.Exit");
    printf("\nNow, enter your choice: ");
}