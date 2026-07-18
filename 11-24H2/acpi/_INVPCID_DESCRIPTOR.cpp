struct _unnamed_69// Size=0x10 (Id=69)
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

struct _unnamed_70// Size=0x10 (Id=70)
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

struct _unnamed_71// Size=0x10 (Id=71)
{
    unsigned long long Reserved[2];// Offset=0x0 Size=0x10
};

union _INVPCID_DESCRIPTOR// Size=0x10 (Id=72)
{
    struct _unnamed_69 IndividualAddress;// Offset=0x0 Size=0x10
    struct _unnamed_70 SingleContext;// Offset=0x0 Size=0x10
    struct _unnamed_71 AllContextAndGlobals;// Offset=0x0 Size=0x10
    struct _unnamed_71 AllContext;// Offset=0x0 Size=0x10
};
