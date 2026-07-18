struct _NDIS_OBJECT_HEADER// Size=0x4 (Id=211)
{
    unsigned char Type;// Offset=0x0 Size=0x1
    unsigned char Revision;// Offset=0x1 Size=0x1
    unsigned short Size;// Offset=0x2 Size=0x2
};

struct _WWAN_SERVICE_ACTIVATION// Size=0x4 (Id=1667)
{
    unsigned long uVendorSpecificBufferSize;// Offset=0x0 Size=0x4
};

struct _NDIS_WWAN_SERVICE_ACTIVATION// Size=0x8 (Id=1563)
{
    struct _NDIS_OBJECT_HEADER Header;// Offset=0x0 Size=0x4
    struct _WWAN_SERVICE_ACTIVATION ServiceActivation;// Offset=0x4 Size=0x4
};
