#include<stdio.h>
//we can use break only in loop and swtich
//continue skip the current iteration and jumps to next one

int main(int argc, char const *argv[])
{
    for(int i=0;i<3;i++)
    {
        printf("External Loop\n");
        for(int j=0;j<5;j++)
        {
            printf("Internal Loop\n");
            if(i==2)
            {
                break;
            }
        }
    }

    //Continue
    for (int i = 0; i < 10; i++)
    {
        if(i==3)
        {
            continue;
        }
        printf("After Continue %d\n",i);
    }
    return 0;
}
