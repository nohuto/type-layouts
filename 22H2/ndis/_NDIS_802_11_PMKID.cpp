struct _BSSID_INFO// Size=0x16 (Id=1100)
{
    unsigned char BSSID[6];// Offset=0x0 Size=0x6
    unsigned char PMKID[16];// Offset=0x6 Size=0x10
};

struct _NDIS_802_11_PMKID// Size=0x20 (Id=1015)
{
    unsigned long Length;// Offset=0x0 Size=0x4
    unsigned long BSSIDInfoCount;// Offset=0x4 Size=0x4
    struct _BSSID_INFO BSSIDInfo[1];// Offset=0x8 Size=0x16
};
