enum _ACTIVITY_THROTTLE_POLICY_OP
{
    ActivityThrottlePolicyDisable=0,
    ActivityThrottlePolicyEnable=1,
    ActivityThrottlePolicyDefault=2,
    MaxActivityThrottlePolicy=3
};

struct _ACTIVITY_THROTTLE_POLICY// Size=0xc (Id=2415)
{
    unsigned long Version;// Offset=0x0 Size=0x4
    enum _ACTIVITY_THROTTLE_POLICY_OP Operation;// Offset=0x4 Size=0x4
    unsigned long PolicyFlags;// Offset=0x8 Size=0x4
};
