#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>
#include <stdbool.h>

#include "names.h"
#include "main.h"

// text

void FUN_Help(){
     for (int i = 0; i < FUN_Num_Max; i++) {
        Print_Function_Name(i, false);
     }
     printf("\n");
}

void FUN_Memcpy(){
    Print_Function_Name(FUN_Num_Memcpy, true);
    memcpy(&DTB.Vardas_[0], AsmDTB_Var, sizeof(AsmDTB_Var));
    memcpy(&DTB.Pavarde_[0], AsmDTB_Pav, sizeof(AsmDTB_Pav));
    DTB.ID_          = AsmDTB_ID;
    DTB.Age_         = AsmDTB_Age;
    
    memcpy(&DTB_New, &DTB, sizeof(DTB));
    
    printf("Vardas  : %s\n", DTB_New.Vardas_);
    printf("Pavarde : %s\n", DTB_New.Pavarde_);
    printf("ID      : %llu\n", DTB_New.ID_);
    printf("Age     : %u\n", DTB_New.Age_);
    printf("\n");
}

void FUN_Memmove(){
    Create_Din_Str_Mass(FUN_Num_Memmove, true);
    memmove(Din_Str, Org_Str+16, 10);
    printf("Move string from position: %i\n", 16);
    printf("Move string length: %i\n", 10);
    Destroy_Din_Str_Mass();
}

void FUN_Strcpy(){
    Create_Din_Str_Mass(FUN_Num_Strcpy, true);
    strcpy(Din_Str, Org_Str);
    Destroy_Din_Str_Mass();
}

void FUN_StrNcpy(){
    Create_Din_Str_Mass(FUN_Num_StrNcpy, true);
    strncpy(Din_Str, Org_Str, 11);
    printf("Copy string from position: %i\n", 1);
    printf("Copy string length: %i\n", 11);
    Destroy_Din_Str_Mass();
}

void FUN_StrCat(){
    char strcat_[] = " and hello girls";
    Create_Din_Str_Mass(FUN_Num_Strcat, true);
    printf("New string : %s\n", strcat_);
    strcpy(Din_Str, Org_Str);
    strcat(Din_Str, strcat_);
    Destroy_Din_Str_Mass();
}

void FUN_StrNCat(){
    char strcat_[] = " and hello girls and all people";
    Create_Din_Str_Mass(FUN_Num_StrNcat, true);
    printf("New string : %s\n", strcat_);
    strcpy(Din_Str, Org_Str);
    strncat(Din_Str, strcat_, 16);
    printf("Cat string from position: %i\n", 1);
    printf("Cat string length: %i\n", 16);
    Destroy_Din_Str_Mass();
}

void FUN_MemCmp(){
    int cmp_result;
    Create_Din_Str_Mass(FUN_Num_MemCmp, false);
    cmp_result = memcmp(Din_Str, Org_Str, sizeof(Din_Str));
    if (cmp_result == 0){
        printf("Result: Original string equivalent new string \n\n");
    } else if (cmp_result > 0) {
        printf("Result: Original string greater new string \n\n");
    } else {
        printf("Result: Original string lower new string \n\n");
    }
}

void FUN_StrCmp(){
    int cmp_result;
    Create_Din_Str_Mass(FUN_Num_StrCmp, false);
    cmp_result = strcmp(Org_Str, Din_Str);
    if (cmp_result == 0){
        printf("Result: first string equivalent second string \n\n");
    } else if (cmp_result > 0) {
        printf("Result: first string greater second string \n\n");
    } else {
        printf("Result: first string lower second string \n\n");
    }
}

void FUN_StrNCmp(){
    int cmp_result;
    int length_;
    char str_[80];
    Create_Din_Str_Mass(FUN_Num_StrNCmp, false);
    printf("Enter string length: ");
    scanf("%i", &length_);
    cmp_result = strncmp(Org_Str, Din_Str, length_);
    strncpy(str_, Din_Str, length_);
    if (cmp_result == 0){
        printf("Result: part of second string <%s%s\n\n", str_, "> exists in first string");
    } else {
        printf("Result: part of second string <%s%s\n\n", str_, "> not found in first string \n\n");
    }
}

