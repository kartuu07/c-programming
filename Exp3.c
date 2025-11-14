// Name : Kartvya Bhoir //
// Branch : Civil 
// Div : B //
// Roll no. 25 //333
// UIN : 251C034 //
#include <stdio.h>

int main(){
    start:
    char op;
    int num1, num2, result;


    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &op);
    if(op == 'e'){
        return 0;
    }
    printf("Enter the number: ");
    scanf("%d",&num1);
    printf("Enter the Number: ");
    scanf("%d",&num2);
    

    switch (op)
    {
    case '+':
        result = num1 + num2;
        printf("%d + %d = %d\n", num1, num2, result);
        goto start;
        break;

    case '-':
        result = num1 - num2;
        printf("%d - %d = %d\n", num1, num2, result);
        goto start;
        break;

    case '*':
        result = num1 * num2;
        printf("%d * %d = %d\n", num1, num2, result);
        goto start;
        break;

    case '/':
        if (num2 != 0)
        {
            
            
            printf("%d / %d = %f\n",num1,num2,  (float)num1/num2);
        }
        else
        {
            printf("Error! Division by zero is not allowed.\n");
        }
        goto start;
        break;
     
     
}

    return 0;
}