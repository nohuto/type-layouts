struct _PROCESS_MITIGATION_BINARY_SIGNATURE_POLICY// Size=0x4 (Id=3959)
{
    union // Size=0x4 (Id=0)
    {
        unsigned long Flags;// Offset=0x0 Size=0x4
        struct // Size=0x4 (Id=0)
        {
            unsigned long MicrosoftSignedOnly:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
            unsigned long StoreSignedOnly:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
            unsigned long MitigationOptIn:1;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x1
            unsigned long AuditMicrosoftSignedOnly:1;// Offset=0x0 Size=0x4 BitOffset=0x3 BitSize=0x1
            unsigned long AuditStoreSignedOnly:1;// Offset=0x0 Size=0x4 BitOffset=0x4 BitSize=0x1
            unsigned long ReservedFlags:27;// Offset=0x0 Size=0x4 BitOffset=0x5 BitSize=0x1b
        };
    };
};
