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
//     printf("Enter the number you want Factorial of\n"); 
//     scanf("%d", &num);  

//     printf("the Factorial of given number %d is %d", num, Factorial(num));  

//     return 0;
// }

// //  factorial of numbers by loops.

// #include<stdio.h>
// int main()
// {
//     int num;
//     int factorial = 1 ;

//      printf("Enter the number you want Factorial of\n");
//      scanf("%d", &num);

//     for(int i=1; i<=num; i++)
//     {
        
//         factorial = factorial * i;
//     }
//     if(num == 0 ||num ==1)
//     {
//         printf("the factorial of entered number %d is 1", num);
//     }

//     else
//     {
//         printf("the Factorial of given number %d is %d", num, factorial);
//     }

//     return 0;
// }  





// print number in reverse 

// #include <stdio.h>
// int main()
// {
//     int n, sum = 0 , ld;

//     printf("Enter the number ");
//     scanf("%d", &n);

//       int a = n;
      

//     for (int i = 0; i < n; i++)
//     {
//        ld = n%10;
//        n = n/10;
//        sum = sum + ld;

//     }

//     int reverse =0;

//      printf("sum of given numbr is %d\n",sum);

//      while (a>0)
//      {
//          ld = a%10;
//          a = a/10;
//         reverse = reverse * 10;
//         reverse = reverse + ld;
//      }
//      printf("the reversed number is %d",reverse);
     
//     return 0;
// }


