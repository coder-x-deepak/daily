//       *
//     * * *
//   * * * * *
// * * * * * * *
//   * * * * *
//     * * *
//       *

// #include <stdio.h>
// int main()
// {
//     int n;
//     scanf("%d", &n);
//     int spaces = n / 2;
//     int stars = 1;
//     int middle = n / 2 + 1;

//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= spaces; j++) // spaces
//         {
//             printf("  ");
//         }
//         for (int k = 1; k <= stars; k++) // stars
//         {
//             printf("* ");
//         }
//         if (i < middle)
//         {
//             spaces--;
//             stars += 2; // stars=stars+2
//         }
//         else
//         {
//             spaces++;
//             stars -= 2; // stars=stars-2
//         }
//         printf("\n");
//     }

//     return 0;
// }

// * * * * * * *
// * * *   * * *
// * *       * *
// *           *

// #include <stdio.h>
// int main()
// {
//         int n;
//     scanf("%d", &n);
//     int spaces = 1;
//     int stars = n;
//     for (int i = 1; i <= 2*n+1; i++)
//     {
//             printf("* ");
//     }
//     printf("\n");
//     for (int i = 1; i <= n; i++)
//     {
//         for (int k = 1; k <= stars; k++)//stars 1
//         {
//             printf("* ");
//         }
//         for (int j = 1; j <= spaces; j++)
//         {
//             printf("  ");
//         }
//         for (int k = 1; k <= stars; k++)//stars 2
//         {
//             printf("* ");
//         }
//         printf("\n");
//         spaces+=2;
//         stars--;
//     }
    
//     return 0;
// }

// 1 2 3 4 1 2 3
// 1 2 3   1 2 3 
// 1 2       2 3 
// 1           3


// #include <stdio.h>
// int main()
// {
//     int n;
//     scanf("%d", &n);
//     int spaces = 1;
//     int stars = n;
//     for (int i = 1; i <=2*n+1; i++)
//     {
//         printf("%d ",i);
//     }
    
//     printf("\n");
//     for (int i = 1; i <=n; i++)
//     {

//         for (int  j = 1; j <=stars; j++)
//         {
//             printf("%d ",j);
//         }
//         for (int i = 1; i <= spaces; i++)
//         {
//             printf("  ");
//         }
        
//         for (int k = 1; k <= stars; k++)
//         {
//             printf("%d ",k);
//         }
        
        
//          printf("\n");
//         spaces+=2;
//         stars--;
//     }
    
//     return 0;
// }

// 1 2 3 4 5 6 7 8 9 
// 1 2 3 4   6 7 8 9 
// 1 2 3       7 8 9 
// 1 2           8 9 
// 1               9

// #include <stdio.h>
// int main()
// {
//     int n;
//     scanf("%d", &n);
//     int spaces = 1;
//     int stars = n;
//     for (int i = 1; i <=2*n+1; i++)
//     {
//         printf("%d ",i);
//     }
    
//     printf("\n");
//     for (int i = 1; i <=n; i++)
//     {int a=1;// to print 2nd star input


//         for (int  j = 1; j <=stars; j++)
//         {
//             printf("%d ",a);a++;
//         }
//         for (int i = 1; i <= spaces; i++)
//         {
//             printf("  ");a++;
//         }
        
//         for (int k = 1; k <= stars; k++)
//         {
//             printf("%d ",a);a++;
//         }
        
        
//          printf("\n");
//         spaces+=2;
//         stars--;
//     }
    
//     return 0;
// }

// A B C D E F G H I 
// A B C D   F G H I 
// A B C       G H I 
// A B           H I 
// A               I 
// #include <stdio.h>
// int main()
// {
//     int n;
//     scanf("%d", &n);
//     int spaces = 1;
//     int stars = n;
//     for (int z = 1; z <=2*n+1; z++)
//     {
//         printf("%c ",z+64);
           
//     }printf("\n"); 
    
//     for (int i = 1; i <= n; i++)
//     {
//         int a=1;
//         for (int i = 1; i <= stars; i++)
//         {
//             printf("%c ",a+64);
//             a++;
//         }for (int j = 1; j <= spaces; j++)
//         {
//             printf("  ");a++;
//         }
//         for (int k = 1; k <=stars; k++)
//         {
//             printf("%c ",a+64);
//             a++;
//         }
        
        
//         printf("\n");
//         spaces+=2;
//         stars--;
//     }
    
//     return 0;
// // }

// 1 2 3 4 3 2 1 
// 1 2 3   3 2 1 
// 1 2       2 1 
// 1           1 
// #include <stdio.h>

// int main()

// {

// int n;

// scanf("%d", &n);

// int spaces = 1;

// int stars = n;
// for (int a = 1; a <= n+1; a++)
//     {
//         printf("%d ",a);
//     }
//     for (int b = n; b >= 1; b--)
//         {
//             printf("%d ",b);
//         }
//     printf("\n");
// for (int i = 1; i <= n; i++)

// {

// for (int j = 1; j <= stars; j++)

// {

// printf("%d ",j);

// }

// for (int i = 1; i<=spaces; i++)

// {

// printf("  ");

// }

// for (int k= stars; k >=1; k--)

// {

// printf("%d ",k);

// }

// printf("\n");

// spaces+=2;

// stars--;

// }

// return 0;
// }


// 4 4 4 4 4 4 4 
// 4 3 3 3 3 3 4 
// 4 3 2 2 2 3 4 
// 4 3 2 1 2 3 4 
// 4 3 2 2 2 3 4 
// 4 3 3 3 3 3 4 
// 4 4 4 4 4 4 4 
// #include <stdio.h>
// int main()
// {
//         int n;
//     scanf("%d", &n);int min = 0;
//     for (int i = 1; i <= 2*n-1; i++)
//     {
//         for (int j = 1; j <= 2*n-1; j++)
//         {
//             int a = i;
//             if (i>n) a=2*n-i;
//             int b= j;
//             if (j>n) b=2*n-j;

//             if (a<b) min = a;
//             else min = b;
//             printf("%d ",n + 1 - min);
//         }
        
//        printf("\n");
//     }
    
//     return 0;
// }