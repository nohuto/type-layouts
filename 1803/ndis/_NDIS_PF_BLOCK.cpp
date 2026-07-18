struct _LIST_ENTRY// Size=0x10 (Id=29)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

struct _NDIS_PF_BLOCK// Size=0x30 (Id=1204)
{
    struct _NDIS_MINIPORT_BLOCK * Miniport;// Offset=0x0 Size=0x8
    struct _NDIS_OPEN_BLOCK * Open;// Offset=0x8 Size=0x8
    struct _NDIS_NIC_SWITCH_BLOCK * NicSwitch;// Offset=0x10 Size=0x8
    long Reference;// Offset=0x18 Size=0x4
    unsigned long NumAttachedVPorts;// Offset=0x1c Size=0x4
    struct _LIST_ENTRY AttachedVPortList;// Offset=0x20 Size=0x10
};
