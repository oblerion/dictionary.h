#ifndef DICTIONARY_H
#define DICTIONARY_H

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

// element
struct e_dict
{
        void* pvar;
        char* pkey;
        struct e_dict* ptr;
};
// dictionary
typedef struct
{
    struct e_dict* ptr;
} dict;

dict* DICT();
void dictadd(dict* dic,const char* key,void* var);
void* dictat(dict* dic,const char* key);
void dictfree(dict* dic);

#endif
