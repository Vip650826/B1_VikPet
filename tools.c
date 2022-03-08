#include <stdio.h>
#include <stdbool.h>

#include "main.h"

void Print_Result(char *ptr) {
    //printf("Address HEX : %#X\n", *ptr);
    printf("Result : %s\n", ptr);
}

void Enter_Print_Str(){
    printf("Enter string: ");
    scanf("%s", Org_Str);
    Print_Result(&Org_Str[0]);
}

void Create_Din_Str_Mass(uint8_t Func_Num, bool org_str_){
    Print_Function_Name(Func_Num, true);
    if (org_str_){
        memcpy(&Org_Str[0], ORG_String, sizeof(ORG_String));
        printf("Original string : %s\n", Org_Str);
    } else {
        printf("Enter first string: ");
        scanf("%s", Org_Str);
        printf("Enter second string: ");
        scanf("%s", Din_Str);
    }
}

void Destroy_Din_Str_Mass(){
    printf("Result string   : %s\n", Din_Str);
    //free(Din_Str);
    printf("\n");
}
