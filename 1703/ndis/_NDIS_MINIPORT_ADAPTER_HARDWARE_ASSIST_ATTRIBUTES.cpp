struct _NDIS_OBJECT_HEADER// Size=0x4 (Id=314)
{
    unsigned char Type;// Offset=0x0 Size=0x1
    unsigned char Revision;// Offset=0x1 Size=0x1
    unsigned short Size;// Offset=0x2 Size=0x2
};

struct _NDIS_MINIPORT_ADAPTER_HARDWARE_ASSIST_ATTRIBUTES// Size=0x60 (Id=762)
{
    struct _NDIS_OBJECT_HEADER Header;// Offset=0x0 Size=0x4
    struct _NDIS_HD_SPLIT_ATTRIBUTES * HDSplitAttributes;// Offset=0x8 Size=0x8
    struct _NDIS_RECEIVE_FILTER_CAPABILITIES * HardwareReceiveFilterCapabilities;// Offset=0x10 Size=0x8
    struct _NDIS_RECEIVE_FILTER_CAPABILITIES * CurrentReceiveFilterCapabilities;// Offset=0x18 Size=0x8
    struct _NDIS_NIC_SWITCH_CAPABILITIES * HardwareNicSwitchCapabilities;// Offset=0x20 Size=0x8
    struct _NDIS_NIC_SWITCH_CAPABILITIES * CurrentNicSwitchCapabilities;// Offset=0x28 Size=0x8
    struct _NDIS_SRIOV_CAPABILITIES * HardwareSriovCapabilities;// Offset=0x30 Size=0x8
    struct _NDIS_SRIOV_CAPABILITIES * CurrentSriovCapabilities;// Offset=0x38 Size=0x8
    struct _NDIS_QOS_CAPABILITIES * HardwareQosCapabilities;// Offset=0x40 Size=0x8
    struct _NDIS_QOS_CAPABILITIES * CurrentQosCapabilities;// Offset=0x48 Size=0x8
    struct _NDIS_GFT_OFFLOAD_CAPABILITIES * HardwareGftOffloadCapabilities;// Offset=0x50 Size=0x8
    struct _NDIS_GFT_OFFLOAD_CAPABILITIES * CurrentGftOffloadCapabilities;// Offset=0x58 Size=0x8
};
