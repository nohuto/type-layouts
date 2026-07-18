struct _NDIS_OBJECT_HEADER// Size=0x4 (Id=211)
{
    unsigned char Type;// Offset=0x0 Size=0x1
    unsigned char Revision;// Offset=0x1 Size=0x1
    unsigned short Size;// Offset=0x2 Size=0x2
};

struct _WWAN_PROVIDER// Size=0x44 (Id=1555)
{
    wchar_t ProviderId[7];// Offset=0x0 Size=0xe
    unsigned long ProviderState;// Offset=0x10 Size=0x4
    wchar_t ProviderName[21];// Offset=0x14 Size=0x2a
    unsigned long WwanDataClass;// Offset=0x40 Size=0x4
};

struct _NDIS_WWAN_HOME_PROVIDER// Size=0x4c (Id=1495)
{
    struct _NDIS_OBJECT_HEADER Header;// Offset=0x0 Size=0x4
    unsigned long uStatus;// Offset=0x4 Size=0x4
    struct _WWAN_PROVIDER Provider;// Offset=0x8 Size=0x44
};
