#include<stdio.h>
#include<ctype.h>
int main()
{
    int key;
    char msg[20];
    char ch;
    printf("Enter the message to encrypt\n");
    scanf("%s",msg);
    printf("Enter the key\n");
    scanf("%d",&key);
    for(int i=0;msg[i]!='\0';++i)
    {
        ch=msg[i];
        if(isalnum(ch))
        {
            if(isupper(ch))
            {
                ch=(ch-'A'+key)%26+'A';
            }
            if(islower(ch))
            {
                ch=(ch-'a'+key)%26+'a';
            }
            if(isdigit(ch))
            {
                ch=(ch-'0'+key)%10+'0';
            }
        }
        else
        printf("Invalid character");
        
        msg[i]=ch;
    }
    printf("\n Then encrypted msg is %s",msg);
}
