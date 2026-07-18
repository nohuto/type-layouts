struct _SET_CD_SPEED// Size=0xc (Id=447)
{
    unsigned char OperationCode;// Offset=0x0 Size=0x1
    union // Size=0x1 (Id=0)
    {
        unsigned char Reserved1;// Offset=0x1 Size=0x1
        struct // Size=0x1 (Id=0)
        {
            unsigned char RotationControl:2;// Offset=0x1 Size=0x1 BitOffset=0x0 BitSize=0x2
            unsigned char Reserved3:6;// Offset=0x1 Size=0x1 BitOffset=0x2 BitSize=0x6
        };
    };
    unsigned char ReadSpeed[2];// Offset=0x2 Size=0x2
    unsigned char WriteSpeed[2];// Offset=0x4 Size=0x2
    unsigned char Reserved2[5];// Offset=0x6 Size=0x5
    unsigned char Control;// Offset=0xb Size=0x1
};
