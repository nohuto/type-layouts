enum _NDIS_802_11_NETWORK_TYPE
{
    Ndis802_11FH=0,
    Ndis802_11DS=1,
    Ndis802_11OFDM5=2,
    Ndis802_11OFDM24=3,
    Ndis802_11Automode=4,
    Ndis802_11NetworkTypeMax=5
};

struct _NDIS_802_11_NETWORK_TYPE_LIST// Size=0x8 (Id=1746)
{
    unsigned long NumberOfItems;// Offset=0x0 Size=0x4
    enum _NDIS_802_11_NETWORK_TYPE NetworkType[1];// Offset=0x4 Size=0x4
};
