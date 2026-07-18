union _EINFO// Size=0x8 (Id=507)
{
    struct _BASEOBJECT * pobj;// Offset=0x0 Size=0x8
    struct HOBJ__ * hFree;// Offset=0x0 Size=0x8
};

struct _OBJECTOWNER_S// Size=0x4 (Id=545)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long Lock:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long Pid_Shifted:31;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1f
    };
};

union _OBJECTOWNER// Size=0x4 (Id=466)
{
    struct _OBJECTOWNER_S Share;// Offset=0x0 Size=0x4
    unsigned long ulObj;// Offset=0x0 Size=0x4
};

struct _ENTRY// Size=0x18 (Id=460)
{
    union _EINFO einfo;// Offset=0x0 Size=0x8
    union _OBJECTOWNER ObjectOwner;// Offset=0x8 Size=0x4
    unsigned short FullUnique;// Offset=0xc Size=0x2
    unsigned char Objt;// Offset=0xe Size=0x1
    unsigned char Flags;// Offset=0xf Size=0x1
    void * pUser;// Offset=0x10 Size=0x8
};
