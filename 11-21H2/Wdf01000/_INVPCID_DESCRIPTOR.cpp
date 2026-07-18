struct _unnamed_1266// Size=0x10 (Id=1266)
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

struct _unnamed_1268// Size=0x10 (Id=1268)
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

struct _unnamed_1269// Size=0x10 (Id=1269)
{
    unsigned long long Reserved[2];// Offset=0x0 Size=0x10
};

union _INVPCID_DESCRIPTOR// Size=0x10 (Id=1270)
{
    struct _unnamed_1266 IndividualAddress;// Offset=0x0 Size=0x10
    struct _unnamed_1268 SingleContext;// Offset=0x0 Size=0x10
    struct _unnamed_1269 AllContextAndGlobals;// Offset=0x0 Size=0x10
    struct _unnamed_1269 AllContext;// Offset=0x0 Size=0x10
};
