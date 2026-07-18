struct _WHEA_ERROR_SOURCE_CONFIGURATION_DD// Size=0xc (Id=567)
{
    long  ( * Initialize)(void * ,unsigned long );// Offset=0x0 Size=0x4
    void  ( * Uninitialize)(void * );// Offset=0x4 Size=0x4
    long  ( * Correct)(void * ,unsigned long * );// Offset=0x8 Size=0x4
};
