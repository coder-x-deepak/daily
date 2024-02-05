// #include<stdio.h>
// #include<string.h>
// int main()
// {
//     struct ANIME//user defined data-type
//     {
//         char NAME[50];
//         char MAIN_CHARCTER[50];
//         int EPISODES;
//         float RATINGS;
//     }A;
    
//     strcpy(A.NAME,"ONE_PIECE");
//     strcpy(A.MAIN_CHARCTER,"MONKEY.D LUFFY");
//     A.EPISODES = 1100;
//     A.RATINGS = 10.000;

//     struct ANIME B;
//     strcpy(B.NAME,"BLUE_LOCK");
//     strcpy(B.MAIN_CHARCTER,"ISAGI");
//     B.RATINGS = 9;
//     B.EPISODES = 24;
    
//    return 0;
// }

#include <stdio.h>
#include<string.h>
int main()
{
    struct person
    {
        char name[50];
        int age;
        int salary;
    }p1,p2;
    strcpy(p1.name,"Deepak");
    p1.age = 18;
    p1.salary = 5000000;

    strcpy(p2.name,"Luffy");
    p2.age = 18;
    p2.salary = 300000000;
    
    printf("%s\n",p1.name);
    printf("%d",p2.age);
    return 0;
}