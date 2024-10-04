// #include<stdio.h>
// int factorial(int num);
// int main()
// {
//    int number;
//    printf("Enter the number of factorial\n");
//    scanf("%d",&number);
//    printf("The factorial of number %d is %d\n",number,factorial(number));
//    return 0;

// }
// int factorial(int num)
// {
//    if(num==1 || num==0)
//    {
//       return 1;
//    }
//    else{
//       return num * factorial(num-1);
//    }
// }
// fibonacci series
// divisible and their difference
// #include<stdio.h>
// int diff(int n, int m)
// {
//    int sum1=0,sum2=0,i;
//    for (i = 1; i <=m; i++)
//    {
//       if(i%n==0)
//       {
//          sum1=sum1+i;
//       }
//       else{
//          sum2=sum2+i;
//       }
//    }
//    if (sum2>sum1)
//    {
//      return sum2-sum1;

//    }
//    else{
//       return sum1-sum2;
//    }
// }
// int main()
// {
//    int n,m,result;
//    printf("the number is_\n");
//    scanf("%d",&n);
//    printf("the number is _\n");
//    scanf("%d",&m);
//    result=diff(n,m);
//    printf("the difference_%d\n",result);
//    return 0;
// }
// odd-------------------------------------------------------------------------------
// #include <stdio.h>
// int main()
// {
//    int i;
//    int n = 3;
//    for (i = 1; i <= n*2; i++)
//    {
//       if (i % 2 != 0)
//       {
//             for (int j = 1; j <= i; j++)
//             {
//                printf("*");
//             }
//             printf("\n");

//       }
//    }
//    return 0;
// }

// #include<stdio.h>
// int fib(int n)
// {
// int fib1,fib2,fibn;
// if (n==0)
// {
//   return 0;

// }
// if (n==1)
// {
//   return 1;
// }

// fib1=fib(n-1);
// fib2=fib(n-2);
// fibn=fib1+fib2;
// printf("%d\n",fibn);
// return fibn;
// }

// int main()
// {
//    int fibo;
//    fibo=fib(4 );
//    printf("the fibonacci series 0  1  %d\t",fibo);
//    return 0;
// }

// array
//  #include<stdio.h>
//  int main()
//  {
//     int arr[10];
//     int *ptr=arr;//&arr[0];
//      ptr=ptr+2;
//     if (ptr==&arr[0])
//     {
//        printf("t");

//    }
//    else{
//       printf("n"); v
//    }
//    return 0;
// }
// #include<stdio.h>
// int main()
// {
//    int n,mul[10];
//    printf("Enter the value \n");
//    scanf("%d",&n);
//    for (int i = 0; i < 10; i++)
//    {
//       mul[i]=n*(i+1);
//    }
//    for (int i = 0; i < 10; i++)
//    {
//       printf("%d*%d of %d\n",n,i+1,mul[i]);
//    }
//    return 0;

// }
// reverse an array--------------------------------------------
// #include<stdio.h>
// void reverse(int arr[],int n)
// {

//    for (int i = 0; i < n/2; i++)
//    {
//          int first=arr[i];
//          int second=arr[n-i-1];
//          arr[i]=second;
//          arr[n-i-1]=first;
//    }

// }
// int main()
//    {
//       int arr[10];
//       for (int i = 0; i < 10; i++)
//       {
//       printf("enter the array element ");
//       scanf("%d",&arr[i]);
//       }
//       reverse(arr,10);
//       for (int i = 0; i < 10; i++)
//       {
//          printf("%d\t",arr[i]);
//       }
//       return 0;
//    }
// #include<stdio.h>
// int main()
// {
//    int first=3,second=10;

//    int mul[3][10];
//    for (int i = 0; i < first; i++)
//    {
//       for (int j = 0; j < second; j++)
//       {

//          scanf(" %d",&mul[i][j]);
//       }

//    }
//    for (int i = 0; i < first; i++)
//    {
//       for (int j = 0; j <second; j++)
//       {
//          printf("%d\t",mul[i][j]);
//       }
//       printf("\n");
//    }
//    return 0;

