struct _PMKID_CANDIDATE// Size=0xc (Id=2004)
{
    unsigned char BSSID[6];// Offset=0x0 Size=0x6
    unsigned long Flags;// Offset=0x8 Size=0x4
};

struct _NDIS_802_11_PMKID_CANDIDATE_LIST// Size=0x14 (Id=1775)
{
    unsigned long Version;// Offset=0x0 Size=0x4
    unsigned long NumCandidates;// Offset=0x4 Size=0x4
    struct _PMKID_CANDIDATE CandidateList[1];// Offset=0x8 Size=0xc
};
