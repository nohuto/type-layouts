struct _GUID// Size=0x10 (Id=3)
{
    unsigned long Data1;// Offset=0x0 Size=0x4
    unsigned short Data2;// Offset=0x4 Size=0x2
    unsigned short Data3;// Offset=0x6 Size=0x2
    unsigned char Data4[8];// Offset=0x8 Size=0x8
};

union _NET_LUID_LH// Size=0x8 (Id=345)
{
    unsigned long long Value;// Offset=0x0 Size=0x8
    struct <unnamed-type-Info>// Size=0x8 (Id=11022)
    {
        unsigned long long Reserved:24;// Offset=0x0 Size=0x8 BitOffset=0x0 BitSize=0x18
        unsigned long long NetLuidIndex:24;// Offset=0x0 Size=0x8 BitOffset=0x18 BitSize=0x18
        unsigned long long IfType:16;// Offset=0x0 Size=0x8 BitOffset=0x30 BitSize=0x10
    };
    struct _NET_LUID_LH::<unnamed-type-Info> Info;// Offset=0x0 Size=0x8
};

enum _NDIS_PHYSICAL_MEDIUM
{
    NdisPhysicalMediumUnspecified=0,
    NdisPhysicalMediumWirelessLan=1,
    NdisPhysicalMediumCableModem=2,
    NdisPhysicalMediumPhoneLine=3,
    NdisPhysicalMediumPowerLine=4,
    NdisPhysicalMediumDSL=5,
    NdisPhysicalMediumFibreChannel=6,
    NdisPhysicalMedium1394=7,
    NdisPhysicalMediumWirelessWan=8,
    NdisPhysicalMediumNative802_11=9,
    NdisPhysicalMediumBluetooth=10,
    NdisPhysicalMediumInfiniband=11,
    NdisPhysicalMediumWiMax=12,
    NdisPhysicalMediumUWB=13,
    NdisPhysicalMedium802_3=14,
    NdisPhysicalMedium802_5=15,
    NdisPhysicalMediumIrda=16,
    NdisPhysicalMediumWiredWAN=17,
    NdisPhysicalMediumWiredCoWan=18,
    NdisPhysicalMediumOther=19,
    NdisPhysicalMediumMax=20
};

struct NDIS_ADDDEVICE_PARAMETERS// Size=0x48 (Id=344)
{
    struct _GUID InterfaceGuid;// Offset=0x0 Size=0x10
    union _NET_LUID_LH NetLuid;// Offset=0x10 Size=0x8
    bool IsPhysicalMediumAvailable;// Offset=0x18 Size=0x1
    enum _NDIS_PHYSICAL_MEDIUM PhysicalMedium;// Offset=0x1c Size=0x4
    class KPtr<Rtl::KString,KDeletePtr<Rtl::KString> > ComponentId;// Offset=0x20 Size=0x8
    class KPtr<Rtl::KString,KDeletePtr<Rtl::KString> > ExportName;// Offset=0x28 Size=0x8
    class KPtr<Rtl::KString,KDeletePtr<Rtl::KString> > LegacyImFilterClass;// Offset=0x30 Size=0x8
    bool IsImMiniport;// Offset=0x38 Size=0x1
    unsigned long Characteristics;// Offset=0x3c Size=0x4
    void * MiniportAdapterContext;// Offset=0x40 Size=0x8
    void NDIS_ADDDEVICE_PARAMETERS(struct NDIS_ADDDEVICE_PARAMETERS & );
    void NDIS_ADDDEVICE_PARAMETERS();
    void ~NDIS_ADDDEVICE_PARAMETERS();
    struct NDIS_ADDDEVICE_PARAMETERS & operator=(struct NDIS_ADDDEVICE_PARAMETERS & );
    void * __vecDelDtor(unsigned int );
};
