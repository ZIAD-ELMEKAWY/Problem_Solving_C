#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

unsigned char Pass[5] = {'a', 'b', 'c', '1', '2'};
unsigned char UserPass[5];

int main()
{
    unsigned int UserPassIndex = 0;
    unsigned int PassFlag = 0;
    unsigned int Trails =  0;

    while(Trails < 3){
        printf("Please enter password : ");
        for(UserPassIndex = 0; UserPassIndex < 5; UserPassIndex++){
            scanf("%c", &UserPass[UserPassIndex]);
            fflush(stdin); /* Clear buffer */
        }
        printf("\n");

        printf("Please wait ");
        for(UserPassIndex = 0; UserPassIndex < 15; UserPassIndex++){
            printf(".");
            Sleep(100);
        }
        printf("\n");

        for(UserPassIndex = 0; UserPassIndex < 5; UserPassIndex++){
            if(UserPass[UserPassIndex] != Pass[UserPassIndex]){
                PassFlag = 1;
                break;
            }
        }

        if(1 == PassFlag){
            Trails++;
            PassFlag = 0;
            printf("Invalid Pass !!! \n");
            printf("Please enter your pass again \n");
        }
        else{
            printf("Welcome Ziad\n");
            break;
        }
    }

    return 0;
}
