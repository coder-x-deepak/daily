// #include <stdio.h>
// int main()
// {
//     int n ;
//     scanf("%d",&n);
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= n; j++)
//         {
//             if(j == n/2+1 || i == n/2+1)
//             printf("* ");
        
//         else {
//             printf("  ");
//             }
//         }
//         printf("\n");
//     }
    
//     return 0;
// }

// * * * * *
// *       *
// *       *
// * * * * *
// #include <stdio.h>
// int main()
// {
//     int n ;
//     scanf("%d",&n);
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= n+2; j++)
//         {
//             if(j == 1 || j == n)
//             printf("* ");
        
//         else {
//             printf("  ");
//             }
//         }
//         printf("\n");
//     }
    
//     return 0;
// }


//    *     *
//     *   *
//       *
//     *   *
//    *      *

// #include <stdio.h>
// int main()
// {
//     int n;
//     scanf("%d",&n);
//     for (int i = 1; i <= n; i++)
//     {
//        for (int j = 1; j <= n; j++)
//        {
//         if(i == j || i+j == n+1)
//        {
//         printf("* ");
//        }
//        else {
//         printf("  ");
//        }

//        }
//        printf("\n");
//     }
    
//     return 0;
// }

// 1
// 2 3  
// 4 5 6
// 7 8 9 10
// #include <stdio.h>
// int main()
// {
//     int n;
//     scanf("%d",&n);
// int a =1;
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//            printf("%d ",a);
//            a++;
//         }
        
//         printf("\n");
//     }
    
//     return 0;
// }

// 1
// 3 5
// 7 9 11
// 13 15 17 19
//  #include <stdio.h>
// int main()
// {
//     int n;
//     scanf("%d",&n);
// int a =1;
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//            printf("%d ",a);
//            a=a+2;
//         }
        
//         printf("\n");
//     }
    
//     return 0;
// }

// 1
// 0 1
// 1 0 1
// 0 1 0 1

//  #include <stdio.h>
// int main()
// {
//     int n;
//     scanf("%d",&n);
// int a;
//     for (int i = 1; i <= n; i++)
//     {   if (i%2!=0)
//     {
//         a=1;
//     }
//     else
//     {
//         a = 0;
//     }
    
    
//         for (int j = 1; j <= i; j++)
//         {
//            printf("%d ",a);
//            if (a == 0) 
//            {
//             a = 1;
//            }
//            else
//            {
//             a = 0;
//            }
           
//         }
        
//         printf("\n");
//     }
    
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int n;
//     scanf("%d",&n);
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= i; j++)
//         {   if (i == j || (i + j)%2== 0)printf("%d ",1);//i == j ki need nhi
    
//             else printf("%d ",0);   
//         }
        
//         printf("\n");
//     }
    
//     return 0;
// }

//       *
//     * *
//   * * *
// * * * *
// #include <stdio.h>
// int main()
// {
//     int n;scanf("%d",&n);
//     for (int i = 1; i <= n; i++)// lines
//     {
//         for (int w = 1; w <= n-i; w++)//whit spaces
//         {
//             printf("  ");}
//             {for (int j = 1; j <= i; j++)//stars
//                 printf("* ");
            
//         }
//         printf("\n");
//     }
    
//     return 0;
// }

//       * * * *
//     * * * *
//   * * * *
// * * * *
// #include <stdio.h>
// int main()
// {
//     int n;scanf("%d",&n);
//     for (int i = 1; i <= n; i++)// lines
//     {
//         for (int w = 1; w <= n-i; w++)//whit spaces 1
//         {
//             printf("  ");}
//             {for (int j = 1; j <= n; j++)//stars
//                 printf("* ");
            
//         }
//         printf("\n");
//     }
    
//     return 0;
// }

//       A 
//     A B    
//   A B C  
// A B C D 
// #include <stdio.h>
// int main()
// {int n;scanf("%d",&n);
//     for (int i = 1; i <=n ; i++)
//     {
//         for (int w = 1; w <= n-i; w++)
//         {
//             printf("  ");}
//             {for (int j = 1; j <= i; j++)
//                 printf("%c ",64+j);}
//                 printf("\n");
        
        
//     }
    
//     return 0;
// }

// #include<stdio.h>
// int main()
// {int n;scanf("%d",&n);
//     for (int i = 1; i <=n ; i++)
//     {
//         for (int w = 1; w <= n-i; w++)
//         {
//             printf("  ");}
//             for (int j = 1; j <= 2*i-1; j++){
//                 printf("* ");
//             }
//         printf("\n");
//     }
    
//     return 0;
// }

//        1
//      1 2 3 
//    1 2 3 4 5
//  1 2 3 4 5 6 7      

// #include <stdio.h>
// int main()
// {
//    int n;scanf("%d",&n);
//    for (int i = 1; i <= n; i++)
//    {
//             for (int j = 0; j <= n-i; j++)
//             {
//                 printf("  ");
//             }
            
//             for (int k = 1; k <= 2*i - 1; k++)
//             {
//                 printf("%d ",k);
//             }
            
//         printf("\n");
//    }
   

//     return 0;
// }

//       1               1          
//     1 2 1             1 2         1
//   1 2 3 2 1        =  1 2 3   +   2 1
// 1 2 3 4 3 2 1         1 2 3 4     3 2 1 
// #include <stdio.h>
// int main()
// {
//    int n;scanf("%d",&n);
//    for (int i = 1; i <= n; i++)
//    {
//     int a = i - 1;
//             for (int j = 0; j <= n-i; j++)
//             {
//                 printf("  ");
//             }
            
//             for (int k = 1; k <= i; k++) // number tringle 1
//             {
//                 printf("%d ",k);
//             }
//             for (int w = 1; w <= i-1; w++) // number tringle 2
//             {
//                 printf("%d ",a);a--;
//             }
//         printf("\n");
//    }
//     return 0;
// }



//       A 
//     A B A 
//   A B C B A 
// A B C D C B A  
// #include <stdio.h>
// int main()
// {
//    int n;scanf("%d",&n);
//    for (int i = 1; i <= n; i++)
//    {
//     int a = i - 1;
//             for (int j = 0; j <= n-i; j++)
//             {
//                 printf("  ");
//             }
            
//             for (int k = 1; k <= i; k++) // ALPHABET tringle 1
//             {
//                 printf("%c ",64+k);
//             }
//             for (int w = 1; w <= i-1; w++) // ALPHABET tringle 2
//             {
//                 printf("%c ",64+a);a--;
//             }
//         printf("\n");
//    }
//     return 0;
// }




