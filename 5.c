#include <stdio.h>

int Factorial (int number)
{

    if (number == 1 || number ==0)
    {
        return 1;
    }

    else
    {
        return (number * Factorial (number - 1));
    }
}

int main()
{
    int num;
    printf("Enter the number you want Factorial of\n"); //error de rhi h pta 
    // nii kyu iske bina error nii arha
    scanf("%d", &num);  

    printf("the Factorial of given number %d is %d", num, Factorial(num));  

    return 0;
}