// }
// multidimensional
// #include<stdio.h>
// void multiple(int mul[][10],int n,int m,int num)
// {
//    for (int i = 0; i < m; i++)
//    {
//        mul[n][i]=num*(i+1);

//    }
//     for (int i = 0; i < 10; i++)
//          {
//             printf("%d*%d=%d\t",num,i+1,mul[n][i]);
//          }
//          printf("\n");

// }
// int main()
//    {

//          int i;
//          int num[3];
//          for ( i = 0; i <3; i++)
//          {
//             scanf("%d",&num[i]);
//          }
//           for ( i = 0; i <3; i++)
//          {

//              int mul[3][10];
//          multiple(mul,0,10,num[i]);
//          }
//          // multiple(mul,1,10,3);
//          // multiple(mul,2,10,7);
//          // for (int i = 0; i < 10; i++)
//          // {
//          //    printf(" %d \t",mul[0][i]);
//          // }
//          // printf("\n");
//          // for (int i = 0; i < 10; i++)
//          // {
//          //    printf(" %d \t",mul[1][i]);
//          // }
//          // printf("\n");
//          // for (int i = 0; i < 10; i++)
//          // {
//          //    printf(" %d \t",mul[2][i]);
//          // }

//    return 0;

//    }
// strings
// #include<stdio.h>
// #include<string.h>
// int length(char arr[]);
// int main()
// {
// char str[]={'a','b','h','\0'};
// char *ptr=str;
// while (*ptr!='\0')
// {
//    printf("%c",*ptr);
//    *ptr++;
// }
// return 0;
// char *ptr="abhijit";
// printf("%s",ptr);
// return 0;

//----------------------------------------------------------------------------------------
//    char str[100];

//    gets(str);

//    //  int a=strlen(ptr);
//    //  printf("%d",a);
//    printf("%d",length(str));

//    return 0;
// }

// int length(char arr[])
// {
//    int count;
//    for (int i = 0; arr[i]!='\0'; i++)
//     {
//       count++;
//     }
//    return count-1;
// }

// #include<stdio.h>
// #include<string.h>
// int main()
// {
//    char arr[]="abhi";
//    char arr1[45]="abhijit";
//    strcpy(arr,arr1);
//    puts(arr);
// }

// #include<stdio.h>
// #include<string.h>
// int main()
// {
//    char arr[]="abhi";
//    char arr1[45]="abhijit";
//    strcat(arr,arr1);
//    puts(arr);
// }

// #include<stdio.h>
// #include<string.h>
// int main()
// {
//    char arr[]="Bbhi";
//    char arr1[45]="Ahijit";
//    int value=strcmp(arr,arr1);
//    printf("%d",value);
// }
// find the range of an string----------------------------------
// #include<stdio.h>
// void slice(char str[], int n,int m)
// {
//    char new[40];
//    int j=0;
//    for (int i = n; i <= m; i++,j++)
//    {
//       new[j]=str[i];
//    }
//    new[j]='\0';
//    puts(new);
//    return;
// }
// int main()
// {
//    char ch[]={"abhijit"};
//    slice(ch,1,5);

//    return 0;
// }
// no of alphabet---------------------------------------------
// #include<stdio.h>
// #include<string.h>
// int alphabet(char vow[])
// {

//    int count=0;
//    for (int i = 0; vow[i]!='\0'; i++)
//    {
//       if(vow[i]=='a'||vow[i]=='e'||vow[i]=='i'||vow[i]=='o'||vow[i]=='u')
//       {
//          count ++;
//       }
//    }
//    return count;
// }
// int main()
// {
//    char vow[]=("abhijit");
//    // printf("%d",alphabet(vow));
//    char a=alphabet(vow);
//    char b=strlen(vow);
//    printf("%d\n",a);
//    printf("%d\n",b);
//    printf("%d\n",b-a);
// }
// #include <stdio.h>
// #include <string.h>
// #include <ctype.h>

// void findMaxVowel(const char* str) {
//     int vowelCount[5] = {0};  // To store counts of 'a', 'e', 'i', 'o', 'u'
//     int length = strlen(str);

