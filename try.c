#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
    char ch;
    z:  ch=getch();
            switch(ch)
            {
                case 80 :
                            printf("%d\n",ch);
                            break;
                case 77 :
                            printf("%d\n",ch);
                            break;
                case 72 :
                            printf("%d\n",ch);
                            break;
                case 75 :
                            printf("%d\n",ch);
                            break;
                case 'e' : exit(0);
                case 'E' : exit(0);
               default : printf("Press an arrow key\n");
            }
            goto z;
            return 0;
}
