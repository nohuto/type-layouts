struct _NDIS_802_11_KEY// Size=0x28 (Id=1110)
{
    unsigned long Length;// Offset=0x0 Size=0x4
    unsigned long KeyIndex;// Offset=0x4 Size=0x4
    unsigned long KeyLength;// Offset=0x8 Size=0x4
    unsigned char BSSID[6];// Offset=0xc Size=0x6
    unsigned long long KeyRSC;// Offset=0x18 Size=0x8
    unsigned char KeyMaterial[1];// Offset=0x20 Size=0x1
};
