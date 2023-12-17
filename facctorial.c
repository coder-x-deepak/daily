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

//     printf("the Factorial of given number is %d", Factorial(num));  

//     return 0;
// }


// cobination
// #include <stdio.h>
// int fact(int num);
// int main()
// {
//     int n,r;
//     scanf("%d%d",&n,&r);
//     printf("the combination is %d",fact(n)/(fact(r)*fact(n-r)));
//     return 0;
// }
// int fact(int num)
// {

//     if (num == 0 || num == 1)
//     {
//         return 1;
//     }
//     else
//     {
//         return num * fact(num -1);
//     }
    
    
// }


// 1 
// 1 1 
// 1 2 1 
// 1 3 3 1 
// 1 4 6 4 1 
// 1 5 10 10 5 1

// #include <stdio.h>
// int fact(int num);   
// int main()
// {
//     int number;
//     int a;
//     scanf("%d", &number);
//     for (int i = 0; i <= number; i++)
//     {
        
//         for (int j = 0; j <=i; j++)
//         {
//             a = fact(i)/(fact(j)*fact(i-j));
//              printf("%d ",a);
            
//         }
//         printf("\n");
//     }
    
//     return 0;
// }
// int fact(int num)
// {
//     if (num == 1 || num == 0)
//     {
//         return 1;
//     }
//     else
//     {
//         return num * fact(num-1);
//     }
    
// }

