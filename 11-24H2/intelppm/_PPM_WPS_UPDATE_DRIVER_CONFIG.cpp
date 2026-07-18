struct _PPM_WPS_UPDATE_DRIVER_CONFIG// Size=0x38 (Id=639)
{
    void * Handle;// Offset=0x0 Size=0x8
    char * TableEntry;// Offset=0x8 Size=0x8
    unsigned long EntryCount;// Offset=0x10 Size=0x4
    unsigned long EntrySize;// Offset=0x14 Size=0x4
    unsigned long CapabilityCount;// Offset=0x18 Size=0x4
    unsigned long * ApicIdMap;// Offset=0x20 Size=0x8
    unsigned char  ( * CheckUpdateState)(void * );// Offset=0x28 Size=0x8
    void  ( * AcknowledgeUpdate)(void * );// Offset=0x30 Size=0x8
};
