union _KUSER_SHARED_DATA::_unnamed_986// Size=0x1 (Id=986)
{
    unsigned char MitigationPolicies;// Offset=0x0 Size=0x1
    struct // Size=0x1 (Id=0)
    {
        unsigned char NXSupportPolicy:2;// Offset=0x0 Size=0x1 BitOffset=0x0 BitSize=0x2
        unsigned char SEHValidationPolicy:2;// Offset=0x0 Size=0x1 BitOffset=0x2 BitSize=0x2
        unsigned char CurDirDevicesSkippedForDlls:2;// Offset=0x0 Size=0x1 BitOffset=0x4 BitSize=0x2
        unsigned char Reserved:2;// Offset=0x0 Size=0x1 BitOffset=0x6 BitSize=0x2
    };
};
