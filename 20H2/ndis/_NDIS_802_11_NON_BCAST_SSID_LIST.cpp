struct _NDIS_802_11_SSID// Size=0x24 (Id=832)
{
    unsigned long SsidLength;// Offset=0x0 Size=0x4
    unsigned char Ssid[32];// Offset=0x4 Size=0x20
};

struct _NDIS_802_11_NON_BCAST_SSID_LIST// Size=0x28 (Id=1462)
{
    unsigned long NumberOfItems;// Offset=0x0 Size=0x4
    struct _NDIS_802_11_SSID Non_Bcast_Ssid[1];// Offset=0x4 Size=0x24
};
