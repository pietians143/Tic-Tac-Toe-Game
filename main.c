#include<stdio.h>
#define stdin stdin
char a[9]={'1','2','3','4','5','6','7','8','9'};
int k=0;
int end=1;
void draw()
{
    
    printf("\n\n\n\t\t %c | %c | %c ",a[0],a[1],a[2]);
    printf("\n\t\t --|-- |--");
    printf("\n\t\t %c | %c | %c ",a[3],a[4],a[5]);
    printf("\n\t\t --|-- |--");
    printf("\n\t\t %c | %c | %c ",a[6],a[7],a[8]);
}
void get_input()
{
    char pos;
    printf("Enter your  position");
    scanf("%c",&pos);
    if(k==0)
    {
         for(int i=0;i<=8;i++)
        {
            if(a[i]==pos)
            {
                a[i]='x';
                k=1;
            }
            
        }
    }
    else {
    for(int i=0;i<=8;i++)
        {
            if(a[i]==pos)
            {
                a[i]='0';
                k=0;
            }
        }
    }
        

}
int game_over()
{
if(a[0]=='x'&&a[1]=='x'&&a[2]=='x')
return (1);
else if(a[3]=='x'&&a[4]=='x'&&a[5]=='x')
return (1);
else if(a[6]=='x'&&a[7]=='x'&&a[8]=='x')
return (1);
else if(a[0]=='x'&&a[3]=='x'&&a[6]=='x')
return (1);
else if(a[1]=='x'&&a[4]=='x'&&a[7]=='x')
return (1);
else if(a[2]=='x'&&a[5]=='x'&&a[8]=='x')
return (1);
else if(a[0]=='x'&&a[4]=='x'&&a[8]=='x')
return (1);
else if(a[2]=='x'&&a[4]=='x'&&a[6]=='x')
return (1);
else if(a[0]=='0'&&a[1]=='0'&&a[2]=='0')
return (2);
else if(a[3]=='0'&&a[4]=='0'&&a[5]=='0')
return (2);
else if(a[6]=='0'&&a[7]=='0'&&a[8]=='0')
return (2);
else if(a[0]=='0'&&a[3]=='0'&&a[6]=='0')
return (2);
else if(a[1]=='0'&&a[4]=='0'&&a[7]=='0')
return (2);
else if(a[2]=='0'&&a[5]=='0'&&a[8]=='0')
return (2);
else if(a[0]=='0'&&a[4]=='0'&&a[8]=='0')
return (2);
else if(a[2]=='0'&&a[4]=='0'&&a[6]=='0')
return (2);
else
return -1;

}
void final()
{ int var;
var=game_over();
if(var==1)
{
    printf("\n\t\t Player 1 win the  match\n");
    end=0;
}
    else if (var==2)
    {
        printf("\n\n\t\t Player 2 win the match\n");
        end=0;
    }
        else
        {

        }
}
int main()
{
    char c;
        label:
    draw();
    while(end){
     get_input();
     draw();
     final();
    }
     printf("Do you wanna play again\n");
     printf("if u  pressY or y\n");
     fflush(stdin);
     scanf("%c",&c);
     if(c=='y')
     {
    a[0]='1';a[1]='2';a[2]='3';a[3]='4';a[4]='5';a[5]='6';a[6]='7';a[7]='8';a[8]='9';
    end=0;
    k=0;
    
   goto label;
     }
     
    
                  return 0;
}
