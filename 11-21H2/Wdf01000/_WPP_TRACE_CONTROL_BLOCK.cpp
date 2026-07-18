struct _WPP_TRACE_CONTROL_BLOCK// Size=0x38 (Id=2348)
{
    long  ( * Callback)(unsigned char ,void * ,unsigned long ,void * ,void * ,unsigned long * );// Offset=0x0 Size=0x8
    struct _GUID * ControlGuid;// Offset=0x8 Size=0x8
    struct _WPP_TRACE_CONTROL_BLOCK * Next;// Offset=0x10 Size=0x8
    unsigned long long RegistrationHandle;// Offset=0x18 Size=0x8
    unsigned long long Logger;// Offset=0x20 Size=0x8
    wchar_t * FriendlyName;// Offset=0x28 Size=0x8
    unsigned char FlagsLen;// Offset=0x30 Size=0x1
    unsigned char Level;// Offset=0x31 Size=0x1
    unsigned short Reserved;// Offset=0x32 Size=0x2
    unsigned long Flags[1];// Offset=0x34 Size=0x4
};
