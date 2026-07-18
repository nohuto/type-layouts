struct _NDIS_OBJECT_HEADER// Size=0x4 (Id=359)
{
    unsigned char Type;// Offset=0x0 Size=0x1
    unsigned char Revision;// Offset=0x1 Size=0x1
    unsigned short Size;// Offset=0x2 Size=0x2
};

struct _NDIS_RSS_SET_INDIRECTION_ENTRIES// Size=0x14 (Id=1407)
{
    struct _NDIS_OBJECT_HEADER Header;// Offset=0x0 Size=0x4
    unsigned long Flags;// Offset=0x4 Size=0x4
    unsigned long RssEntrySize;// Offset=0x8 Size=0x4
    unsigned long RssEntryTableOffset;// Offset=0xc Size=0x4
    unsigned long NumberOfRssEntries;// Offset=0x10 Size=0x4
};

struct _PROCESSOR_NUMBER// Size=0x4 (Id=559)
{
    unsigned short Group;// Offset=0x0 Size=0x2
    unsigned char Number;// Offset=0x2 Size=0x1
    unsigned char Reserved;// Offset=0x3 Size=0x1
};

struct _NDIS_RSS_SET_INDIRECTION_ENTRY// Size=0x18 (Id=917)
{
    unsigned long SwitchId;// Offset=0x0 Size=0x4
    unsigned long VPortId;// Offset=0x4 Size=0x4
    unsigned long Flags;// Offset=0x8 Size=0x4
    unsigned short IndirectionTableIndex;// Offset=0xc Size=0x2
    struct _PROCESSOR_NUMBER TargetProcessorNumber;// Offset=0xe Size=0x4
    int EntryStatus;// Offset=0x14 Size=0x4
};

struct _NDIS_RSS_SET_INDIRECTION_ENTRIES_COMMAND// Size=0xc44 (Id=822)
{
    struct _NDIS_RSS_SET_INDIRECTION_ENTRIES Param;// Offset=0x0 Size=0x14
    struct _NDIS_RSS_SET_INDIRECTION_ENTRY Entry[130];// Offset=0x14 Size=0xc30
};
