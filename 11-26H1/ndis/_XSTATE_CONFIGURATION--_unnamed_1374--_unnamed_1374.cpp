struct _XSTATE_CONFIGURATION::_unnamed_1374::_unnamed_1374// Size=0xc (Id=1374)
{
    unsigned short MaxSveVectorLength;// Offset=0x0 Size=0x2
    unsigned short MaxSmeVectorLength;// Offset=0x2 Size=0x2
    unsigned short SmeZTRegisterCount;// Offset=0x4 Size=0x2
    union // Size=0x2 (Id=0)
    {
        unsigned short Arm64Flags;// Offset=0x6 Size=0x2
        struct // Size=0x2 (Id=0)
        {
            unsigned short SmeFa64:1;// Offset=0x6 Size=0x2 BitOffset=0x0 BitSize=0x1
        };
    };
    unsigned char SupportedSmeVectorLengths;// Offset=0x8 Size=0x1
    unsigned char Arm64Spare[3];// Offset=0x9 Size=0x3
};
