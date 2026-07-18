struct KSEVENT_ITEM// Size=0x28 (Id=348)
{
    unsigned long EventId;// Offset=0x0 Size=0x4
    unsigned long DataInput;// Offset=0x4 Size=0x4
    unsigned long ExtraEntryData;// Offset=0x8 Size=0x4
    long  ( * AddHandler)(struct _IRP * ,struct KSEVENTDATA * ,struct _KSEVENT_ENTRY * );// Offset=0x10 Size=0x8
    void  ( * RemoveHandler)(struct _FILE_OBJECT * ,struct _KSEVENT_ENTRY * );// Offset=0x18 Size=0x8
    long  ( * SupportHandler)(struct _IRP * ,struct KSIDENTIFIER * ,void * );// Offset=0x20 Size=0x8
};
