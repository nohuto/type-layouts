struct _VF_KE_CRITICAL_REGION_TRACE// Size=0x50 (Id=1143)
{
    struct _ETHREAD * Thread;// Offset=0x0 Size=0x8
    void * StackTrace[7];// Offset=0x8 Size=0x38
    unsigned long long Lock;// Offset=0x40 Size=0x8
    unsigned long InUse;// Offset=0x48 Size=0x4
};
