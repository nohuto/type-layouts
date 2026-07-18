struct _GUID// Size=0x10 (Id=3)
{
    unsigned long Data1;// Offset=0x0 Size=0x4
    unsigned short Data2;// Offset=0x4 Size=0x2
    unsigned short Data3;// Offset=0x6 Size=0x2
    unsigned char Data4[8];// Offset=0x8 Size=0x8
};

struct tagMsgRoutingInfo// Size=0x28 (Id=270)
{
    unsigned int SystemProcessID;// Offset=0x0 Size=0x4
    unsigned int SystemThreadID;// Offset=0x4 Size=0x4
    unsigned long long Identity;// Offset=0x8 Size=0x8
    unsigned long long ItemID;// Offset=0x10 Size=0x8
    struct _GUID ConnectionGuid;// Offset=0x18 Size=0x10
};
