enum _NDIS_802_11_STATUS_TYPE
{
    Ndis802_11StatusType_Authentication=0,
    Ndis802_11StatusType_MediaStreamMode=1,
    Ndis802_11StatusType_PMKID_CandidateList=2,
    Ndis802_11StatusTypeMax=3
};

struct _NDIS_802_11_STATUS_INDICATION// Size=0x4 (Id=753)
{
    enum _NDIS_802_11_STATUS_TYPE StatusType;// Offset=0x0 Size=0x4
};
