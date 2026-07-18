struct _PCI_EXPRESS_ENHANCED_CAPABILITY_HEADER// Size=0x4 (Id=3457)
{
    unsigned short CapabilityID;// Offset=0x0 Size=0x2
    struct // Size=0x2 (Id=0)
    {
        unsigned short Version:4;// Offset=0x2 Size=0x2 BitOffset=0x0 BitSize=0x4
        unsigned short Next:12;// Offset=0x2 Size=0x2 BitOffset=0x4 BitSize=0xc
    };
};

union _PCI_EXPRESS_ACS_CAPABILITY_REGISTER// Size=0x2 (Id=1632)
{
    struct // Size=0x2 (Id=0)
    {
        unsigned short SourceValidation:1;// Offset=0x0 Size=0x2 BitOffset=0x0 BitSize=0x1
        unsigned short TranslationBlocking:1;// Offset=0x0 Size=0x2 BitOffset=0x1 BitSize=0x1
        unsigned short RequestRedirect:1;// Offset=0x0 Size=0x2 BitOffset=0x2 BitSize=0x1
        unsigned short CompletionRedirect:1;// Offset=0x0 Size=0x2 BitOffset=0x3 BitSize=0x1
        unsigned short UpstreamForwarding:1;// Offset=0x0 Size=0x2 BitOffset=0x4 BitSize=0x1
        unsigned short EgressControl:1;// Offset=0x0 Size=0x2 BitOffset=0x5 BitSize=0x1
        unsigned short DirectTranslation:1;// Offset=0x0 Size=0x2 BitOffset=0x6 BitSize=0x1
        unsigned short EnhancedCapability:1;// Offset=0x0 Size=0x2 BitOffset=0x7 BitSize=0x1
        unsigned short EgressControlVectorSize:8;// Offset=0x0 Size=0x2 BitOffset=0x8 BitSize=0x8
    };
    unsigned short AsUSHORT;// Offset=0x0 Size=0x2
};

union _PCI_EXPRESS_ACS_CONTROL// Size=0x2 (Id=672)
{
    struct // Size=0x2 (Id=0)
    {
        unsigned short SourceValidation:1;// Offset=0x0 Size=0x2 BitOffset=0x0 BitSize=0x1
        unsigned short TranslationBlocking:1;// Offset=0x0 Size=0x2 BitOffset=0x1 BitSize=0x1
        unsigned short RequestRedirect:1;// Offset=0x0 Size=0x2 BitOffset=0x2 BitSize=0x1
        unsigned short CompletionRedirect:1;// Offset=0x0 Size=0x2 BitOffset=0x3 BitSize=0x1
        unsigned short UpstreamForwarding:1;// Offset=0x0 Size=0x2 BitOffset=0x4 BitSize=0x1
        unsigned short EgressControl:1;// Offset=0x0 Size=0x2 BitOffset=0x5 BitSize=0x1
        unsigned short DirectTranslation:1;// Offset=0x0 Size=0x2 BitOffset=0x6 BitSize=0x1
        unsigned short IoBlocking:1;// Offset=0x0 Size=0x2 BitOffset=0x7 BitSize=0x1
        unsigned short DspMemoryControl:2;// Offset=0x0 Size=0x2 BitOffset=0x8 BitSize=0x2
        unsigned short UspMemoryControl:2;// Offset=0x0 Size=0x2 BitOffset=0xa BitSize=0x2
        unsigned short UnclaimedRedirect:1;// Offset=0x0 Size=0x2 BitOffset=0xc BitSize=0x1
        unsigned short Reserved:3;// Offset=0x0 Size=0x2 BitOffset=0xd BitSize=0x3
    };
    unsigned short AsUSHORT;// Offset=0x0 Size=0x2
};

struct _PCI_EXPRESS_ACS_CAPABILITY// Size=0xc (Id=3324)
{
    struct _PCI_EXPRESS_ENHANCED_CAPABILITY_HEADER Header;// Offset=0x0 Size=0x4
    union _PCI_EXPRESS_ACS_CAPABILITY_REGISTER Capability;// Offset=0x4 Size=0x2
    union _PCI_EXPRESS_ACS_CONTROL Control;// Offset=0x6 Size=0x2
    unsigned long EgressControl[1];// Offset=0x8 Size=0x4
};
