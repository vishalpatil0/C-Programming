// #include<stdio.h>
// #include<stdlib.h>
// void re(char * str)
// {
//     fgets(str,100,stdin);
// }
// void main()
// {
//    char str[100];
//    re(str);
//    puts(str);
// }

// #include<stdio.h>
// #include<stdlib.h>
// void re(char str[])
// {
//     fgets(str,100,stdin);
// }
// void main()
// {
//    char str[100];
//    re(str);
//    puts(str);
// }

// #include<stdio.h>
// #include<stdlib.h>
// const char * re()
// {
//     return "hiroshima";
// }
// void main()
// {
//    puts(re());
// }

// #include<stdio.h>
// #include<string.h>
// #include<stdlib.h>
// const char * re()
// {
//     return "hiroshima";
// }
// void main()
// {
//    char arr[100];
//    strcpy(arr,re());
//    puts(arr);
// }

// #include <stdio.h>
// #include <string.h>
// #include <stdlib.h>
// const char *re(char str[], int length)
// {
//     char temp;
//     for (int i = 0, j = length-1; i <= length / 2; i++, j--)
//     {
//         temp=str[i];
//         str[i]=str[j];
//         str[j]=temp;
//     }
//     return str;
// }
// void main()
// {
//     char arr[100];
//     printf("Enter a string here = ");
//     fgets(arr, 100, stdin);
//     printf("String before reverse is %s\n", arr);
//     printf("String after reverse is %s\n", re(arr,strlen(arr)));
// }