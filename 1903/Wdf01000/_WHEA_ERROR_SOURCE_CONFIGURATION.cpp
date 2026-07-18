struct _WHEA_ERROR_SOURCE_CONFIGURATION// Size=0x38 (Id=2751)
{
    unsigned long Flags;// Offset=0x0 Size=0x4
    long  ( * Correct)(struct _WHEA_ERROR_SOURCE_DESCRIPTOR * ,unsigned long * );// Offset=0x8 Size=0x8
    long  ( * Initialize)(unsigned long ,struct _WHEA_ERROR_SOURCE_DESCRIPTOR * ,void * );// Offset=0x10 Size=0x8
    long  ( * CreateRecord)(struct _WHEA_ERROR_SOURCE_DESCRIPTOR * ,struct _WHEA_ERROR_PACKET_V2 * ,struct _WHEA_ERROR_RECORD * ,unsigned long ,void * );// Offset=0x18 Size=0x8
    long  ( * Recover)(void * ,enum _WHEA_ERROR_SEVERITY * );// Offset=0x20 Size=0x8
    void  ( * Uninitialize)(void * );// Offset=0x28 Size=0x8
    void  ( * Ready)(struct _WHEA_ERROR_SOURCE_DESCRIPTOR * ,void * );// Offset=0x30 Size=0x8
};
