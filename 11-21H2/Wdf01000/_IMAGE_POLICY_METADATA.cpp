struct _IMAGE_POLICY_METADATA// Size=0x10 (Id=1689)
{
    unsigned char Version;// Offset=0x0 Size=0x1
    unsigned char Reserved0[7];// Offset=0x1 Size=0x7
    unsigned long long ApplicationId;// Offset=0x8 Size=0x8
    struct _IMAGE_POLICY_ENTRY Policies[0];
};
