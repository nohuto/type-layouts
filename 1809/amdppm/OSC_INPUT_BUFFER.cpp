struct _GUID// Size=0x10 (Id=102)
{
    unsigned long Data1;// Offset=0x0 Size=0x4
    unsigned short Data2;// Offset=0x4 Size=0x2
    unsigned short Data3;// Offset=0x6 Size=0x2
    unsigned char Data4[8];// Offset=0x8 Size=0x8
};

struct OSC_INPUT_BUFFER// Size=0x20 (Id=617)
{
    struct _GUID UUID;// Offset=0x0 Size=0x10
    unsigned long Revision;// Offset=0x10 Size=0x4
    unsigned long CapabilitiesCount;// Offset=0x14 Size=0x4
    unsigned long Capabilities[2];// Offset=0x18 Size=0x8
};
