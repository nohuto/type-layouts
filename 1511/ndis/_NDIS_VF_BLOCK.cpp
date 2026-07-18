struct _LIST_ENTRY// Size=0x10 (Id=22)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

struct _NDIS_OBJECT_HEADER// Size=0x4 (Id=316)
{
    unsigned char Type;// Offset=0x0 Size=0x1
    unsigned char Revision;// Offset=0x1 Size=0x1
    unsigned short Size;// Offset=0x2 Size=0x2
};

struct _IF_COUNTED_STRING_LH// Size=0x204 (Id=666)
{
    unsigned short Length;// Offset=0x0 Size=0x2
    wchar_t String[257];// Offset=0x2 Size=0x202
};

struct _NDIS_NIC_SWITCH_VF_PARAMETERS// Size=0x660 (Id=1273)
{
    struct _NDIS_OBJECT_HEADER Header;// Offset=0x0 Size=0x4
    unsigned long Flags;// Offset=0x4 Size=0x4
    unsigned long SwitchId;// Offset=0x8 Size=0x4
    struct _IF_COUNTED_STRING_LH VMName;// Offset=0xc Size=0x204
    struct _IF_COUNTED_STRING_LH VMFriendlyName;// Offset=0x210 Size=0x204
    struct _IF_COUNTED_STRING_LH NicName;// Offset=0x414 Size=0x204
    unsigned short MacAddressLength;// Offset=0x618 Size=0x2
    unsigned char PermanentMacAddress[32];// Offset=0x61a Size=0x20
    unsigned char CurrentMacAddress[32];// Offset=0x63a Size=0x20
    unsigned short VFId;// Offset=0x65a Size=0x2
    unsigned long RequestorId;// Offset=0x65c Size=0x4
};

struct _NDIS_VF_BLOCK// Size=0x6c0 (Id=1272)
{
    struct _LIST_ENTRY AdapterLink;// Offset=0x0 Size=0x10
    struct _LIST_ENTRY OpenLink;// Offset=0x10 Size=0x10
    struct _LIST_ENTRY SwitchLink;// Offset=0x20 Size=0x10
    struct _NDIS_MINIPORT_BLOCK * Miniport;// Offset=0x30 Size=0x8
    struct _NDIS_OPEN_BLOCK * Open;// Offset=0x38 Size=0x8
    struct _NDIS_NIC_SWITCH_BLOCK * NicSwitch;// Offset=0x40 Size=0x8
    long Reference;// Offset=0x48 Size=0x4
    unsigned long NumAttachedVPorts;// Offset=0x4c Size=0x4
    struct _LIST_ENTRY AttachedVPortList;// Offset=0x50 Size=0x10
    struct _NDIS_NIC_SWITCH_VF_PARAMETERS VFParameters;// Offset=0x60 Size=0x660
};
