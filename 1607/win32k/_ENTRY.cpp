union _EINFO// Size=0x8 (Id=373)
{
    struct <unnamed-type-s>// Size=0x8 (Id=2224)
    {
        unsigned long long entryIndex:24;// Offset=0x0 Size=0x8 BitOffset=0x0 BitSize=0x18
        unsigned long long compatibilityBits:40;// Offset=0x0 Size=0x8 BitOffset=0x18 BitSize=0x28
    };
    struct _EINFO::<unnamed-type-s> s;// Offset=0x0 Size=0x8
    struct HOBJ__ * hFree;// Offset=0x0 Size=0x8
};

struct _OBJECTOWNER_S// Size=0x4 (Id=534)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long Lock:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long Pid_Shifted:31;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1f
    };
};

union _OBJECTOWNER// Size=0x4 (Id=456)
{
    struct _OBJECTOWNER_S Share;// Offset=0x0 Size=0x4
    unsigned long ulObj;// Offset=0x0 Size=0x4
};

union _UPPER_HANDLE_BITS// Size=0x2 (Id=262)
{
    struct <unnamed-type-s>// Size=0x2 (Id=4688)
    {
        unsigned char fullType;// Offset=0x0 Size=0x1
        union <unnamed-type-u>// Size=0x1 (Id=4690)
        {
            unsigned char unique;// Offset=0x0 Size=0x1
            unsigned char index;// Offset=0x0 Size=0x1
        };
        union _UPPER_HANDLE_BITS::<unnamed-type-s>::<unnamed-type-u> u;// Offset=0x1 Size=0x1
    };
    struct _UPPER_HANDLE_BITS::<unnamed-type-s> s;// Offset=0x0 Size=0x2
    unsigned short full;// Offset=0x0 Size=0x2
};

struct _ENTRY// Size=0x18 (Id=251)
{
    union _EINFO einfo;// Offset=0x0 Size=0x8
    union _OBJECTOWNER ObjectOwner;// Offset=0x8 Size=0x4
    union _UPPER_HANDLE_BITS UpperHandleBits;// Offset=0xc Size=0x2
    unsigned char Objt;// Offset=0xe Size=0x1
    unsigned char Flags;// Offset=0xf Size=0x1
    void * pUser;// Offset=0x10 Size=0x8
};
