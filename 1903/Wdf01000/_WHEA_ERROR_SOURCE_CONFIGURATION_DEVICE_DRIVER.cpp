struct _WHEA_ERROR_SOURCE_CONFIGURATION_DEVICE_DRIVER// Size=0x18 (Id=3046)
{
    unsigned long  ( * Initialize)(void * ,unsigned long );// Offset=0x0 Size=0x8
    void  ( * Uninitialize)(void * );// Offset=0x8 Size=0x8
    void  ( * Ready)(void * ,void * );// Offset=0x10 Size=0x8
};
