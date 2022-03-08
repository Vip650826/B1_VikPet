#include "names.h"
#include "main.h"

void Print_Function_Name(uint8_t Func_Num, bool print_line){
    if (print_line) {
        printf("\n");
    }
    printf("%i %s ", Func_Num, ": ");
    switch(Func_Num){
        case FUN_Num_Exit:
            printf("Exit \n");
        break;
        case FUN_Num_Help:
            printf("Show all function \n");
        break;
        case FUN_Num_Memcpy:
            printf("<memcpy> Copy Memory \n");
        break;
        case FUN_Num_Memmove:
            printf("<memmove> Memmove string \n");
        break;
        case FUN_Num_Strcpy:
            printf("<strcpy> Copy string \n");
        break;
        case FUN_Num_StrNcpy:
            printf("<strncpy> Copy string by number \n");
        break;
        case FUN_Num_Strcat:
            printf("<strcat> Cat strings \n");
        break;
        case FUN_Num_StrNcat:
            printf("strncat> Cat strings by number \n");
        break;
        case FUN_Num_MemCmp:
            printf("<memcmp> Compare memory block \n");
        break;
        case FUN_Num_StrCmp:
            printf("<strcmp> Compare strings \n");
        break;
        case FUN_Num_StrNCmp:
            printf("<strncmp> Compare strings by number \n");
        break;
        case FUN_Num_MemChr:
            printf("<memchr> Get position char in memory block \n");
        break;
        case FUN_Num_StrChr:
            printf("<strchr> Get position char in string \n");
        break;
        case FUN_Num_StrCspn:
            printf("<strcspn> Get span until character in string \n");
        break;
        case FUN_Num_Strpbrk:
            printf("<strpbrk> Locate characters in string \n");
        break;
        case FUN_Num_StrRChr:
            printf("<strrchr> Get last char position in string \n");
        break;
        case FUN_Num_strstr:
            printf("<strstr> Get substring position \n");
        break;
        case FUN_Num_strtok:
            printf("<strtok> Split string into tokens \n");
        break;
        case FUN_Num_memset:
            printf("<memset> Fill block of memory \n");
        break;
        case FUN_Num_strlen:
            printf("<strlen> Get string length \n");
        break;
        case FUN_Num_printf:
            printf("<printf> Print formatted data to stdout \n");
        break;
        case FUN_Num_fprintf:
            printf("<fprintf> Writes the C string pointed by format to the stream \n");
        break;
        case FUN_Num_sscanf:
            printf("<sscanf> Read formatted data from string \n");
        break;
        case FUN_Num_atof:
            printf("<atof> Convert string to double \n");
        break;
        case FUN_Num_atoi:
            printf("<atoi> Convert string to integer \n");
        break;
        case FUN_Num_atol:
            printf("<atol> Convert string to long integer \n");
        break;
        case FUN_Num_isdigit:
            printf("<isdigit> Check if character is decimal digit \n");
        break;
        case FUN_Num_isalnum:
            printf("<isalnum> Check if character is decimal digit or alphanumeric \n");
        break;
        case FUN_Num_isalpha:
            printf("<isalpha> Check if character is alphabetic \n");
        break;
        case FUN_Num_isupper:
            printf("<isupper> Check if character is uppercase letter \n");
        break;
    }
}

bool Main_Loop(uint8_t fun_num_){
    bool result = true;
    switch(fun_num_){
        case FUN_Num_Exit:
            result = false;
        break;
        case FUN_Num_Help:
            FUN_Help();
        break;
        case FUN_Num_Memcpy:
            FUN_Memcpy();
        break;
        case FUN_Num_Memmove:
            FUN_Memmove();
        break;
        case FUN_Num_Strcpy:
            FUN_Strcpy();
        break;
        case FUN_Num_StrNcpy:
            FUN_StrNcpy();
        break;
        case FUN_Num_Strcat:
            FUN_StrCat();
        break;
        case FUN_Num_StrNcat:
            FUN_StrNCat();
        break;
        case FUN_Num_MemCmp:
            FUN_MemCmp();
        break;
        case FUN_Num_StrCmp:
            FUN_StrCmp();
        break;
        case FUN_Num_StrNCmp:
            FUN_StrNCmp();
        break;
        case FUN_Num_MemChr:
            FUN_MemChr();
        break;
        case FUN_Num_StrChr:
            FUN_StrChr();
        break;
        case FUN_Num_StrCspn:
            FUN_StrCspn();
        break;
        case FUN_Num_Strpbrk:
            FUN_Strpbrk();
        break;
        case FUN_Num_StrRChr:
            FUN_StrRChr();
        break;
        case FUN_Num_strstr:
            FUN_strstr();
        break;
        case FUN_Num_strtok:
            FUN_strtok();
        break;
        case FUN_Num_memset:
            FUN_memset();
        break;
        case FUN_Num_strlen:
            FUN_strlen();
        break;
        case FUN_Num_printf:
            FUN_printf();
        break;
        case FUN_Num_fprintf:
            FUN_fprintf();
        break;
        case FUN_Num_sscanf:
            FUN_sscanf();
        break;
        case FUN_Num_atof:
            FUN_atof();
        break;
        case FUN_Num_atoi:
            FUN_atoi();
        break;
        case FUN_Num_atol:
            FUN_atol();
        break;
        case FUN_Num_isdigit:
            FUN_isdigit();
        break;
        case FUN_Num_isalnum:
            FUN_isalnum();
        break;
        case FUN_Num_isalpha:
            FUN_isalpha();
        break;
        case FUN_Num_isupper:
            FUN_isupper();
        break;
    }
    return result;
}
