#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>
#include <stdbool.h>
#include "main.h"
#include "names.h"

int main()
//int main(int argc, char *argv[])
{
    //char str_exit;
    uint8_t fun_num;
    char answer_[10];
    bool continue_ = true;
	// tekstas52aa
    //FUN_Help();
    do {
        system("cls");
        FUN_Help();
        printf("To run the function enter the number: ");
        scanf("%i", &fun_num);

        continue_ = Main_Loop(fun_num);
        if (continue_ == true){
            printf("Continue to work ('Y' or 'N') ?: ");
            scanf("%s", answer_);
            if ((strncmp(answer_, "N", 1) == 0) || (strncmp(answer_, "n", 1) == 0)){
                continue_ = false;
            }
            //scanf("%c", &answer_);
            //if ((answer_ == 'N') || (answer_ == 'n')) {
            //    continue_ = false;
            //}
        }
    } while (continue_);
    //} while(Main_Loop(fun_num));

    //Enter_Print_Str();

    //printf("Press any key to continue.....");
    //scanf("%s",str_exit);
    return 0;
}
