// #include<stdio.h>
// int main()
// {
//     int x = printf("hello\n");
//     printf("%d",x);
//     return 0;
// }



// #include<stdio.h>
// int main()
// {
//      int a;
//     printf("Enter a number:");
//     scanf("%d" ,&a);

//     if (a>=0)
//     {
//         printf("The absolute value of %d is %d\n" , a ,a);
//     }

//     else if (a<=0)
//     {
//        printf("The absolute value of %d is %d\n" , a , -(a));
//     }
// return 0;
// }

// #include<stdio.h>
// int main()
// {
// int a;
//     printf("Enter a positive number:");
//     scanf("%d" ,&a);

//     printf("the halfed value is %d", a/2);
// return 0;
// }

// #include<stdio.h>
// int main()
// {
// float a;

//     printf("Enter a real number:");
//     scanf("%f" , &a);
    
//     int x = (int)a;
//     if (x - a == 0)
//     {
//         printf("The entered number %f is integer" , a);
//     }

//     if (a-x > 0)
//     {
//         printf("The entered number %f is float" , a);
//     }

// return 0;
// }

//  #include<stdio.h>
// int main()
// {
//     float  a, b;

//     printf("Enter the cost price:\n");
//     scanf("%f" , &a);m

//     printf("Enter the selling price\n");
    
//     scanf("%f" , &b);

//     if (a - b == 0)
//     {
//         printf("The seller does not made any profit or los\n");
//     }

// else if (a - b > 0)
// {
//      printf("The seller made an los\n");
// }

// else
// {
//     printf("The seller made an profit\n");
// }
// }

// #include<stdio.h>
// int main()
// {
//     int a;
//     printf("Enter a digit  number:");
//     scanf("%f" , &a);

//     if (a > 99 && a < 1000)
//     {
//         printf("Entered no. is 3 digit number ");
//     }

//     else
//     {
//         printf("Entered no. is not  3 digit number ");
//     }
// return 0;
// }

// #include<stdio.h>
// int main()
// {
//     int a, b, c;

//     printf("Enter 1st side\n:");
//     scanf("%d" , &a);

//     printf("Enter 2nd side\n:");
//     scanf("%d" , &b);

//     printf("Enter 3rd side\n:");
//     scanf("%d" , &c);

//     if (a == b || b== c || c == a)
//     {
//         printf("The tringle is equilateral tringal");
//     }

//     else if ( a = b || b == c || c == a)
//     {
//         printf("The tringle is  Isosceles Triangle ");
//     }
//      else if ( a != b != c)
//      {
//         printf("The tringle is Scalene Triangle ");
//      }

// return 0;
// }

// #include<stdio.h>
// int main()
// {
//     int a;

//     printf("Enter the year\n:");
//     scanf("%d" , &a);

//     if (a % 400 == 0)
//     {
//         printf("the year %d is  an leap year ",a);
//     }
//     else
//     {
//         printf("the year %d is not an  leap year ",a);
//     }

// return 0;
// }

// #include<stdio.h>
// int main()
// {
//     float x , y;

//     printf("enter the x cordinate :\n");
//     scanf("%f" ,&x);

//     printf("enter the y cordinate :\n");
//     scanf("%f" ,&y);

//     if (x > 0 && y > 0)
//     {
//         printf("(%f,%f) lies in 1st quadrant" , x ,y);
//     }
//     else if (x < 0 && y > 0)
//     {
//         printf("(%f,%f) lies in 2nd quadrant" , x ,y);
//     }
//     else if (x > 0 && y < 0)
//     {
//         printf("(%f,%f) lies in 3rd  quadrant" , x ,y);
//     }
//     else if (x < 0 && y < 0)
//     {
//         printf("(%f,%f) lies in 4th quadrant" , x ,y);
//     }
//     else
//     {
//         printf("(%f,%f) lies at origin" , x ,y);
//     }
// return 0;
// }

// #include <stdio.h>
// int main()
// {
//     float r, x, y;
//     int a = 5;
//     int b = 9;

//     printf("enter the x cordinate of the point :\n");
//     scanf("%f", &x);

//     printf("enter the y cordinate of the point :\n");
//     scanf("%f", &y);

//     printf("enter the radius of the circle :\n");
//     scanf("%f", &r);
//     if ((x - a) * (x - a) + (y - b) * (y - b) == r * r)
//     {
//         printf("The point (%f,%f) lies on circle", x, y);
//     }
//     else if ((x - a) * (x - a) + (y- b) * (y - b) < r * r)
//     {
//         printf("The point (%f,%f) lies inside circle", x, y);
//     }
//     else if ((x - a) * (x - a) + (y - b) * (y - b) > r * r)
//     {
//         printf("The point (%f,%f) lies outside circle", x, y);
//     }
// }



// #include <stdio.h>
// int main()
// {
//     int n, ld;
//     printf("Enter the number ");
//     scanf("%d", &n);

//     int a = n;

//     // we have to print the sum of digits of given number and its reversed digits numbers.
//     // so we have to first find the sum of digits of given no and reversd digits seprately.

//     int sum = 0;
//     int reverse = 0;

//     while (n > 0)
//     {
//         ld = n % 10;
//         n = n / 10;
//         sum = sum + ld;
//     }
//     printf("The sum of given number is %d\n", sum);

//     while (a > 0)
//     {
//         ld = a % 10;
//         a = a / 10;
//         reverse = reverse * 10;
//         reverse = reverse + ld;
//     }
//     printf("the reverserd no is %d\n", reverse);

//     int s = 0;
//     int LD = 0;

//     while (reverse > 0)
//     {
//         LD = reverse % 10;
//         reverse = reverse / 10;
//         s = s + LD;
//     }
//     printf("the sum of reversed no is %d\n", s);

//     printf("the sum of entered no and given is %d", sum+s);
//     return 0;
// }