//     // Count occurrences of each vowel
//     for (int i = 0; i < length; i++) {
//         char ch = tolower(str[i]);
//         switch (ch) {
//             case 'a':
//                 vowelCount[0]++;
//                 break;
//             case 'e':
//                 vowelCount[1]++;
//                 break;
//             case 'i':
//                 vowelCount[2]++;
//                 break;
//             case 'o':
//                 vowelCount[3]++;
//                 break;
//             case 'u':
//                 vowelCount[4]++;
//                 break;
//         }
//     }

//     // Find the maximum occurring vowel
//     char vowels[] = "aeiou";
//     int maxCount = 0;
//     char maxVowel = '\0';

//     for (int i = 0; i < 5; i++) {
//         if (vowelCount[i] > maxCount) {
//             maxCount = vowelCount[i];
//             maxVowel = vowels[i];
//         }
//     }

//     // Print the result
//     if (maxCount > 0) {
//         printf("The vowel '%c' occurs the most with %d occurrences.\n", maxVowel, maxCount);
//     } else {
//         printf("No vowels found in the given string.\n");
//     }
// }

// int main() {
//     char str[100];
//     int size;
//     printf("Enter the size of the string: ");
//     scanf("%d", &size);
//     getchar();
//     fgets(str,size+1,stdin);
//     // str[strcspn(str, "\n")] = '\0';

//     findMaxVowel(str);
//     return 0;
// }

// reverse a nunber ---------------------------------------------------------------------------------------
//  #include<stdio.h>
//  int main()
//  {
//     int no=876543;
//     int rem,rev=0;
//     while(no!=0)
//     {rem=no%10;
//     rev=rev*10+rem;
//     no/=10;
//     }
//     printf("%d",rev);
//     return 0;
//  }
// bigger no in an array---------------------------------------------------
//  #include<stdio.h>
//  int main()
//  {
//     int n=4;

//    int arr[4]={10,2,4,11};
//    int max=arr[0];
//    for (int i = 0; i < n; i++)
//    {
//       if (arr[i]>max)
//       {
//          max=arr[i];
//       }

//    }
//    printf("%d",max);
//    return 0;

// }
// find the prime number------------------------------
// #include<stdio.h>
// #include<math.h>
// int main()
// {
//    int no=16;
//    int flag=1;
//    double squre=sqrt(no);

//    for (int i = 2; i <=squre; i++)
//    {
//       if (no%i==0)
//       {
//           flag=0;

//       }

//    }
//    if (flag)
//    {
//       printf(" prime number");
//    }
//    else
//    {
//       printf("not prime number");
//    }
//    return 0;
// }

// find the missing number in an array------------------------------------------
//  #include<stdio.h>
//  int main()
//  {

//     int arr[]={1,2,0,4,5,6};
//     int n,sum=0;

//    //   n=sizeof(arr)/sizeof(arr[0]);
//     n=sizeof(arr)/sizeof(int);

//     int no=n*(n+1)/2;
//     for (int i = 0; i < n; i++)
//     {
//         sum=sum+arr[i];
//     }
//     int diff=no-sum;

//     printf("%d",diff);
//     return 0;

// }
// replace the a wuth b---------------------------
// #include<stdio.h>
// int main()
// {
//     char str[100];
//     fgets(str,100,stdin);
//     for (int i = 0; str[i]!='\0'; i++)
//     {
//         if (str[i]=='a')
//         {
//            str[i]='b';
//         }
//         else if (str[i]=='b')
//         {
//            str[i]='a';
//         }
//         printf("%c",str[i]);

//     }

//     return 0;

// }
// frequency----------------------------------------

// #include<stdio.h>
// #include<string.h>

// int main()
// {

//    //  char str[100] ="ab a a aa aabhijit";
//    char str[100];
//    fgets(str,sizeof(str),stdin);
//     int i;
//     int freq[256] = {0};
//     for(i = 0; str[i] != '\0'; i++)
//     {
//       if (str[i]==' ' ||str[i]=='\n')
//       {
//          continue;
//       }
//       if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
//         {
//          freq[str[i]]++;
//         }
//     }
//     for(i = 0; i < 256; i++)
//     {
//         if(freq[i] != 0)
//         {
//             printf("The frequency of %c is %d\n", i, freq[i]);
//         }
//     }
//     return 0;
// }
// whether a string is palindrome or not---------------------------------------------
// #include<stdio.h>
// #include<string.h>
// #include<stdbool.h>
// bool palindrome(char str[],int l,int r)
// {
//    if (l>=r)
//    {
//       return true;
//    }
//    if (str[l]!=str[r])
//    {
//       return false;

