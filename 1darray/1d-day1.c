//  find thebpeoduct of all the elements
// #include<stdio.h>
// int main()
// {
//     int n;
//     scanf("%d",&n);
//     int arr[n];
//     int product=1;
//     for (int i = 0; i <= n-1; i++)
//         {
//         scanf("%d",&arr[i]);
//         }
//     for (int i = 0; i <= n-1; i++) {
//         product = product * arr[i];

//         }
//         printf("%d ",product);

//     return 0;
// }

// sum of array
// #include <stdio.h>
// int main()
// {
//     int arr[5] = {1,2,3,4,5};
//     int sum = 0;

//     for(int i = 0; i<=4; i++)
//     {
//         sum = sum + arr[i];
//     }
//     printf("%d",sum);
//     return 0;
// }

// find the mamx vakue out of givn arry
//  #include<stdio.h>
//  int main()
//  {
//      int arr[8] = {9,2,11,13,3,4,9,7};

//     int max = 0;
//     for (int i = 0; i <= 7; i++)
//     {
//         if (max<arr[i])
//         {
//             max = arr[i];
//         }

//     }
//     printf("%d",max);

//     return 0;
// }

// change the value of all odd indexed elemenys to its second multiple ad ncrement all even indexed value by 10
// #include <stdio.h>
// int main()
// {
//     int n;printf("enter the number of elements\n");scanf("%d",&n);
//     int arr[n];
//     printf("enter the element in array\n");
//     for (int i = 0; i <= n-1; i++)
//     {
//         scanf("%d",&arr[i]);
//     }
//     for (int i = 0; i <=n-1; i++)
//     {
//         if (i%2!=0)
//         {
//             arr[i] = arr[i]*2;
//         }
//         else arr[i] = arr[i] + 10;
//     }
//     for (int i = 0; i <=n-1; i++)
//     {
//         printf("%d ",arr[i]);
//     }

//     return 0;
// }

// number of elements in an array greater then a number x
// #include <stdio.h>
// int main()
// {
//     int n,x,count=0;printf("enter the number of elements\n");scanf("%d",&n);
//     int arr[n];
//     printf("enter the number\n");scanf("%d",&x);
//     printf("enter the element in array\n");
//     for (int i = 0; i <= n-1; i++)
//     {
//         scanf("%d",&arr[i]);
//     }
//     for(int i = 0;i<=n-1;i++)
//     {
//         if (arr[i] > x)
//         {
//             count++;
//         }

//     }
//     printf("the number of elements greater are %d ",count);
//     return 0;
// }

// diffence between the sum of the even and odd imdexes
// #include <stdio.h>
// int main()
// {
//     int n;printf("enter the number of elements im a array\n");
//     scanf("%d",&n);int sumeven = 0;int sumodd = 0;
//     int arr[n];printf("enter the vaalues of array\n");
//     for(int i = 0; i <= n-1;i++)
//     {
//         scanf("%d",&arr[i]);
//     }
//     for (int i = 0; i <= n-1; i++)
//     {
//         if (i%2 == 0)
//         {
//             sumeven = sumeven + arr[i];
//         }
//         else
//         {
//             sumodd = sumodd + arr[i];
//         }

//     } printf("%d is the diffeerence ",sumeven-sumodd);

//     return 0;
// }

// count the number of trillet whose sum us given
// #include <stdio.h>
// int main()
// {
//     int n;printf("enter the number of elements im a array\n");
//    scanf("%d",&n);//int one = 0;int two = 0;int three = 0;
//     int x;printf("enter the number \n");scanf("%d",&x);
//     int arr[n];printf("enter the vaalues of array\n");
//     int total_pairs=0;
//     for(int i = 0; i <= n-1;i++)
//     {
//         scanf("%d",&arr[i]);
//     }
//     for (int i = 0; i <= n-1; i++)
//     {
//         for(int k = i+1; k <= n-1; k++)
//         {
//             for (int j = k+1; j <= n-1; j++)
//             {
//                 if (arr[i]+arr[k]+arr[j] == x)
//                 {
//                     total_pairs++;

//                 }

//             }

//         }

//     }
//     printf("%d are the number of pairs\n",total_pairs);
//     return 0;
// }

// find the second largst element of a array
// #include <stdio.h>
// #include <limits.h>
// int main()
// {
//     int n;
//     printf("enter the number of elements im a array\n");scanf("%d",&n);
//     int arr[n];
//     printf("enter the vaalues of array\n");

//     for(int i = 0; i <= n-1;i++)
//     {
//         scanf("%d",&arr[i]);
//     }
//     int max = INT_MIN;
//     int smax = INT_MIN;
//     for (int j = 0; j <=n-1; j++)
//     {
//         if(max < arr[j]){
//             max=arr[j];
//         }
//     }
//     for (int k = 0; k <=n-1; k++)
//     {
//         if(arr[k] != max && smax < arr[k])
//         {
//             smax=arr[k];
//         }
//     }
//     printf("the largest second number is %d",smax);
//         return 0;
// }

// reversing the array using extra array
// #include <stdio.h>
// int main()
// {
//     int n;
//     printf("enter the number of elements im a array\n");
//     scanf("%d", &n);
//     int arr[n];
//     printf("enter the vaalues of array\n");

//     for (int i = 0; i <= n - 1; i++)
//     {
//         scanf("%d", &arr[i]);
//     }

//     int brr[n];
//     for (int k = 0; k <= n - 1; k++)
//     {
//         brr[k] = arr[n-1-k];
//     }
//     for (int k = 0; k <= n - 1; k++)
//     {
//         // printf("%d ", brr[k]);
//         arr[k] = brr[k];
//     }
//     for (int k = 0; k <= n - 1; k++)
//     {
//         printf("%d ", arr[k]);
        
