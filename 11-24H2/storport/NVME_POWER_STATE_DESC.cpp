struct NVME_POWER_STATE_DESC// Size=0x20 (Id=1251)
{
    unsigned short MP;// Offset=0x0 Size=0x2
    unsigned char Reserved0;// Offset=0x2 Size=0x1
    struct // Size=0x1 (Id=0)
    {
        unsigned char MPS:1;// Offset=0x3 Size=0x1 BitOffset=0x0 BitSize=0x1
        unsigned char NOPS:1;// Offset=0x3 Size=0x1 BitOffset=0x1 BitSize=0x1
        unsigned char Reserved1:6;// Offset=0x3 Size=0x1 BitOffset=0x2 BitSize=0x6
    };
    unsigned long ENLAT;// Offset=0x4 Size=0x4
    unsigned long EXLAT;// Offset=0x8 Size=0x4
    struct // Size=0x4 (Id=0)
    {
        unsigned char RRT:5;// Offset=0xc Size=0x1 BitOffset=0x0 BitSize=0x5
        unsigned char Reserved2:3;// Offset=0xc Size=0x1 BitOffset=0x5 BitSize=0x3
        unsigned char RRL:5;// Offset=0xd Size=0x1 BitOffset=0x0 BitSize=0x5
        unsigned char Reserved3:3;// Offset=0xd Size=0x1 BitOffset=0x5 BitSize=0x3
        unsigned char RWT:5;// Offset=0xe Size=0x1 BitOffset=0x0 BitSize=0x5
        unsigned char Reserved4:3;// Offset=0xe Size=0x1 BitOffset=0x5 BitSize=0x3
        unsigned char RWL:5;// Offset=0xf Size=0x1 BitOffset=0x0 BitSize=0x5
        unsigned char Reserved5:3;// Offset=0xf Size=0x1 BitOffset=0x5 BitSize=0x3
    };
    unsigned short IDLP;// Offset=0x10 Size=0x2
    struct // Size=0x1 (Id=0)
    {
        unsigned char Reserved6:6;// Offset=0x12 Size=0x1 BitOffset=0x0 BitSize=0x6
        unsigned char IPS:2;// Offset=0x12 Size=0x1 BitOffset=0x6 BitSize=0x2
    };
    unsigned char Reserved7;// Offset=0x13 Size=0x1
    unsigned short ACTP;// Offset=0x14 Size=0x2
    struct // Size=0x1 (Id=0)
    {
        unsigned char APW:3;// Offset=0x16 Size=0x1 BitOffset=0x0 BitSize=0x3
        unsigned char Reserved8:3;// Offset=0x16 Size=0x1 BitOffset=0x3 BitSize=0x3
        unsigned char APS:2;// Offset=0x16 Size=0x1 BitOffset=0x6 BitSize=0x2
    };
    unsigned char Reserved9[9];// Offset=0x17 Size=0x9
};