void FUN_MemChr(){
    char str_[10];
    char* search_char_;
    int64_t position_char_;
    Create_Din_Str_Mass(FUN_Num_MemChr, true);
    printf("Enter char: ");
    scanf("%s", str_);
    search_char_ = memchr(Org_Str, str_[0], sizeof(Org_Str));
    position_char_ = search_char_-Org_Str+1;
    if (position_char_ >= 0) {
        printf("Result: Char position in original string is %d\n", position_char_);
    } else {
        printf("Result: This char in original string is not exists \n");
    }
}

void FUN_StrChr(){
    char str_[10];
    char* pchar_;
    int64_t position_char_;
    Create_Din_Str_Mass(FUN_Num_StrChr, true);
    printf("Enter char: ");
    scanf("%s", Din_Str);
    printf ("Result: Char in first string positions: ");
    pchar_ = strchr(Org_Str, Din_Str[0]);
    while (pchar_ != NULL) {
        position_char_ = pchar_ - Org_Str + 1;
        printf ("%d " , position_char_);
        pchar_ = strchr(pchar_+1, Din_Str[0]);
    }
    printf ("\n");
}

void FUN_StrCspn(){
    int pos_;
    Create_Din_Str_Mass(FUN_Num_StrCspn, false);
    pos_ = strcspn(Org_Str, Din_Str);
    printf ("Result: The first number in string is at position %d.\n", pos_ + 1);
}

void FUN_Strpbrk(){
    char* pchar_;
    uint8_t length_;
    Create_Din_Str_Mass(FUN_Num_Strpbrk, true);
    printf("Enter second string: ");
    scanf("%s", Din_Str);
    printf ("Result: Chars in first string: ");
    pchar_ = strpbrk(Org_Str, Din_Str);
    while (pchar_ != NULL) {
        printf ("%c " , *pchar_);
        pchar_ = strpbrk(pchar_+1, Din_Str);
    }
    printf ("\n");
}

void FUN_StrRChr(){
    char str_[10];
    char* pchar_;
    int64_t position_char_;
    Create_Din_Str_Mass(FUN_Num_StrRChr, true);
    printf("Enter char: ");
    scanf("%s", Din_Str);
    pchar_ = strrchr(Org_Str, Din_Str[0]);
    position_char_ = pchar_ - Org_Str + 1;
    printf ("Result: Char last positions in first string %d \n: ", position_char_);
}

void FUN_strstr(){
    char* pchar_;
    Create_Din_Str_Mass(FUN_Num_strstr, true);
    printf("Enter second string: ");
    scanf("%s", Din_Str);
    pchar_ = strstr(Org_Str, Din_Str);
    if (pchar_ != NULL) {
        printf ("Result: second string position in original string %d \n ", pchar_ - Org_Str + 1);
    }else {
        printf("Result: second string not exists in original string \n");
    }
}

void FUN_strtok(){
    char* pchar_;
    Create_Din_Str_Mass(FUN_Num_strtok, true);
    pchar_ = strtok(Org_Str, " .,-");
    while (pchar_ != NULL) {
        printf ("%s \n" , pchar_);
        pchar_ = strtok(NULL, " .,-");
    }
    printf ("\n");
}

void FUN_memset(){
    char value_[1];
    int length_;
    Create_Din_Str_Mass(FUN_Num_memset, true);
    strcpy (Din_Str, Org_Str);
    printf("Enter value string: ");
    scanf("%s", value_);
    printf("Enter value length: ");
    scanf("%i", &length_);
    memset(Din_Str, value_[0], length_);
    Destroy_Din_Str_Mass();
}

void FUN_strlen(){
    Print_Function_Name(FUN_Num_strlen, true);
    printf("Enter string: ");
    scanf("%s", Org_Str);
    printf("Result: string length - %d \n", strlen(Org_Str));
}

void FUN_printf(){
    Print_Function_Name(FUN_Num_printf, true);
    printf("Enter string: ");
    scanf("%s", Org_Str);
    printf("Result string: %s \n", Org_Str);
}

