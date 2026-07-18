struct _MMWSLENTRY// Size=0x8 (Id=860)
{
    struct // Size=0x8 (Id=0)
    {
        unsigned long long Valid:1;// Offset=0x0 Size=0x8 BitOffset=0x0 BitSize=0x1
        unsigned long long Spare:1;// Offset=0x0 Size=0x8 BitOffset=0x1 BitSize=0x1
        unsigned long long Hashed:1;// Offset=0x0 Size=0x8 BitOffset=0x2 BitSize=0x1
        unsigned long long Direct:1;// Offset=0x0 Size=0x8 BitOffset=0x3 BitSize=0x1
        unsigned long long Protection:5;// Offset=0x0 Size=0x8 BitOffset=0x4 BitSize=0x5
        unsigned long long Age:3;// Offset=0x0 Size=0x8 BitOffset=0x9 BitSize=0x3
        unsigned long long VirtualPageNumber:36;// Offset=0x0 Size=0x8 BitOffset=0xc BitSize=0x24
        unsigned long long HighActiveFlink:4;// Offset=0x0 Size=0x8 BitOffset=0x30 BitSize=0x4
        unsigned long long HighActiveBlink:4;// Offset=0x0 Size=0x8 BitOffset=0x34 BitSize=0x4
        unsigned long long Unused:8;// Offset=0x0 Size=0x8 BitOffset=0x38 BitSize=0x8
    };
};

struct _MMWSLE_FREE_ENTRY// Size=0x8 (Id=563)
{
    struct // Size=0x8 (Id=0)
    {
        unsigned long long MustBeZero:1;// Offset=0x0 Size=0x8 BitOffset=0x0 BitSize=0x1
        unsigned long long PreviousFree:27;// Offset=0x0 Size=0x8 BitOffset=0x1 BitSize=0x1b
        unsigned long long NextFree:36;// Offset=0x0 Size=0x8 BitOffset=0x1c BitSize=0x24
    };
};

union _unnamed_221// Size=0x8 (Id=221)
{
    void * VirtualAddress;// Offset=0x0 Size=0x8
    unsigned long long Long;// Offset=0x0 Size=0x8
    struct _MMWSLENTRY e1;// Offset=0x0 Size=0x8
    struct _MMWSLE_FREE_ENTRY e2;// Offset=0x0 Size=0x8
};
