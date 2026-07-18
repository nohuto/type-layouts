struct _NDIS_OBJECT_HEADER// Size=0x4 (Id=211)
{
    unsigned char Type;// Offset=0x0 Size=0x1
    unsigned char Revision;// Offset=0x1 Size=0x1
    unsigned short Size;// Offset=0x2 Size=0x2
};

enum _NDIS_INTERFACE_TYPE
{
    NdisInterfaceInternal=0,
    NdisInterfaceIsa=1,
    NdisInterfaceEisa=2,
    NdisInterfaceMca=3,
    NdisInterfaceTurboChannel=4,
    NdisInterfacePci=5,
    NdisInterfacePcMcia=8,
    NdisInterfaceCBus=9,
    NdisInterfaceMPIBus=10,
    NdisInterfaceMPSABus=11,
    NdisInterfaceProcessorInternal=12,
    NdisInterfaceInternalPowerBus=13,
    NdisInterfacePNPISABus=14,
    NdisInterfacePNPBus=15,
    NdisInterfaceUSB=16,
    NdisInterfaceIrda=17,
    NdisInterface1394=18,
    NdisMaximumInterfaceType=19
};

struct _NDIS_MINIPORT_ADAPTER_REGISTRATION_ATTRIBUTES// Size=0x20 (Id=943)
{
    struct _NDIS_OBJECT_HEADER Header;// Offset=0x0 Size=0x4
    void * MiniportAdapterContext;// Offset=0x8 Size=0x8
    unsigned long AttributeFlags;// Offset=0x10 Size=0x4
    unsigned int CheckForHangTimeInSeconds;// Offset=0x14 Size=0x4
    enum _NDIS_INTERFACE_TYPE InterfaceType;// Offset=0x18 Size=0x4
};
