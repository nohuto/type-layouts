struct _unnamed_1714// Size=0x10 (Id=1714)
{
    unsigned long long Address;// Offset=0x0 Size=0x8
    unsigned char Consumed;// Offset=0x8 Size=0x1
    unsigned short ErrorCode;// Offset=0xa Size=0x2
    unsigned char ErrorIpValid;// Offset=0xc Size=0x1
    unsigned char RestartIpValid;// Offset=0xd Size=0x1
};

struct _WHEA_RECOVERY_CONTEXT// Size=0x20 (Id=1715)
{
    struct _unnamed_1714 MemoryError;// Offset=0x0 Size=0x10
    unsigned long long PartitionId;// Offset=0x10 Size=0x8
    unsigned int VpIndex;// Offset=0x18 Size=0x4
};
