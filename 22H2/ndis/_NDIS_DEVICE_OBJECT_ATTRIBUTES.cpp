struct _NDIS_OBJECT_HEADER// Size=0x4 (Id=210)
{
    unsigned char Type;// Offset=0x0 Size=0x1
    unsigned char Revision;// Offset=0x1 Size=0x1
    unsigned short Size;// Offset=0x2 Size=0x2
};

struct _NDIS_DEVICE_OBJECT_ATTRIBUTES// Size=0x38 (Id=1390)
{
    struct _NDIS_OBJECT_HEADER Header;// Offset=0x0 Size=0x4
    struct _UNICODE_STRING * DeviceName;// Offset=0x8 Size=0x8
    struct _UNICODE_STRING * SymbolicName;// Offset=0x10 Size=0x8
    long  ( ** MajorFunctions)(struct _DEVICE_OBJECT * ,struct _IRP * );// Offset=0x18 Size=0x8
    unsigned long ExtensionSize;// Offset=0x20 Size=0x4
    struct _UNICODE_STRING * DefaultSDDLString;// Offset=0x28 Size=0x8
    struct _GUID * DeviceClassGuid;// Offset=0x30 Size=0x8
};
