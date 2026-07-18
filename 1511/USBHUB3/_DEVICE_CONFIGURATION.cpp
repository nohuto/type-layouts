struct _LIST_ENTRY// Size=0x10 (Id=4)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

struct _DEVICE_CONFIGURATION// Size=0x28 (Id=554)
{
    struct WDFMEMORY__ * WdfMemory;// Offset=0x0 Size=0x8
    unsigned long NumberOfEndpoints;// Offset=0x8 Size=0x4
    struct _LIST_ENTRY InterfaceList;// Offset=0x10 Size=0x10
    unsigned char ConfigurationDescriptor[1];// Offset=0x20 Size=0x1
};
