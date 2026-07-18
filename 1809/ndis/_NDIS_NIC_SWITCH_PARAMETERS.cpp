struct _NDIS_OBJECT_HEADER// Size=0x4 (Id=355)
{
    unsigned char Type;// Offset=0x0 Size=0x1
    unsigned char Revision;// Offset=0x1 Size=0x1
    unsigned short Size;// Offset=0x2 Size=0x2
};

enum _NDIS_NIC_SWITCH_TYPE
{
    NdisNicSwitchTypeUnspecified=0,
    NdisNicSwitchTypeExternal=1,
    NdisNicSwitchTypeMax=2
};

struct _IF_COUNTED_STRING_LH// Size=0x204 (Id=1182)
{
    unsigned short Length;// Offset=0x0 Size=0x2
    wchar_t String[257];// Offset=0x2 Size=0x202
};

struct _NDIS_NIC_SWITCH_PARAMETERS// Size=0x228 (Id=1811)
{
    struct _NDIS_OBJECT_HEADER Header;// Offset=0x0 Size=0x4
    unsigned long Flags;// Offset=0x4 Size=0x4
    enum _NDIS_NIC_SWITCH_TYPE SwitchType;// Offset=0x8 Size=0x4
    unsigned long SwitchId;// Offset=0xc Size=0x4
    struct _IF_COUNTED_STRING_LH SwitchFriendlyName;// Offset=0x10 Size=0x204
    unsigned long NumVFs;// Offset=0x214 Size=0x4
    unsigned long NdisReserved1;// Offset=0x218 Size=0x4
    unsigned long NdisReserved2;// Offset=0x21c Size=0x4
    unsigned long NdisReserved3;// Offset=0x220 Size=0x4
    unsigned long NumQueuePairsForDefaultVPort;// Offset=0x224 Size=0x4
};
