struct _WPP_REGISTRATION_BLOCK// Size=0x40 (Id=882)
{
    long  ( * Callback)(unsigned char ,void * ,unsigned long ,void * ,void * ,unsigned long * );// Offset=0x0 Size=0x8
    struct _GUID * ControlGuid;// Offset=0x8 Size=0x8
    struct _WPP_REGISTRATION_BLOCK * Next;// Offset=0x10 Size=0x8
    unsigned long long Logger;// Offset=0x18 Size=0x8
    wchar_t * FriendlyName;// Offset=0x20 Size=0x8
    wchar_t * BitNames;// Offset=0x28 Size=0x8
    struct _UNICODE_STRING * RegistryPath;// Offset=0x30 Size=0x8
    unsigned char FlagsLen;// Offset=0x38 Size=0x1
    unsigned char RegBlockLen;// Offset=0x39 Size=0x1
};
