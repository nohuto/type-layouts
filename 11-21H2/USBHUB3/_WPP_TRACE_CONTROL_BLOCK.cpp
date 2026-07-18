struct _WPP_TRACE_CONTROL_BLOCK// Size=0x50 (Id=661)
{
    long  ( * Callback)(unsigned char ,void * ,unsigned long ,void * ,void * ,unsigned long * );// Offset=0x0 Size=0x8
    struct _GUID * ControlGuid;// Offset=0x8 Size=0x8
    struct _WPP_TRACE_CONTROL_BLOCK * Next;// Offset=0x10 Size=0x8
    long long Logger;// Offset=0x18 Size=0x8
    struct _UNICODE_STRING * RegistryPath;// Offset=0x20 Size=0x8
    unsigned char FlagsLen;// Offset=0x28 Size=0x1
    unsigned char Level;// Offset=0x29 Size=0x1
    unsigned short Reserved;// Offset=0x2a Size=0x2
    unsigned long Flags[1];// Offset=0x2c Size=0x4
    unsigned long ReservedFlags;// Offset=0x30 Size=0x4
    unsigned long long RegHandle;// Offset=0x38 Size=0x8
    void * AutoLogContext;// Offset=0x40 Size=0x8
    unsigned short AutoLogVerboseEnabled;// Offset=0x48 Size=0x2
    unsigned short AutoLogAttachToMiniDump;// Offset=0x4a Size=0x2
};
