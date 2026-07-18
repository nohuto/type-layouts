struct _NDIS_OBJECT_HEADER// Size=0x4 (Id=313)
{
    unsigned char Type;// Offset=0x0 Size=0x1
    unsigned char Revision;// Offset=0x1 Size=0x1
    unsigned short Size;// Offset=0x2 Size=0x2
};

struct _NDIS_SFA_RULE_DESCRIPTOR// Size=0x5c (Id=389)
{
    struct _NDIS_OBJECT_HEADER Header;// Offset=0x0 Size=0x4
    unsigned long Length;// Offset=0x4 Size=0x4
    unsigned long Type;// Offset=0x8 Size=0x4
    unsigned long Flags;// Offset=0xc Size=0x4
    unsigned short Priority;// Offset=0x10 Size=0x2
    unsigned char ConditionCount;// Offset=0x12 Size=0x1
    unsigned char ConditionType[5];// Offset=0x13 Size=0x5
    unsigned short ConditionSize[5];// Offset=0x18 Size=0xa
    unsigned long ConditionDataOffset[5];// Offset=0x24 Size=0x14
    unsigned char ActionCount;// Offset=0x38 Size=0x1
    unsigned short ActionDataSize[5];// Offset=0x3a Size=0xa
    unsigned long ActionDataOffset[5];// Offset=0x44 Size=0x14
    unsigned short TimeToLive;// Offset=0x58 Size=0x2
    char MssDelta;// Offset=0x5a Size=0x1
    char ReverseMssDelta;// Offset=0x5b Size=0x1
};
