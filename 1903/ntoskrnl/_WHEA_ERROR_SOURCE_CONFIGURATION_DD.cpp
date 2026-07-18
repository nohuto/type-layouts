struct _WHEA_ERROR_SOURCE_CONFIGURATION_DD// Size=0x20 (Id=1428)
{
    unsigned long  ( * Initialize)(void * ,unsigned long );// Offset=0x0 Size=0x8
    void  ( * Uninitialize)(void * );// Offset=0x8 Size=0x8
    void  ( * Ready)(void * ,void * );// Offset=0x10 Size=0x8
    unsigned long  ( * Correct)(void * ,unsigned long * );// Offset=0x18 Size=0x8
};