//    }
//    return palindrome(str, l + 1, r - 1);

// }
// int main()
// {
//    char str[100];

//   fgets(str,sizeof(str),stdin);
//    str[strcspn(str, "\n")] = '\0';//delete the new line

//    int l=0;
//    int r=strlen(str)-1;
//    char palin=palindrome(str,l,r);
//    if (palin)
//    {
//       printf("%s is palindrome string",str);
//    }
//    else
//    {
//       printf("%s is not palindrome string",str);

//    }
//    return 0;
// }
// OCCURRENCE OF GIVEN ELEMENT IN AN ARRAY------------------------------------
// #include<stdio.h>
// int occur(int arr[],int n)
// {
//    int count=0;
//    for (int i = 0; i < 5; i++)
//    {
//       if (arr[i]==n)
//       {
//          count++;
//       }

//    }
//    return count;
// }
// int main()
// {
//    int arr[]={1,2,3,2,4};
//    int n=3;
//    int result=occur(arr,n);
//    printf("%d",result);
//    return 0;
// }

// structure----------------------------------------------------------------
//  #include<stdio.h>
//  #include<string.h>
//  struct Employee
//  {
//     int code;
//     char name[40];

// };

// int main()
// {
//    struct Employee E1={1002,"Abhijit"};
//    struct
//    // E1.code=1002;
//    // strcpy(E1.name,"Abhijit");
//    // printf("%d\n",E1.code);
//    // printf("%s",E1.name);

//    return 0;

// }
// C code stock--------------------------
//  #include<stdio.h>

// int maxProfit(int prices[], int n)
// {
//     int buy = prices[0], max_profit = 0;
//     for (int i = 1; i < n; i++) {

//         // Checking for lower buy value
//         if (buy > prices[i])
//             buy = prices[i];

//         // Checking for higher profit
//         else if (prices[i] - buy > max_profit)
//             max_profit = prices[i] - buy;
//     }
//     return max_profit;
// }

// // Driver Code
// int main()
// {
//     int prices[] = { 2,30,15,10,8,25,80};
//     int n = sizeof(prices) / sizeof(prices[0]);
//     int max_profit = maxProfit(prices, n);
//     printf("%d",max_profit);
//     return 0;
// }

// frequenc of the array element===============================================
// #include<stdio.h>

// int main()
// {

//    //  char str[100] ="ab a a aa aabhijit";
//    int str[100]={1,2,3,4,4,3};
//    int n =sizeof(str)/sizeof(str[0]);
//     int i;
//     int freq[256] = {0};
//     for(i = 0; i<n; i++)
//     {
//       if (str[i]==0)
//       {
//          continue;
//       }

//          freq[str[i]]++;

//     }
//     for(i = 0; i < 256; i++)
//     {
//         if(freq[i] != 0)
//         {
//             printf("The frequency of %d is %d\n", i, freq[i]);
//         }
//     }
//     return 0;
// }
// Program to find the largest & smallest word in a string===============================================
// #include <stdio.h>
// #include <string.h>
// #include <limits.h>

// int main() {
//     char str[1000];
//     char longestWord[100];
//     char shortestWord[100];
//     char currentWord[100];
//     int maxLength = 0;
//     int minLength = INT_MAX;
//     int currentLength = 0;

//     printf("Enter a string: ");
//     fgets(str, sizeof(str), stdin);

//     int i = 0, j = 0;
//     while (str[i] != '\0') {
//         if (str[i] != ' ' && str[i] != '\n') {
//             currentWord[j++] = str[i];
//             currentLength++;
//         } else {

//             if (currentLength > 0) {
//                 currentWord[j] = '\0';

