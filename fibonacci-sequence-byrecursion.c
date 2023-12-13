// calculate nth element of Fibonacci sequence=a,b,c,d and c=a+b,d=c+b etc without recursiion

//  #include <stdio.h>
//  int main()
//  {
//     //declaering the 1st and 2nd terms of Fibonacci sequence
//     int n, a = 0, b = 1;
//     // declaring the 3rd term as c 
//     int c = a + b;

//     // getting the number of terms
//     printf("Enter the number of terms \n");
//     scanf("%d",&n);

//     // printing the nth term 

//     for (int i = 3; i <=n ; i++)
//     {
//         a = b;
//         b = c;
//         c = a + b;
//     }
//     printf("The nth element is %d\n ", c);

//     return 0;
//  }
// // calculate nth element of Fibonacci sequence=a,b,c,d and c=a+b,d=c+b etc with recursion..
// #include <stdio.h>
// int Fibonacci_sequence(int num);

// int main()
// {
//     int num;
//     int nth_term;

//     printf("Enter the number of terms \n");
//     scanf("%d", &num);

//     for(int i = 0; i <= num; i++)
//     {
//         nth_term = Fibonacci_sequence(num);
//     }

//     printf("The nth element is %d\n ", nth_term);

//     return 0;
// }
// int Fibonacci_sequence(int num)
// {
//     if (num == 0  || num == 1)
//     {
//         return num;
//     }
    
//     else
//     {
//         return Fibonacci_sequence(num - 1) + Fibonacci_sequence(num - 2);
//     }
// }
// recursive function to calculate sum of first n natural numbers;
// #include <stdio.h>
// int sum(int num);
// int main()
// {
//     int num , c;
    
//     printf("Enter the number of terms \n");
//     scanf("%d", &num);

//     for (int i = 0; i <=num; i++)
//     {
//         c = sum(num);
//     }
    
//     printf("The sum  is %d\n ",c);

//     return 0;
// }
// int sum(int num)
// {
//     if (num == 0  || num == 1)
//     {
//         return num;
//     }
    
//     else
//     {
//         return num + sum(num - 1);
//     }
// }