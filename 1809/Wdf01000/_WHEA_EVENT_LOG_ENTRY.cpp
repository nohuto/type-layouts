enum _WHEA_EVENT_LOG_ENTRY_TYPE
{
    WheaEventLogEntryTypeInformational=0,
    WheaEventLogEntryTypeWarning=1,
    WheaEventLogEntryTypeError=2
};

enum _WHEA_EVENT_LOG_ENTRY_ID
{
    WheaEventLogEntryIdCmcPollingTimeout=-2147483647,
    WheaEventLogEntryIdWheaInit=-2147483646,
    WheaEventLogEntryIdMax=-2147483645
};

union _WHEA_EVENT_LOG_ENTRY_FLAGS// Size=0x4 (Id=723)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long Reserved:32;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x20
    };
    unsigned long AsULONG;// Offset=0x0 Size=0x4
};

struct _WHEA_EVENT_LOG_ENTRY_HEADER// Size=0x20 (Id=824)
{
    unsigned long Signature;// Offset=0x0 Size=0x4
    unsigned long Version;// Offset=0x4 Size=0x4
    unsigned long Length;// Offset=0x8 Size=0x4
    enum _WHEA_EVENT_LOG_ENTRY_TYPE Type;// Offset=0xc Size=0x4
    unsigned long OwnerTag;// Offset=0x10 Size=0x4
    enum _WHEA_EVENT_LOG_ENTRY_ID Id;// Offset=0x14 Size=0x4
    union _WHEA_EVENT_LOG_ENTRY_FLAGS Flags;// Offset=0x18 Size=0x4
    unsigned long PayloadLength;// Offset=0x1c Size=0x4
};

struct _WHEA_EVENT_LOG_ENTRY// Size=0x20 (Id=1025)
{
    struct _WHEA_EVENT_LOG_ENTRY_HEADER Header;// Offset=0x0 Size=0x20
};
