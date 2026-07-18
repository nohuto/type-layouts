struct _NDIS_OBJECT_HEADER// Size=0x4 (Id=316)
{
    unsigned char Type;// Offset=0x0 Size=0x1
    unsigned char Revision;// Offset=0x1 Size=0x1
    unsigned short Size;// Offset=0x2 Size=0x2
};

struct _NDIS_GFT_OFFLOAD_CAPABILITIES// Size=0x50 (Id=1546)
{
    struct _NDIS_OBJECT_HEADER Header;// Offset=0x0 Size=0x4
    unsigned long Flags;// Offset=0x4 Size=0x4
    unsigned long CounterCapabilities;// Offset=0x8 Size=0x4
    unsigned long SupportedTableTypes;// Offset=0xc Size=0x4
    unsigned long SupportedEncapsulationTypes;// Offset=0x10 Size=0x4
    unsigned long SupportedIngressExactMatchTableActions;// Offset=0x14 Size=0x4
    unsigned long SupportedEgressExactMatchTableActions;// Offset=0x18 Size=0x4
    unsigned long SoftwareSupportedIngressExactMatchTableActions;// Offset=0x1c Size=0x4
    unsigned long SoftwareSupportedEgressExactMatchTableActions;// Offset=0x20 Size=0x4
    unsigned long SupportedIngressWildcardMatchTableActions;// Offset=0x24 Size=0x4
    unsigned long SupportedEgressWildcardMatchTableActions;// Offset=0x28 Size=0x4
    unsigned long SoftwareSupportedIngressWildcardMatchTableActions;// Offset=0x2c Size=0x4
    unsigned long SoftwareSupportedEgressWildcardMatchTableActions;// Offset=0x30 Size=0x4
    unsigned long NumPacketCounterObjects;// Offset=0x34 Size=0x4
    unsigned long NumByteCounterObjects;// Offset=0x38 Size=0x4
    unsigned long NumPacketAndByteCounterObjects;// Offset=0x3c Size=0x4
    unsigned long NumCounterObjectsPerIngressExactMatchFlowEntry;// Offset=0x40 Size=0x4
    unsigned long NumCounterObjectsPerEgressExactMatchFlowEntry;// Offset=0x44 Size=0x4
    unsigned long NumCounterObjectsPerIngressWildcardMatchFlowEntry;// Offset=0x48 Size=0x4
    unsigned long NumCounterObjectsPerEgressWildcardMatchFlowEntry;// Offset=0x4c Size=0x4
};
