// #include<string.h>
// #include<stdio.h>
// int main()
// {
//     typedef struct POKEMON{
//         char NAME[50];
//         char TIER[4];
//         int ATTACK;
//         int SPEED;
//         int HP;
//         char TYPE[40];
//     }POKEMON ;

//     POKEMON arr[3];
//     for (int i = 0; i < 3; i++)
//     {
//         // taking input
//         printf("Enter the details of the pokemon %d\n",i+1);
//          printf("ENTER THE TIER:\n");
//         scanf("%s",arr[i].TIER);
//         printf("ENTER THE NAME:\n");
//         scanf("%s",arr[i].NAME);
//         printf("ENTER THE TYPE:\n");
//         scanf("%s",arr[i].TYPE);
//         printf("ENTER THE ATTACK:\n");
//         scanf("%d",&arr[i].ATTACK);
//         printf("ENTER THE SPEED:\n");
//         scanf("%d",&arr[i].SPEED);
//         printf("ENTER THE HP:\n");
//         scanf("%d",&arr[i].HP);
//         printf("\n");
//     }
    
//     for (int i = 0; i < 3; i++)
//     {
//         printf("THE NAME OF POKEMON IS %s\n\n",arr[i].NAME);
//         printf("THE TIER OF POKEMON IS %s\n\n",arr[i].TIER);
//         printf("THE ATTACK OF POKEMON IS %d\n\n",arr[i].ATTACK);
//         printf("THE SPEED OF POKEMON IS %d\n\n",arr[i].SPEED);
//         printf("THE HP OF POKEMON IS %d\n\n",arr[i].HP);
//         printf("THE TYPE OF POKEMON IS %s\n\n",arr[i].TYPE);
//         printf("\n");
//     }
    
//     return 0;
// }


// #include <stdio.h>
// #include<string.h>
// int main()
// {
//     typedef struct cricketer
//     {
//         char name[50];
//         int age;
//         int no_of_matches;
//         float average_runs;
//         char country[20];
//     } cricketer ;

//     // 3 cricketer
//     cricketer arr[3];
//     for (int i = 0; i < 3; i++)
//     {
//         printf("enter the name of %d cricketer\n",i+1);
//         scanf("%s",arr[i].name);
//         printf("enter the age of %d cricketer\n",i+1);
//         scanf("%d",&arr[i].age);
//         printf("enter the no-matches of %d cricketer\n",i+1);
//         scanf("%d",&arr[i].no_of_matches);
//         printf("enter the average-runs of %d cricketer\n",i+1);
//         scanf("%f",&arr[i].average_runs);
//         printf("enter the country of %d cricketer\n",i+1);
//         scanf("%s",arr[i].country);
        
//     }
//     printf("\n\n");

//     for (int i = 0; i < 3; i++)
//     {
//         printf("the %d crickter is %s\n",i+1,arr[i].name);
//         printf("the age is %d\n",arr[i].age);
//         printf("the no-matches played is %d\n",arr[i].no_of_matches);
//         printf("the average runs maked are %d\n",arr[i].average_runs);
//         printf("the country is %s\n",arr[i].country);

//             printf("\n");
//             printf("\n");
//             printf("\n");
//     }
    
//     return 0;
// }