void FUN_fprintf(){
    FILE* pFile;
    Print_Function_Name(FUN_Num_fprintf, true);
    memcpy(&DTB.Vardas_[0], AsmDTB_Var, sizeof(AsmDTB_Var));
    memcpy(&DTB.Pavarde_[0], AsmDTB_Pav, sizeof(AsmDTB_Pav));
    DTB.ID_          = AsmDTB_ID;
    DTB.Age_         = AsmDTB_Age;
    printf("Enter file name: ");
    scanf("%s", Org_Str);
    pFile = fopen(Org_Str, "w");
    //pFile = fopen("123.txt", "w");
    //for int i = 0, i<4, i++) {
    fprintf(pFile, "Name %s \n", DTB.Vardas_);
    fprintf(pFile, "Surname %s \n", DTB.Pavarde_);
    fprintf(pFile, "ID %llu \n", DTB.ID_);
    fprintf(pFile, "Age %i \n", DTB.Age_);
    fclose(pFile);

    printf("Vardas  : %s\n", DTB.Vardas_);
    printf("Pavarde : %s\n", DTB.Pavarde_);
    printf("ID      : %llu\n", DTB.ID_);
    printf("Age     : %u\n", DTB.Age_);
    printf("\n");
}

void FUN_sscanf(){
    char str1[10];
    char str2[10];
    Create_Din_Str_Mass(FUN_Num_sscanf, true);
    sscanf(Org_Str, "%s %*s %*s %*s %s", str1, str2);
    printf("Result string: %s %s \n", str1, str2);
}

void FUN_atof(){
    Print_Function_Name(FUN_Num_atof, true);
    printf("Enter string: ");
    scanf("%s", Org_Str);
    printf("Result double: %f \n", atof(Org_Str));
}

void FUN_atoi(){
    Print_Function_Name(FUN_Num_atoi, true);
    printf("Enter string: ");
    scanf("%s", Org_Str);
    printf("Result double: %d \n", atoi(Org_Str));
}

void FUN_atol(){
    Print_Function_Name(FUN_Num_atol, true);
    printf("Enter string: ");
    scanf("%s", Org_Str);
    printf("Result double: %lu \n", atol(Org_Str));
}

void FUN_isdigit(){
    Print_Function_Name(FUN_Num_isdigit, true);
    printf("Enter string: ");
    scanf("%s", Org_Str);
    if (isdigit(Org_Str[0])) {
        printf("Result: this string is digit %d \n", atoi(Org_Str));
    } else {
        printf("Result: this string have chars");
    }
}
void FUN_isalnum(){
    int length_;
    Print_Function_Name(FUN_Num_isalnum, true);
    printf("Enter string: ");
    scanf("%s", Org_Str);
    length_ = strlen(Org_Str);
    for (int i = 0; i < length_; i++) {
        if (isalnum(Org_Str[i])){
            printf("Result: this char '%c' is alphanumeric \n", Org_Str[i]);
        } else {
            printf("Result: this char '%c' not alphanumeric \n", Org_Str[i]);
        }
    }
}
void FUN_isalpha(){
    int length_;
    Print_Function_Name(FUN_Num_isalpha, true);
    printf("Enter string: ");
    scanf("%s", Org_Str);
    length_ = strlen(Org_Str);
    for (int i = 0; i < length_; i++) {
        if (isalpha(Org_Str[i])){
            printf("Result: this char '%c' is alphabetic \n", Org_Str[i]);
        } else {
            printf("Result: this char '%c' not alphabetic \n", Org_Str[i]);
        }
    }
}

void FUN_isupper(){
    int length_;
    Print_Function_Name(FUN_Num_isupper, true);
    printf("Enter string: ");
    scanf("%s", Org_Str);
    length_ = strlen(Org_Str);
    for (int i = 0; i < length_; i++) {
        if (isupper(Org_Str[i])){
            printf("Result: this char '%c' is uppercase \n", Org_Str[i]);
        } else {
            printf("Result: this char '%c' not uppercase \n", Org_Str[i]);
        }
    }
}
