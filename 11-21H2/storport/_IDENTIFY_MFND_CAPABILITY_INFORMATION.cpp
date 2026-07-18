struct _unnamed_383// Size=0x4 (Id=383)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long ReservedQoSSupported:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long LimitedQoSSupported:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
        unsigned long MixedQoSSupported:1;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x1
        unsigned long Reserved1:29;// Offset=0x0 Size=0x4 BitOffset=0x3 BitSize=0x1d
    };
};

struct _IDENTIFY_MFND_CAPABILITY_INFORMATION// Size=0x80 (Id=384)
{
    unsigned char SIG[4];// Offset=0x0 Size=0x4
    unsigned char MajorVersion;// Offset=0x4 Size=0x1
    unsigned char SubVersion;// Offset=0x5 Size=0x1
    unsigned char Reserved0[2];// Offset=0x6 Size=0x2
    unsigned short MPFC;// Offset=0x8 Size=0x2
    unsigned short APFC;// Offset=0xa Size=0x2
    unsigned short MQPC;// Offset=0xc Size=0x2
    unsigned short AQPC;// Offset=0xe Size=0x2
    unsigned short MMMC;// Offset=0x10 Size=0x2
    unsigned short AMMC;// Offset=0x12 Size=0x2
    unsigned short MNC;// Offset=0x14 Size=0x2
    unsigned short ANC;// Offset=0x16 Size=0x2
    unsigned long TNSS;// Offset=0x18 Size=0x4
    unsigned long ANSS;// Offset=0x1c Size=0x4
    unsigned long SPG;// Offset=0x20 Size=0x4
    unsigned long TRB;// Offset=0x24 Size=0x4
    unsigned long ARB;// Offset=0x28 Size=0x4
    unsigned long TWB;// Offset=0x2c Size=0x4
    unsigned long AWB;// Offset=0x30 Size=0x4
    unsigned long TRIOPS;// Offset=0x34 Size=0x4
    unsigned long ARIOPS;// Offset=0x38 Size=0x4
    unsigned long TWIOPS;// Offset=0x3c Size=0x4
    unsigned long AWIOPS;// Offset=0x40 Size=0x4
    struct _unnamed_383 Features;// Offset=0x44 Size=0x4
    unsigned char MSCCNC;// Offset=0x48 Size=0x1
    unsigned char Reserved2[55];// Offset=0x49 Size=0x37
};
