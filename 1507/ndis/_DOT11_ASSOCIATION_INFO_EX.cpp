enum _DOT11_ASSOCIATION_STATE
{
    dot11_assoc_state_zero=0,
    dot11_assoc_state_unauth_unassoc=1,
    dot11_assoc_state_auth_unassoc=2,
    dot11_assoc_state_auth_assoc=3
};

enum _DOT11_POWER_MODE
{
    dot11_power_mode_unknown=0,
    dot11_power_mode_active=1,
    dot11_power_mode_powersave=2
};

union _LARGE_INTEGER// Size=0x8 (Id=63)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
    struct <unnamed-type-u>// Size=0x8 (Id=4732)
    {
        unsigned long LowPart;// Offset=0x0 Size=0x4
        long HighPart;// Offset=0x4 Size=0x4
    };
    struct _LARGE_INTEGER::<unnamed-type-u> u;// Offset=0x0 Size=0x8
    long long QuadPart;// Offset=0x0 Size=0x8
};

struct _DOT11_ASSOCIATION_INFO_EX// Size=0x148 (Id=1622)
{
    unsigned char PeerMacAddress[6];// Offset=0x0 Size=0x6
    unsigned char BSSID[6];// Offset=0x6 Size=0x6
    unsigned short usCapabilityInformation;// Offset=0xc Size=0x2
    unsigned short usListenInterval;// Offset=0xe Size=0x2
    unsigned char ucPeerSupportedRates[255];// Offset=0x10 Size=0xff
    unsigned short usAssociationID;// Offset=0x110 Size=0x2
    enum _DOT11_ASSOCIATION_STATE dot11AssociationState;// Offset=0x114 Size=0x4
    enum _DOT11_POWER_MODE dot11PowerMode;// Offset=0x118 Size=0x4
    union _LARGE_INTEGER liAssociationUpTime;// Offset=0x120 Size=0x8
    unsigned long long ullNumOfTxPacketSuccesses;// Offset=0x128 Size=0x8
    unsigned long long ullNumOfTxPacketFailures;// Offset=0x130 Size=0x8
    unsigned long long ullNumOfRxPacketSuccesses;// Offset=0x138 Size=0x8
    unsigned long long ullNumOfRxPacketFailures;// Offset=0x140 Size=0x8
};
