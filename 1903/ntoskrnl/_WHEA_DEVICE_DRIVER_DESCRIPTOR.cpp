struct _WHEA_ERROR_SOURCE_CONFIGURATION_DD// Size=0x20 (Id=1428)
{
    unsigned long  ( * Initialize)(void * ,unsigned long );// Offset=0x0 Size=0x8
    void  ( * Uninitialize)(void * );// Offset=0x8 Size=0x8
    void  ( * Ready)(void * ,void * );// Offset=0x10 Size=0x8
    unsigned long  ( * Correct)(void * ,unsigned long * );// Offset=0x18 Size=0x8
};

struct _WHEA_DEVICE_DRIVER_DESCRIPTOR// Size=0x24 (Id=1258)
{
    unsigned short Type;// Offset=0x0 Size=0x2
    unsigned char Enabled;// Offset=0x2 Size=0x1
    unsigned char Reserved;// Offset=0x3 Size=0x1
    struct _WHEA_ERROR_SOURCE_CONFIGURATION_DD Config;// Offset=0x4 Size=0x20
};
