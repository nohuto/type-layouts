struct _List// Size=0x10 (Id=319)
{
    struct _List * plistPrev;// Offset=0x0 Size=0x8
    struct _List * plistNext;// Offset=0x8 Size=0x8
};

struct _resource// Size=0x28 (Id=281)
{
    unsigned long dwResType;// Offset=0x0 Size=0x4
    struct _ctxt * pctxtOwner;// Offset=0x8 Size=0x8
    void * pvResObj;// Offset=0x10 Size=0x8
    struct _List list;// Offset=0x18 Size=0x10
};
