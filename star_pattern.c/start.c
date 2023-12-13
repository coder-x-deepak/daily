// #include <stdio.h>
// void starpattern(int n);
// int main()
// {   int n;
//     printf("Enter the number of lines \n");
//     scanf("%d",&n);
//     starpattern(n);
//     return 0;
// }
// void starpattern(int n)
// {
//    if (n == 1)
// {
//    printf("*\n");
//    return;
// }
// starpattern(n-1);
   
//    for (int i=0; i < (2*n-1); i++)
// {
     
//     printf("*");
// }
// printf("\n");
// }

// *
// * *
// * * *
// #include <stdio.h>
// int main()
// {
//     int n ;
//     scanf("%d",&n);

//     for (int i = 1; i <= n; i++)//for priniting lines
//     {
//         for (int j = 1; j <= i; j++)// for priniting stars
//         {
//             printf("* ");
//         }
//         printf("\n");
        
//     }
    
//     return 0;
// }

// * * *
// * *
// *
// #include <stdio.h>
// int main()
// {
//     int n ;
//     scanf("%d",&n);

//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= n+1-i; j++)// for stars
//         {
//             printf("* ");
//         }
//         printf("\n");
        
//     }
    
//     return 0;
// }

// 1
// 1 2
// 1 2 3
// 1 2 3 4
// #include <stdio.h>
// int main()
// {
//     int n ;
//     scanf("%d",&n);

//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//             printf("%d ",j);
//         }
//         printf("\n");
        
//     }
    
//     return 0;
// }

// 1 2 3 4
// 1 2 3
// 1 2
// 1
// #include <stdio.h>
// int main()
// {
//     int n ;
//     scanf("%d",&n);

//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= n+1-i; j++)
//         {
//             printf("%d ",j);
//         }
//         printf("\n");
        
//     }
    
//     return 0;
// }

// 1
// 1 3
// 1 3 5
// 1 3 5 7
// #include <stdio.h>
// int main()
// {
//     int n ;
//     scanf("%d",&n);

//     for (int i = 1; i <= n; i++)
//     {int a=1;
//         for (int j = 1; j <= i; j++)
//         {
//             printf("%d ",a);
//             a=a+2;
//         }
//         printf("\n");
        
//     }
    
//     return 0;
// }

// A B C D
// A B C D
// A B C D
// A B C D
// #include <stdio.h>
// int main()
// {
//     int n ;
//     scanf("%d",&n);

//     for (int i = 1; i <= n; i++)
//     {

//         for (int j = 1; j <= n; j++)// ascai value concept.
//         {   
//             int d = j + 64;
//             // char ch = (char)d; //  type caster
//             printf("%c ",d);// direct esse bhi kr skty upr char ch needed nhi h
//         }
//         printf("\n");
        
//     }
    
//     return 0;


// A 
// A B 
// A B C  
// A B C D 
// #include <stdio.h>
// int main()
// {
//     int n ;
//     scanf("%d",&n);

//     for (int i = 1; i <= n; i++)
//     {

//         for (int j = 1; j <= i; j++)// ascai value concept.
//         {   
//             int d = j + 64;
//             // char ch = (char)d; //  type caster
//             printf("%c ",d);// direct esse bhi kr skty upr char ch needed nhi h
//         }
//         printf("\n");
        
//     }
    
//     return 0;
// }