//                 // Check for the longest word
//                 if (currentLength > maxLength) {
//                     maxLength = currentLength;
//                     strcpy(longestWord, currentWord);
//                 }

//                 // Check for the shortest word
//                 if (currentLength < minLength) {
//                     minLength = currentLength;
//                     strcpy(shortestWord, currentWord);
//                 }
//             }
//             // Reset current word and length
//             j = 0;
//             currentLength = 0;
//         }
//         i++;
//     }

//     if (currentLength > 0) {
//         currentWord[j] = '\0';

//         if (currentLength > maxLength) {
//             maxLength = currentLength;
//             strcpy(longestWord, currentWord);
//         }

//         if (currentLength < minLength) {
//             minLength = currentLength;
//             strcpy(shortestWord, currentWord);
//         }
//     }

//     printf("The longest word is: %s\n", longestWord);
//     printf("Length of the longest word: %d\n", maxLength);

//     printf("The shortest word is: %s\n", shortestWord);
//     printf("Length of the shortest word: %d\n", minLength);

//     return 0;
// }
//============================================================================================================
// #include <stdio.h>
// #include <string.h>
// #include <limits.h>
// int main()
// {
//    printf("enter a string\t");
//    char str[1000];
//    fgets(str, sizeof(str), stdin);
//    char longeststr[100];
//    char shortesrstr[100];
//    int minlength = INT_MAX;
//    int maxlength = 0;
//    int currentlength = 0;
//    char currentword[100];
//    int j = 0, i = 0;
//    while (str[i] != '\0')
//    {
//       if (str[i] != ' ' && str[i] != '\n')
//       {
//          currentword[j++] = str[i];
//          currentlength++;
//       }
//       else
//       {
//          if (currentlength > 0)
//          {
//             currentword[j] = '\0';
//             if (currentlength > maxlength)
//             {
//                maxlength = currentlength;
//                strcpy(longeststr, currentword);
//             }
//             if (currentlength < minlength)
//             {
//                minlength = currentlength;
//                strcpy(shortesrstr, currentword);
//             }
//          }
//          j = 0;
//          currentlength = 0;
//       }

//       i++;
//    }
//    if (currentlength > 0)
//    {
//       currentword[j] = '\0';
//       if (currentlength > maxlength)
//       {
//          maxlength = currentlength;
//          strcpy(longeststr, currentword);

//       }
//       if (currentlength < minlength)
//       {
//          minlength = currentlength;
//          strcpy(shortesrstr, currentword);
//       }
//    }
//    printf("The longest word is: %s\n", longeststr);
//    printf("Length of the longest word: %d\n", maxlength);

//    printf("The shortest word is: %s\n", shortesrstr);
//    printf("Length of the shortest word: %d\n", minlength);

//    return 0;
// }
//==================================================================================================================
// #include<stdio.h>
// int fun(int c,int a,int b)
// {
//     if (c==1)
//     {
//         return a+b;
//     }
//     else if (c==2)
//     {
//         return a-b;
//     }
//     else if (c==3)
//     {
//         return a*b;
//     }
//     else if (c==4)
//     {
//         return a/b;
//     }

// }
// int main()
// {
//     int a,b,c,d;
//     scanf("%d",&c);
//     scanf("%d",&a);
//     scanf("%d",&b);
//     d=fun(c,a,b);
//     printf("%d\n",d);
//     return 0;
// }
//========================================================================================
// #include<stdio.h>
// int main ()
// {
//     int n,m,sum=0;
//     scanf("%d",&n);
//     scanf("%d",&m);
//     for ( int i = n; i <=m; i++)
//     {
//         if (i%3==0 && i%5==0)
//         {
//             sum=sum+i;
//         }

//     }
//     printf("%d",sum);
//     return 0;
// }
//=========================================================================
// mid without -value
// #include<stdio.h>
// int fun(int arr[],int n)
// {
//     int size=0,mid;
//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i]>=0)
//         {
//             size++;
//         }

//     }
//     mid=(size-1)/2;
//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i]>=0)
//         {
//             if (mid==0)
//             {

//                 return arr[i];

//             }
//             mid--;

//         }

