struct _SECURITY_PROTOCOL_IN// Size=0xc (Id=493)
{
    unsigned char OperationCode;// Offset=0x0 Size=0x1
    unsigned char SecurityProtocol;// Offset=0x1 Size=0x1
    unsigned char SecurityProtocolSpecific[2];// Offset=0x2 Size=0x2
    struct // Size=0x1 (Id=0)
    {
        unsigned char Reserved1:7;// Offset=0x4 Size=0x1 BitOffset=0x0 BitSize=0x7
        unsigned char INC_512:1;// Offset=0x4 Size=0x1 BitOffset=0x7 BitSize=0x1
    };
    unsigned char Reserved2;// Offset=0x5 Size=0x1
    unsigned char AllocationLength[4];// Offset=0x6 Size=0x4
    unsigned char Reserved3;// Offset=0xa Size=0x1
    unsigned char Control;// Offset=0xb Size=0x1
};
