struct _SID_AND_ATTRIBUTES_HASH// Size=0x110 (Id=819)
{
    unsigned long SidCount;// Offset=0x0 Size=0x4
    struct _SID_AND_ATTRIBUTES * SidAttr;// Offset=0x8 Size=0x8
    unsigned long long Hash[32];// Offset=0x10 Size=0x100
};

struct _AUTHZBASEP_CLAIM_ATTRIBUTES_COLLECTION// Size=0x260 (Id=560)
{
    unsigned long DeviceGroupsCount;// Offset=0x0 Size=0x4
    struct _SID_AND_ATTRIBUTES * pDeviceGroups;// Offset=0x8 Size=0x8
    unsigned long RestrictedDeviceGroupsCount;// Offset=0x10 Size=0x4
    struct _SID_AND_ATTRIBUTES * pRestrictedDeviceGroups;// Offset=0x18 Size=0x8
    struct _SID_AND_ATTRIBUTES_HASH DeviceGroupsHash;// Offset=0x20 Size=0x110
    struct _SID_AND_ATTRIBUTES_HASH RestrictedDeviceGroupsHash;// Offset=0x130 Size=0x110
    struct _AUTHZBASEP_SECURITY_ATTRIBUTES_INFORMATION * pUserSecurityAttributes;// Offset=0x240 Size=0x8
    struct _AUTHZBASEP_SECURITY_ATTRIBUTES_INFORMATION * pDeviceSecurityAttributes;// Offset=0x248 Size=0x8
    struct _AUTHZBASEP_SECURITY_ATTRIBUTES_INFORMATION * pRestrictedUserSecurityAttributes;// Offset=0x250 Size=0x8
    struct _AUTHZBASEP_SECURITY_ATTRIBUTES_INFORMATION * pRestrictedDeviceSecurityAttributes;// Offset=0x258 Size=0x8
};