//     }
//     return -1;
// }
// int main()
// {
//     int arr[]={12,-3,14,-56,77,13};
//     int n=6;
//     int a=fun(arr,n);
//     printf("%d",a);
//     return 0;

// }

// #include<stdio.h>

// int maxProfit(int arr[], int n)
// {
//     int temp;
//      for (int i = 0; i < n-1; i++)
//      {
//          for (int j = 0; j < n-1-i; j++)
//          {
//              if (arr[j]>arr[j+1])
//              {
//                  temp=arr[j];
//                  arr[j]=arr[j+1];
//                  arr[j+1]=temp;
//              }

//         }
//      }
// }

// // Driver Code
// int main()
// {
//     int prices[] = { 10, 5 ,22, 65 ,8, 75, 90, 80};
//     int n = sizeof(prices) / sizeof(prices[0]);
//     maxProfit(prices, n);
//     int sum1=prices[0]+prices[1];
//     int sum2=prices[n-1]+prices[n-2];
//     int sum3=sum2-sum1;
//     printf("max profit= %d",sum3);
//     return 0;
// }
// to find the index of the string===================================================

// #include <stdio.h>
// #include <string.h>

// int findSubstringIndex(char *str1, char *str2) {
//     char *pos = strstr(str1, str2); // Find the substring
//     if (pos != 0) {
//         return pos - str1; // Calculate and return the index
//     } else {
//         return -1; // Return -1 if substring is not found
//     }
// }

// int main() {
//     char str1[] = "Hello, welcome to the world of programming!";
//     char str2[] = "world";

//     int index = findSubstringIndex(str1, str2);
//     printf("Index: %d\n", index); // Output the result

//     return 0;
// }
// merge an array and find the sum of  the unique elementss==============================================================================
// #include <stdio.h>
// #include <string.h>
// #include <stdlib.h>
// int *merge(int arr1[], int n1, int arr2[], int n2)
// {
//     int *merg = (int *)malloc(sizeof(int) * n1 * n2);
//     memcpy(merg, arr1, n1 * sizeof(int));
//     memcpy(merg + n1, arr2, n2 * sizeof(int));
//     return merg;
// }
// int add(int *merg, int n3)
// {
//     int sum = 0;
//     int unique;

//     for (int i = 0; i < n3; i++)
//     {
//         unique = 1; // Assume the element is unique

//         // Check if the element is duplicated in the array
//         for (int j = 0; j < n3; j++)
//         {
//             if (i != j && merg[i] == merg[j])
//             {
//                 unique = 0; // Element is not unique
//                 break;
//             }
//         }

//         // If the element is unique, add it to the sum
//         if (unique)
//         {
//             sum += merg[i];
//         }
//     }
//     return sum;
// }
// int main()
// {
//     int arr1[] = {9, -4, 3, 2, -5};
//     int n1 = sizeof(arr1) / sizeof(int);
//     int arr2[] = {2, -5, 7, 9};
//     int n2 = sizeof(arr2) / sizeof(int);
//     int *merg = merge(arr1, n1, arr2, n2);
//     int n3 = n1 + n2;
//     int uniue = add(merg, n3);
//     printf("%d", uniue);
//     return 0;
// }
// without space=======================================================================
// #include<stdio.h>
// int main()
// {
//     char str1[100],str2[100];
//     fgets(str1,sizeof(str1),stdin);
//     int i=0,j=0;
//     while (str1[i]!='\0')
//     {
//        if (str1[i]!=' ')
//        {
//         str2[j++]=str1[i];
//        }
//        i++;
//     }
//     str2[j]='\0';//terminate the string
//     printf("%s",str2);
//     return 0;
// }
// decima to binary and find its 1 bits====================================================================================
// #include<stdio.h>
// int main()
// {
//     int n=8,count=0;
//     int no;
//     while (n!=0)
//     {

//     no=n%2;

//     if (no==1)
//     {
//         count++;
//     }
//     n=n/2;
//     }
//     printf("%d",count);
//     return 0;

// }

