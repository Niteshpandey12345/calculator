#include<stdio.h>
int main()
{
    char operate;
    float number1,number2,result=0;
    
    printf("\n Please enter an operator (+, -, *, /) : ");
    scanf("%c", &operate);

    printf("\n Please enter the values : number1 and number2 : ");
    scanf("%f %f", &number1, &number2);

    switch(operate)
    {
        case '+':
            result = number1 + number2;
            break;
        case '-': 
            result = number1 - number2;
            break;
        case '*':
            result = number1 * number2;
            break;
        case '/':
            result = number1 / number2;
            break;
        default:
            printf("\n please enter valid operator");
    }
    printf("\n the result of %.2f %c %.2f = %.2f", number1, operate, number2, result);
    return 0;
}