// type casting syntax
// (type) value;

// #include <stdio.h>
// int main()
// {
//     float b = 89.987;
//     printf("the type casted number is %d" ,(int) b);
//     return 0;
// }

// factorial of number by functions 

// #include <stdio.h>

// int Factorial (int number)
// {

//     if (number == 1 || number ==0)
//     {
//         return 1;
//     }

//     else
//     {
//         return (number * Factorial (number - 1));
//     }
// }

// int main()
// {
//     int num;
//     printf("Enter the number you want Factorial of\n"); //error de rhi h pta 
//     // nii kyu iske bina error nii arha
//     scanf("%d", &num);  

//     printf("the Factorial of given number %d is %d", num, Factorial(num));  

//     return 0;
// }

// factorial of numbers by loops

#include<stdio.h>
int main()
{
    int num;
    int factorial = 1 ;

     printf("Enter the number you want Factorial of\n");
     scanf("%d", &num);

    for(int i=1; i<=num; i++)
    {
        
        factorial = factorial * i;
    }
    if(num == 0 ||num ==1)
    {
        printf("the factorial of entered number %d is 1", num);
    }

    else
    {
        printf("the Factorial of given number %d is %d", num, factorial);
    }

    return 0;
}