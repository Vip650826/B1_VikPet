#ifndef MAIN_H
#define	MAIN_H

#include <stdint.h>

#define ORG_String "Hello world and guys"

#define AsmDTB_Var "Vik"
#define AsmDTB_Pav "Pet"
#define AsmDTB_ID  36508260618
#define AsmDTB_Age 50

typedef enum {
    FUN_Num_Exit,
    FUN_Num_Help,
    FUN_Num_Memcpy,
    FUN_Num_Memmove,
    FUN_Num_Strcpy,
    FUN_Num_StrNcpy,
    FUN_Num_Strcat,
    FUN_Num_StrNcat,
    FUN_Num_MemCmp,
    FUN_Num_StrCmp,
    FUN_Num_StrNCmp,
    FUN_Num_MemChr,
    FUN_Num_StrChr,
    FUN_Num_StrCspn,
    FUN_Num_Strpbrk,
    FUN_Num_StrRChr,
    FUN_Num_strstr,
    FUN_Num_strtok,
    FUN_Num_memset,
    FUN_Num_strlen,
    FUN_Num_printf,
    FUN_Num_fprintf,
    FUN_Num_sscanf,
    FUN_Num_atof,
    FUN_Num_atoi,
    FUN_Num_atol,
    FUN_Num_isdigit,
    FUN_Num_isalnum,
    FUN_Num_isalpha,
    FUN_Num_isupper,
    FUN_Num_Max,
} eEnumFUN_t;

struct {
    char Vardas_[20];
    char Pavarde_[20];
    int64_t ID_;
    uint8_t Age_;
} DTB, DTB_New;

char Org_Str[80];
char Din_Str[80];

#endif
