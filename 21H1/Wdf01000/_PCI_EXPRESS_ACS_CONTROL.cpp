union _PCI_EXPRESS_ACS_CONTROL// Size=0x2 (Id=1744)
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
        unsigned short Reserved:9;// Offset=0x0 Size=0x2 BitOffset=0x7 BitSize=0x9
    };
    unsigned short AsUSHORT;// Offset=0x0 Size=0x2
};