// Floyads Traingle===============================================
//  #include<stdio.h>
//  int main()
//  {
//      int i,j,k=1,n=4;
//      for ( i = 1; i <=n; i++)
//      {
//          for ( j = 1; j <=i; j++)
//          {
//                  printf("%d",k++);
//          }
//          printf("\n");
//      }
//      return 0;
//  }
// reverse te array with k index======================================
//  #include<stdio.h>
//  int reversing(int arr[],int start,int end)
//  {
//     int temp;
//     while (start<end)
//     {
//         temp=arr[start];
//         arr[start]=arr[end];
//         arr[end]=temp;
//         start++;
//         end--;
//     }

//  }
//  int reverse(int arr[],int k,int n)
//  {
//     k=k%n;
//     reversing(arr,0,n-1);
//     reversing(arr,0,k-1);
//     reversing(arr,k,n-1);
//  }
//  int main()
//  {
//     int arr[]={1,2,3,4,5,6,7};
//     int n=7;
//     int k=3;
//     reverse(arr,k,n);
//     for (int  i = 0; i < n; i++)
//     {
//         printf("%d",arr[i]);
//     }

//    return 0;

//  }

// reverse the words of the string============================================
//  #include<stdio.h>
//  #include<string.h>
//  int rev(char str[],int start,int end)
//  {
//      char temp;
//      while (start<end)
//      {
//          temp=str[start];
//          str[start]=str[end];
//          str[end]=temp;
//          start++;
//          end--;
//      }

// }
// int reverse (char str[])
// {
//     char len=strlen(str);
//     rev(str,0,len-1);
//     int start,end;
//     start=0,end=0;
//     while (end<=len)
//     {
//         if (str[end]==' ' || str[end]=='\0')
//         {
//             rev(str,start,end-1);
//             start=end+1;
//         }
//         end++;
//     }

// }
// int main()
// {
//     char str[]="am i good";
//     reverse(str);
//     printf("%s",str);
//     return 0;
// }
// rearrange positive and negative alternative in a given array =========================================================
// #include <stdio.h>
// #define MAX 100
// int rearrange(int arr[], int n)
// {
//     int pos[MAX], neg[MAX], posindex = 0,negindex=0;
//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i] > 0)
//         {
//             pos[posindex++] = arr[i];
//         }
//         else
//         {
//             neg[negindex++] = arr[i];
//         }
//     }
//     int i = 0, j = 0, k = 0;
//     while (i <posindex && j<negindex)
//     {
//         arr[k++]=pos[i++];
//          arr[k++]=neg[j++];

//     }
//       while (i < posindex )
//     {
//          arr[k++]=pos[i++];
//     }
//       while (j<negindex)
//     {
//          arr[k++]=neg[i++];
//     }
// }
// int main()
// {
//     int arr[] = {2, -3, -4, -1, 23, 4};
//     int size = 6;
//     rearrange(arr, size);
//     for (int i = 0; i < size; i++)
//     {
//         printf("%d\t", arr[i]);
//     }
//     return 0;
// }
// anagram===============================

// #include <stdio.h>
// #include <string.h>

// int main()
// {
//     char str[100];
//     char str1[100];

//     // Read input strings
//     fgets(str, sizeof(str), stdin);
//     fgets(str1, sizeof(str1), stdin);

//     // Remove newline characters from the input if present
//     str[strcspn(str, "\n")] = '\0';
//     str1[strcspn(str1, "\n")] = '\0';

//     int freq[256] = {0};
//     int freq1[256] = {0};
//     int i;

//     // Count frequency of each character in both strings
//     for(i = 0; str[i] != '\0'; i++)
//     {
//         if (str[i] != ' ')
//         {
//             freq[(unsigned char)str[i]]++;
//         }
//     }

//     for(i = 0; str1[i] != '\0'; i++)
//     {
//         if (str1[i] != ' ')
//         {
//             freq1[(unsigned char)str1[i]]++;
//         }
//     }

//     // Check if frequency arrays are identical
//     for(i = 0; i < 256; i++)
//     {
//         if(freq[i] != freq1[i])
//         {
//             printf("Not anagrams.\n");
//             return 0;
//         }
//     }

//     printf("Yes, they are anagrams.\n");
//     return 0;
// }
//=======================================================================
