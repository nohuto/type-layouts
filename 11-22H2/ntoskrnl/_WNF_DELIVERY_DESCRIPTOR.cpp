struct _WNF_STATE_NAME// Size=0x8 (Id=992)
{
    unsigned long Data[2];// Offset=0x0 Size=0x8
};

struct _GUID// Size=0x10 (Id=574)
{
    unsigned long Data1;// Offset=0x0 Size=0x4
    unsigned short Data2;// Offset=0x4 Size=0x2
    unsigned short Data3;// Offset=0x6 Size=0x2
    unsigned char Data4[8];// Offset=0x8 Size=0x8
};

struct _WNF_TYPE_ID// Size=0x10 (Id=1318)
{
    struct _GUID TypeId;// Offset=0x0 Size=0x10
};

struct _WNF_DELIVERY_DESCRIPTOR// Size=0x30 (Id=1449)
{
    unsigned long long SubscriptionId;// Offset=0x0 Size=0x8
    struct _WNF_STATE_NAME StateName;// Offset=0x8 Size=0x8
    unsigned long ChangeStamp;// Offset=0x10 Size=0x4
    unsigned long StateDataSize;// Offset=0x14 Size=0x4
    unsigned long EventMask;// Offset=0x18 Size=0x4
    struct _WNF_TYPE_ID TypeId;// Offset=0x1c Size=0x10
    unsigned long StateDataOffset;// Offset=0x2c Size=0x4
};
