enum _D3DKMDT_MONITOR_CAPABILITIES_ORIGIN
{
    D3DKMDT_MCO_UNINITIALIZED=0,
    D3DKMDT_MCO_DEFAULTMONITORPROFILE=1,
    D3DKMDT_MCO_MONITORDESCRIPTOR=2,
    D3DKMDT_MCO_MONITORDESCRIPTOR_REGISTRYOVERRIDE=3,
    D3DKMDT_MCO_SPECIFICCAP_REGISTRYOVERRIDE=4,
    D3DKMDT_MCO_DRIVER=5
};

struct _D3DDDI_RATIONAL// Size=0x8 (Id=579)
{
    unsigned int Numerator;// Offset=0x0 Size=0x4
    unsigned int Denominator;// Offset=0x4 Size=0x4
};

struct _D3DKMDT_FREQUENCY_RANGE// Size=0x20 (Id=599)
{
    struct _D3DDDI_RATIONAL MinVSyncFreq;// Offset=0x0 Size=0x8
    struct _D3DDDI_RATIONAL MaxVSyncFreq;// Offset=0x8 Size=0x8
    struct _D3DDDI_RATIONAL MinHSyncFreq;// Offset=0x10 Size=0x8
    struct _D3DDDI_RATIONAL MaxHSyncFreq;// Offset=0x18 Size=0x8
};

enum _D3DKMDT_MONITOR_FREQUENCY_RANGE_CONSTRAINT
{
    D3DKMDT_MFRC_UNINITIALIZED=0,
    D3DKMDT_MFRC_ACTIVESIZE=1,
    D3DKMDT_MFRC_MAXPIXELRATE=2
};

struct _D3DKMDT_2DREGION// Size=0x8 (Id=438)
{
    unsigned int cx;// Offset=0x0 Size=0x4
    unsigned int cy;// Offset=0x4 Size=0x4
};

struct _D3DKMDT_MONITOR_FREQUENCY_RANGE// Size=0x30 (Id=474)
{
    union // Size=0x28 (Id=0)
    {
        enum _D3DKMDT_MONITOR_CAPABILITIES_ORIGIN Origin;// Offset=0x0 Size=0x4
        struct _D3DKMDT_FREQUENCY_RANGE RangeLimits;// Offset=0x4 Size=0x20
        enum _D3DKMDT_MONITOR_FREQUENCY_RANGE_CONSTRAINT ConstraintType;// Offset=0x24 Size=0x4
        union <unnamed-type-Constraint>// Size=0x8 (Id=1210)
        {
            struct _D3DKMDT_2DREGION ActiveSize;// Offset=0x0 Size=0x8
            unsigned long MaxPixelRate;// Offset=0x0 Size=0x4
        };
        union _D3DKMDT_MONITOR_FREQUENCY_RANGE::<unnamed-type-Constraint> Constraint;// Offset=0x28 Size=0x8
    };
};

struct _DMM_MONITORFREQUENCYRANGESET_SERIALIZATION// Size=0x34 (Id=177)
{
    unsigned char NumFrequencyRanges;// Offset=0x0 Size=0x1
    struct _D3DKMDT_MONITOR_FREQUENCY_RANGE FrequencyRangeSerialization[1];// Offset=0x4 Size=0x30
};
