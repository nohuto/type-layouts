struct KSEVENT_SET// Size=0x18 (Id=558)
{
    struct _GUID * Set;// Offset=0x0 Size=0x8
    unsigned long EventsCount;// Offset=0x8 Size=0x4
    struct KSEVENT_ITEM * EventItem;// Offset=0x10 Size=0x8
};
