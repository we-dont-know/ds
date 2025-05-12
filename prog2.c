#include<stdio.h>
#include<string.h>
int main()
{
    int enc[3][3]={  { 6, 24, 1 }, { 13, 16, 10 }, { 20, 17, 15 }  };
    int dec[3][3]={  { 8, 5, 10 }, { 21, 8, 21 }, { 21, 12, 8 }  };
    int i,j,t=0,c[20],d[20];
    char msg[20];
    printf("Enter 3 letters in uppercase without space\n");
    scanf("%s",msg);
    for(i=0;i<3;i++)
    {
        c[i]=msg[i]-65;
        printf("%d\t",c[i]);
    }
    for(i=0;i<3;i++)
    {
       t=0;
       for(j=0;j<3;j++)
       {
           t=t+(enc[i][j]*c[j]);
       }
       d[i]=t%26;
    }
    printf("Encrypted text is: ");
    for(i=0;i<3;i++)
    {
        printf("%c",d[i]+65);
    }
    for(i=0;i<3;i++)
    {
       t=0;
       for(j=0;j<3;j++)
       {
           t=t+(dec[i][j]*d[j]);
       }
       c[i]=t%26;
    }
    printf("\n decrypted text is: ");
    for(i=0;i<3;i++)
    {
        printf("%c",c[i]+65);
    }
    
}
