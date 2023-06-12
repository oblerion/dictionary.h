#include "dictionary.h"
// ----- private function e_dictionary --------------
struct e_dict* EDICT()
{
    struct e_dict* e_dy = (struct e_dict*)malloc(sizeof(struct e_dict));
    e_dy->pvar = NULL;
    e_dy->pkey = NULL;
    e_dy->ptr=NULL;
    return e_dy;
}

// ----- public function dictionary  --------------
dict* DICT()
{
    dict* dy = (dict*)malloc(sizeof(dict));
    dy->ptr = NULL;
    return dy;
}
void dictadd(dict* dic,const char* key,void* var)
{
    if(dic==NULL) return;
    if(dic->ptr==NULL)
    {
        dic->ptr = EDICT();
        dic->ptr->pkey = (char*)malloc(strlen(key));
        strcpy(dic->ptr->pkey,key);
        dic->ptr->pvar=var;
    }
    else
    {
        struct e_dict* edict=dic->ptr;
        while(edict!=NULL)
        {
            if(edict->ptr==NULL)
            {
                edict->ptr = EDICT();
                edict->ptr->pkey = (char*)malloc(strlen(key));
                strcpy(edict->ptr->pkey,key);
                edict->ptr->pvar=var;
                break;
            }
            edict = edict->ptr;
        }
    }
}
void* dictat(dict* dic,const char* key)
{
    if(dic==NULL) return NULL;
    struct e_dict* edict=dic->ptr;
    while(edict!=NULL)
    {
        if(strcmp(edict->pkey,key)==0)
        {
             return edict->pvar;
        }
        edict = edict->ptr;
    }
    return NULL;
}
void dictfree(dict* dic)
{
    if(dic==NULL)return;
    struct e_dict* edict ;
    while(dic->ptr!=NULL)
    {
        edict = dic->ptr->ptr;
        free(dic->ptr);
        dic->ptr = edict;
    }
    free(dic);
}
