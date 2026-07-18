enum _NDIS_802_11_STATUS_TYPE
{
    Ndis802_11StatusType_Authentication=0,
    Ndis802_11StatusType_MediaStreamMode=1,
    Ndis802_11StatusType_PMKID_CandidateList=2,
    Ndis802_11StatusTypeMax=3
};

struct _NDIS_802_11_STATUS_INDICATION// Size=0x4 (Id=853)
{
    enum _NDIS_802_11_STATUS_TYPE StatusType;// Offset=0x0 Size=0x4
};

struct _NDIS_802_11_AUTHENTICATION_REQUEST// Size=0x10 (Id=1871)
{
    unsigned long Length;// Offset=0x0 Size=0x4
    unsigned char Bssid[6];// Offset=0x4 Size=0x6
    unsigned long Flags;// Offset=0xc Size=0x4
};

struct _NDIS_802_11_AUTHENTICATION_EVENT// Size=0x14 (Id=1246)
{
    struct _NDIS_802_11_STATUS_INDICATION Status;// Offset=0x0 Size=0x4
    struct _NDIS_802_11_AUTHENTICATION_REQUEST Request[1];// Offset=0x4 Size=0x10
};

union _NDIS_802_11_TEST::_unnamed_1717// Size=0x14 (Id=1717)
{
    union // Size=0x14 (Id=0)
    {
        struct _NDIS_802_11_AUTHENTICATION_EVENT AuthenticationEvent;// Offset=0x0 Size=0x14
        long RssiTrigger;// Offset=0x0 Size=0x4
    };
};
