enum _STORAGE_BUS_TYPE
{
    BusTypeUnknown=0,
    BusTypeScsi=1,
    BusTypeAtapi=2,
    BusTypeAta=3,
    BusType1394=4,
    BusTypeSsa=5,
    BusTypeFibre=6,
    BusTypeUsb=7,
    BusTypeRAID=8,
    BusTypeiScsi=9,
    BusTypeSas=10,
    BusTypeSata=11,
    BusTypeSd=12,
    BusTypeMmc=13,
    BusTypeVirtual=14,
    BusTypeFileBackedVirtual=15,
    BusTypeSpaces=16,
    BusTypeNvme=17,
    BusTypeSCM=18,
    BusTypeUfs=19,
    BusTypeMax=20,
    BusTypeMaxReserved=127
};

struct _RAID_ADAPTER_PARAMETERS// Size=0x38 (Id=819)
{
    unsigned long NumberOfHbaRequests;// Offset=0x0 Size=0x4
    enum _STORAGE_BUS_TYPE BusType;// Offset=0x4 Size=0x4
    unsigned long UncachedExtAlignment;// Offset=0x8 Size=0x4
    unsigned long long MaximumUncachedAddress;// Offset=0x10 Size=0x8
    unsigned long long MinimumUncachedAddress;// Offset=0x18 Size=0x8
    unsigned long long BoundaryAddress;// Offset=0x20 Size=0x8
    unsigned long long MinimumPhysicalAddress;// Offset=0x28 Size=0x8
    unsigned long long MaximumPhysicalAddress;// Offset=0x30 Size=0x8
};
