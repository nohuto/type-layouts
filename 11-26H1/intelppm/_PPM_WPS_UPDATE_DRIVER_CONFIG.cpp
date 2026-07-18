struct _PPM_WPS_UPDATE_DRIVER_CONFIG// Size=0x60 (Id=540)
{
    void * Handle;// Offset=0x0 Size=0x8
    char * TableEntry;// Offset=0x8 Size=0x8
    unsigned long EntryCount;// Offset=0x10 Size=0x4
    unsigned long EntrySize;// Offset=0x14 Size=0x4
    unsigned long CapabilityCount;// Offset=0x18 Size=0x4
    char * ParkingTableEntry;// Offset=0x20 Size=0x8
    unsigned long ParkingTableRowCount;// Offset=0x28 Size=0x4
    unsigned long ParkingTableRowSize;// Offset=0x2c Size=0x4
    char * ContainmentTableEntry;// Offset=0x30 Size=0x8
    unsigned long ContainmentTableRowSize;// Offset=0x38 Size=0x4
    unsigned long * ApicIdMap;// Offset=0x40 Size=0x8
    unsigned char  ( * CheckUpdateState)(void * );// Offset=0x48 Size=0x8
    void  ( * AcknowledgeUpdate)(void * );// Offset=0x50 Size=0x8
    unsigned char UpdateEnabled;// Offset=0x58 Size=0x1
};
