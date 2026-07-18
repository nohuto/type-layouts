struct _NDIS_EVENT_LOG// Size=0x20 (Id=756)
{
    unsigned long long LastEventTime;// Offset=0x0 Size=0x8
    unsigned long LastUsedEntry;// Offset=0x8 Size=0x4
    unsigned long NumEntries;// Offset=0xc Size=0x4
    unsigned long long Lock;// Offset=0x10 Size=0x8
    unsigned short Flags;// Offset=0x18 Size=0x2
    unsigned short EntrySize;// Offset=0x1a Size=0x2
};
