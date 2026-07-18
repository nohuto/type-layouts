struct _LBA// Size=0x8 (Id=622)
{
    unsigned char StartingBlockAddress[4];// Offset=0x0 Size=0x4
    unsigned char PlayLength[4];// Offset=0x4 Size=0x4
};

struct _MSF// Size=0x8 (Id=630)
{
    unsigned char Reserved1;// Offset=0x0 Size=0x1
    unsigned char StartingM;// Offset=0x1 Size=0x1
    unsigned char StartingS;// Offset=0x2 Size=0x1
    unsigned char StartingF;// Offset=0x3 Size=0x1
    unsigned char EndingM;// Offset=0x4 Size=0x1
    unsigned char EndingS;// Offset=0x5 Size=0x1
    unsigned char EndingF;// Offset=0x6 Size=0x1
    unsigned char Reserved2;// Offset=0x7 Size=0x1
};

struct _PLAY_CD// Size=0xc (Id=485)
{
    unsigned char OperationCode;// Offset=0x0 Size=0x1
    struct // Size=0x1 (Id=0)
    {
        unsigned char Reserved1:1;// Offset=0x1 Size=0x1 BitOffset=0x0 BitSize=0x1
        unsigned char CMSF:1;// Offset=0x1 Size=0x1 BitOffset=0x1 BitSize=0x1
        unsigned char ExpectedSectorType:3;// Offset=0x1 Size=0x1 BitOffset=0x2 BitSize=0x3
        unsigned char Lun:3;// Offset=0x1 Size=0x1 BitOffset=0x5 BitSize=0x3
    };
    union // Size=0x8 (Id=0)
    {
        struct _LBA LBA;// Offset=0x2 Size=0x8
        struct _MSF MSF;// Offset=0x2 Size=0x8
    };
    struct // Size=0x1 (Id=0)
    {
        unsigned char Audio:1;// Offset=0xa Size=0x1 BitOffset=0x0 BitSize=0x1
        unsigned char Composite:1;// Offset=0xa Size=0x1 BitOffset=0x1 BitSize=0x1
        unsigned char Port1:1;// Offset=0xa Size=0x1 BitOffset=0x2 BitSize=0x1
        unsigned char Port2:1;// Offset=0xa Size=0x1 BitOffset=0x3 BitSize=0x1
        unsigned char Reserved2:3;// Offset=0xa Size=0x1 BitOffset=0x4 BitSize=0x3
        unsigned char Speed:1;// Offset=0xa Size=0x1 BitOffset=0x7 BitSize=0x1
    };
    unsigned char Control;// Offset=0xb Size=0x1
};
