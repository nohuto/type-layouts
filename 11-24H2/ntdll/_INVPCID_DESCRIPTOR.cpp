struct _unnamed_66// Size=0x10 (Id=66)
{
    union // Size=0x8 (Id=0)
    {
        struct // Size=0x8 (Id=0)
        {
            unsigned long long Pcid:12;// Offset=0x0 Size=0x8 BitOffset=0x0 BitSize=0xc
            unsigned long long Reserved:52;// Offset=0x0 Size=0x8 BitOffset=0xc BitSize=0x34
        };
        unsigned long long EntirePcid;// Offset=0x0 Size=0x8
    };
    unsigned long long Virtual;// Offset=0x8 Size=0x8
};

struct _unnamed_67// Size=0x10 (Id=67)
{
    union // Size=0x8 (Id=0)
    {
        struct // Size=0x8 (Id=0)
        {
            unsigned long long Pcid:12;// Offset=0x0 Size=0x8 BitOffset=0x0 BitSize=0xc
            unsigned long long Reserved:52;// Offset=0x0 Size=0x8 BitOffset=0xc BitSize=0x34
        };
        unsigned long long EntirePcid;// Offset=0x0 Size=0x8
    };
    unsigned long long Reserved2;// Offset=0x8 Size=0x8
};

struct _unnamed_68// Size=0x10 (Id=68)
{
    unsigned long long Reserved[2];// Offset=0x0 Size=0x10
};

union _INVPCID_DESCRIPTOR// Size=0x10 (Id=69)
{
    struct _unnamed_66 IndividualAddress;// Offset=0x0 Size=0x10
    struct _unnamed_67 SingleContext;// Offset=0x0 Size=0x10
    struct _unnamed_68 AllContextAndGlobals;// Offset=0x0 Size=0x10
    struct _unnamed_68 AllContext;// Offset=0x0 Size=0x10
};
