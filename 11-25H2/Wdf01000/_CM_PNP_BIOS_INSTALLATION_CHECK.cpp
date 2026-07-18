struct _CM_PNP_BIOS_INSTALLATION_CHECK// Size=0x21 (Id=3544)
{
    unsigned char Signature[4];// Offset=0x0 Size=0x4
    unsigned char Revision;// Offset=0x4 Size=0x1
    unsigned char Length;// Offset=0x5 Size=0x1
    unsigned short ControlField;// Offset=0x6 Size=0x2
    unsigned char Checksum;// Offset=0x8 Size=0x1
    unsigned long EventFlagAddress;// Offset=0x9 Size=0x4
    unsigned short RealModeEntryOffset;// Offset=0xd Size=0x2
    unsigned short RealModeEntrySegment;// Offset=0xf Size=0x2
    unsigned short ProtectedModeEntryOffset;// Offset=0x11 Size=0x2
    unsigned long ProtectedModeCodeBaseAddress;// Offset=0x13 Size=0x4
    unsigned long OemDeviceId;// Offset=0x17 Size=0x4
    unsigned short RealModeDataBaseAddress;// Offset=0x1b Size=0x2
    unsigned long ProtectedModeDataBaseAddress;// Offset=0x1d Size=0x4
};
