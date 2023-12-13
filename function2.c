// find average of 3 numbers  using function

// #include <stdio.h>
// int average(int a , int b , int c);
// int main()
// {
//     int a , b, c, d;
//     printf("Enter the  3 numbers you want average of ");
//     scanf("%d%d%d",&a,&b,&c);

//     d = average(a,b,c);

//     printf("The average of your numbers is %d",d);
//     return 0;
// }
// int average(int a , int b , int c)
// {
//     return ((a+b+c)/3);

// }

// make a program with function to covert celius in farhnite
// #include <stdio.h>
// int convert(int celsius , int fahrenheit);
// int main()
// {
//     int celsius , fahrenheit ,c;
//      printf("Enter the degree celsius temperature\n");
//      scanf("%d",&celsius);

//     c = convert(celsius,fahrenheit);
//     printf("The fahrenheit value is %d",c);
//     return 0;
// }
// int convert(int celsius , int fahrenheit)
// {
//     return fahrenheit = (celsius * 1.8) + 32;
// }

// writing a program to covert km in miles, inches in foot, cms into inches , pounds into kgs , inches in meter

// #include <stdio.h>
// float km_into_miles(float first);
// float inches_into_foot(float first);
// float cms_into_inches(float first);
// float pounds_into_kgs(float first);
// float inches_into_meter(float first);
// int main()
// {
//     float first, changed;
    
//     while (1)
//     {
//         char a;
//         printf("Enter the input character \n 1. for km into miles \n 2. for inches into foot \n 3. for cms into inches \n 4. for pounds into kgs \n 5. inches into meters \n and q . for quittting the program.... \n\n\n");
//         scanf("%c", &a);
//         switch (a)
//         {
//         case 'q':
//             printf("QUITTING  THE  PROGRAM .......\n");
//             goto end;

//         case '1':
//             printf("Enter the first unit. \n");
//             scanf("%f", &first);
//             changed = km_into_miles(first);
//             printf("The the changed unit is %f\n", changed);
//             break;

//         case '2':
//             printf("Enter the first unit. \n");
//             scanf("%f", &first);
//             changed = inches_into_foot(first);
//             printf("The the changed unit is %f\n", changed);
//             break;


//         case '3':
//             printf("Enter the first unit. \n");
//             scanf("%f", &first);
//             changed = cms_into_inches(first);
//             printf("The the changed unit is %f\n", changed);
//             break;

//         case '4':
//             printf("Enter the first unit. \n");
//             scanf("%f", &first);
//             changed = pounds_into_kgs(first);
//             printf("The the changed unit is %f\n", changed);
//             break;

//         case '5':
//             printf("Enter the first unit. \n");
//             scanf("%f", &first);
//             changed = inches_into_meter(first);
//             printf("The the changed unit is %f\n", changed);
//             break;
//         }
        
//     }
//     end:
    
//     return 0;
// }

// float km_into_miles(float first)
// {
//     return 0.62137119 * first;
// }
// float inches_into_foot(float first)
// {
//     return 0.08333333 * first;
// }
// float cms_into_inches(float first)
// {
//     return 0.39370079 * first;
// }
// float pounds_into_kgs(float first)
// {
//     return 0.45359237 * first;
// }
// float inches_into_meter(float first)
// {
//     return 0.0254 * first;
// }



// //write a function to calculate force of attraction on a body of mass m extered by earth
// #include <stdio.h>

// int force(int mass);
// int main()
// {
//     int mass , f;
//     printf("Enter the mass of object\n");
//     scanf("%d",&mass);
//     f = force(mass);
//     printf("The force on object with respect earth is %d\n",f);
//     return 0;

// }
// int force(int mass)
// {
//     return mass*9.8;
// }


// write the program using functin to print the stars(first n  lines)
// *
// ***
// // *****

