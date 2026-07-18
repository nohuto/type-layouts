struct _PROCESS_MITIGATION_IMAGE_LOAD_POLICY// Size=0x4 (Id=3893)
{
    union // Size=0x4 (Id=0)
    {
        unsigned long Flags;// Offset=0x0 Size=0x4
        struct // Size=0x4 (Id=0)
        {
            unsigned long NoRemoteImages:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
            unsigned long NoLowMandatoryLabelImages:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
            unsigned long PreferSystem32Images:1;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x1
            unsigned long AuditNoRemoteImages:1;// Offset=0x0 Size=0x4 BitOffset=0x3 BitSize=0x1
            unsigned long AuditNoLowMandatoryLabelImages:1;// Offset=0x0 Size=0x4 BitOffset=0x4 BitSize=0x1
            unsigned long ReservedFlags:27;// Offset=0x0 Size=0x4 BitOffset=0x5 BitSize=0x1b
        };
    };
};
