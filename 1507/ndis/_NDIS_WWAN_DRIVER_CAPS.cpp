struct _NDIS_OBJECT_HEADER// Size=0x4 (Id=313)
{
    unsigned char Type;// Offset=0x0 Size=0x1
    unsigned char Revision;// Offset=0x1 Size=0x1
    unsigned short Size;// Offset=0x2 Size=0x2
};

struct _WWAN_DRIVER_CAPS// Size=0xc (Id=1278)
{
    unsigned long ulMajorVersion;// Offset=0x0 Size=0x4
    unsigned long ulMinorVersion;// Offset=0x4 Size=0x4
    unsigned long ulDriverCaps;// Offset=0x8 Size=0x4
};

struct _NDIS_WWAN_DRIVER_CAPS// Size=0x10 (Id=910)
{
    struct _NDIS_OBJECT_HEADER Header;// Offset=0x0 Size=0x4
    struct _WWAN_DRIVER_CAPS DriverCaps;// Offset=0x4 Size=0xc
};
