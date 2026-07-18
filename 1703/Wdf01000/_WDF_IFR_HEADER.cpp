struct _GUID// Size=0x10 (Id=117)
{
    unsigned long Data1;// Offset=0x0 Size=0x4
    unsigned short Data2;// Offset=0x4 Size=0x2
    unsigned short Data3;// Offset=0x6 Size=0x2
    unsigned char Data4[8];// Offset=0x8 Size=0x8
};

struct _WDF_IFR_OFFSET// Size=0x4 (Id=427)
{
    union // Size=0x4 (Id=0)
    {
        union <unnamed-type-u>// Size=0x4 (Id=18737)
        {
            struct <unnamed-type-s>// Size=0x4 (Id=18738)
            {
                unsigned short Current;// Offset=0x0 Size=0x2
                unsigned short Previous;// Offset=0x2 Size=0x2
            };
            struct _WDF_IFR_OFFSET::<unnamed-type-u>::<unnamed-type-s> s;// Offset=0x0 Size=0x4
            long AsLONG;// Offset=0x0 Size=0x4
        };
        union _WDF_IFR_OFFSET::<unnamed-type-u> u;// Offset=0x0 Size=0x4
    };
};

struct _WDF_IFR_HEADER// Size=0x48 (Id=446)
{
    struct _GUID Guid;// Offset=0x0 Size=0x10
    unsigned char * Base;// Offset=0x10 Size=0x8
    unsigned long Size;// Offset=0x18 Size=0x4
    struct _WDF_IFR_OFFSET Offset;// Offset=0x1c Size=0x4
    long Sequence;// Offset=0x20 Size=0x4
    char DriverName[32];// Offset=0x24 Size=0x20
};
