struct KSPIN_DESCRIPTOR// Size=0x58 (Id=1002)
{
    unsigned long InterfacesCount;// Offset=0x0 Size=0x4
    struct KSIDENTIFIER * Interfaces;// Offset=0x8 Size=0x8
    unsigned long MediumsCount;// Offset=0x10 Size=0x4
    struct KSIDENTIFIER * Mediums;// Offset=0x18 Size=0x8
    unsigned long DataRangesCount;// Offset=0x20 Size=0x4
    union KSDATAFORMAT ** DataRanges;// Offset=0x28 Size=0x8
    enum KSPIN_DATAFLOW DataFlow;// Offset=0x30 Size=0x4
    enum KSPIN_COMMUNICATION Communication;// Offset=0x34 Size=0x4
    struct _GUID * Category;// Offset=0x38 Size=0x8
    struct _GUID * Name;// Offset=0x40 Size=0x8
    union // Size=0x8 (Id=0)
    {
        long long Reserved;// Offset=0x48 Size=0x8
        unsigned long ConstrainedDataRangesCount;// Offset=0x48 Size=0x4
    };
    union KSDATAFORMAT ** ConstrainedDataRanges;// Offset=0x50 Size=0x8
};