//     }-
  

//     return 0;
// }


// rewverse the given narray without using anotgher array
// #include <stdio.h>
// void reverse(int arr[],int n)
// {
//     int i = 0;
//     int j = n-1;

//     while (i<j)
//     {
//         int temp = arr[i];
//         arr [i] = arr [j];
//         arr [j] = arr [i];
//         i++;
//         j--;

//     }
//     return;
// }
// int main()
// {
//     int n;
//     printf("enter the number of terms in array \n");
//     scanf("%d",&n);

//     int arr[n];
//     for (int i = 0; i <= n-1; i++)
//     {
//         scanf("%d",&arr[i]);
//         }

//     for (int i = 0; i <= n-1; i++)
//     {
//         printf("%d ",arr[i]);
//         }

// reverse(arr,n);
// printf("\n");
//     for (int i = 0; i <= n-1; i++)
//     {
//         printf("%d ",arr[i]);
//         }
//     return 0;


// reverse the parts of an arrray  by using function ..
// #include <stdio.h>
// void reverse(int arr[], int si, int ei)
// {int i = si;
//     int j = ei;
//     while (i<j)
//     {
//      int temp = arr[i];
//      arr[i] = arr[j];
//      arr[j] = temp;
//     i++;
//     j--;
//     }
    
// }
// int main()
// {int n;
//     printf("enter the number of terms in array \n");
//     scanf("%d",&n);

//     int arr[n];
//     for (int i = 0; i <= n-1; i++)
//     {
//         scanf("%d",&arr[i]);
//         }

//     for (int i = 0; i <= n-1; i++)
//     {
//         printf("%d ",arr[i]);
//         }

// reverse(arr,2,6);
// printf("\n");
//     for (int i = 0; i <= n-1; i++)
//     {
//         printf("%d ",arr[i]);
//         }
    
//     return 0;
// }

// rotate the array k times 
//  void reverse(int arr[], int si,int ei)
//  {
//     int i = si;
//     int j = ei;
//     while (i<j)
//     {
//         int temp = arr[i];
//         arr[i] = arr[j];
//         arr[j] =  temp;

//         i++;
//         j--;  
//     }
    
//  }
//  #include <stdio.h>
//  int main()
//  {
//     int n; int k;
//     printf("enter the number of terms in array");
//     scanf("%d",&n);
// int arr[n];
//     printf("enter the value of array\n");

//     for (int i = 0; i <= n-1; i++)
//     {
//        scanf("%d",&arr[i]);
//     }
// printf("enrter the no of rotation");
// scanf("%d",&k);
// if (k>n) {k = k % n;}

// reverse(arr,0,n-1);
// reverse(arr,0,k-1);
// reverse(arr,k,n-1);
    
// printf("the rotated array is\n");
//     for (int i = 0; i<= n-1; i++) printf("%d ",arr[i]);
    
//     return 0;
//  }

// given array and a number x find out if x lies in the array or not . if yes then print index .
// #include <stdio.h>
// #include <stdbool.h>
// int main()
// {int n;
// printf("enter the number of terms in the array\n");
// scanf("%d",&n);
// printf("enter the values of array\n");
//     int arr[n];
//     for(int i= 0; i <= n; i++)
//     {scanf("%d",&arr[i]);
//     }

//     printf("enter the number you want to check\n");
//     int x ; int ind;
//     scanf("%d",&x);
    
//     bool flag = false; //false means not present 

//     for (int i = 0; i <= n; i++)
//     {
//         if (arr[i] == x)
//         {
//             flag = true; // true means present 
//             ind = i;break;
//         }
        
//     }
    
//     if (flag == false) 
//     {printf(" the number %d is not present ",x);}

//     else printf("the number %d is present at index %d",x,ind);
    
//       return 0;
// }


//  an array containing n elements except 1 element in this range is missing find the missing number 
// #include <stdio.h>
// int main()
// {
//     int n; int sum = 0; int sum2;
//     printf(" enter the no of terms of array\n");
//     scanf("%d",&n);

//     printf("enter the vlues of array\n");
//     int arr[n];
//     for (int i = 0; i <= n-2; i++)
//     {
//         scanf("%d",&arr[i]);
//     }
//     sum2 = (n*(n+1))/2;

//     for (int i = 0; i <= n-2; i++)
//     {
//         sum = sum + arr[i];
//     }
    
//     printf("the missing number is %d", sum2-sum);
//     return 0;
// }

//  write a program to find duplicate elemts from given array 
//   #include <stdio.h>
//   int main()
//   {
//     int arr[8] = { 1,2,3,5,6,7,5};
//     for (int i = 0; i <= 6; i++ )
//     {
//         for (int j = i+1; j <= 6; j++)
//         {
//             if (arr[i] == arr[j])
//             {
//                 /* code */printf("duplicate element is %d",arr[i]);
//                 break;
//             }
            
//         }
//     }
//     return 0;
//   }

//   #include <stdio.h>
//   #include <stdbool.h>
//   int main()
//   {
//     int arr[9]={2,7,3,5,67,7,5,2,3};

//     for(int i=0; i<=8;i++)
//     { bool flag = false;
//         for(int j=i+1; j<=8 ;j++)
//         {
//             if(arr[i]==arr[j])
//             {
//                 flag = true;// for duplicate 
//             }
//         }
//     if(flag == false)
//         {
//             printf("non duplicate element is %d\n",arr[i]);
//             break;
//         }   
        
//     }
//     return 0;
//   }