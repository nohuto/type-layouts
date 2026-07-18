struct _MECH_STATUS// Size=0xc (Id=519)
{
    unsigned char OperationCode;// Offset=0x0 Size=0x1
    struct // Size=0x1 (Id=0)
    {
        unsigned char Reserved:5;// Offset=0x1 Size=0x1 BitOffset=0x0 BitSize=0x5
        unsigned char Lun:3;// Offset=0x1 Size=0x1 BitOffset=0x5 BitSize=0x3
    };
    unsigned char Reserved1[6];// Offset=0x2 Size=0x6
    unsigned char AllocationLength[2];// Offset=0x8 Size=0x2
    unsigned char Reserved2[1];// Offset=0xa Size=0x1
    unsigned char Control;// Offset=0xb Size=0x1
};
