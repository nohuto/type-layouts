struct _PCI_EXPRESS_ENHANCED_CAPABILITY_HEADER// Size=0x4 (Id=3996)
{
    unsigned short CapabilityID;// Offset=0x0 Size=0x2
    struct // Size=0x2 (Id=0)
    {
        unsigned short Version:4;// Offset=0x2 Size=0x2 BitOffset=0x0 BitSize=0x4
        unsigned short Next:12;// Offset=0x2 Size=0x2 BitOffset=0x4 BitSize=0xc
    };
};

union _PCI_EXPRESS_DOE_CAPABILITIES_REGISTER// Size=0x4 (Id=3200)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long InterruptSupport:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long InterruptMessageNumber:10;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0xa
        unsigned long AttentionSupport:1;// Offset=0x0 Size=0x4 BitOffset=0xb BitSize=0x1
        unsigned long AsyncSupport:1;// Offset=0x0 Size=0x4 BitOffset=0xc BitSize=0x1
        unsigned long Rsvd:19;// Offset=0x0 Size=0x4 BitOffset=0xd BitSize=0x13
    };
    unsigned long AsULONG;// Offset=0x0 Size=0x4
};

union _PCI_EXPRESS_DOE_CONTROL_REGISTER// Size=0x4 (Id=3006)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long DoeAbort:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long DoeInterruptEnable:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
        unsigned long AttentionNotNeeded:1;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x1
        unsigned long AsyncEnable:1;// Offset=0x0 Size=0x4 BitOffset=0x3 BitSize=0x1
        unsigned long Rsvd:27;// Offset=0x0 Size=0x4 BitOffset=0x4 BitSize=0x1b
        unsigned long DoeGo:1;// Offset=0x0 Size=0x4 BitOffset=0x1f BitSize=0x1
    };
    unsigned long AsULONG;// Offset=0x0 Size=0x4
};

union _PCI_EXPRESS_DOE_STATUS_REGISTER// Size=0x4 (Id=1016)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long DoeBusy:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long DoeInterruptStatus:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
        unsigned long DoeError:1;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x1
        unsigned long AsyncStatus:1;// Offset=0x0 Size=0x4 BitOffset=0x3 BitSize=0x1
        unsigned long AtAttention:1;// Offset=0x0 Size=0x4 BitOffset=0x4 BitSize=0x1
        unsigned long Rsvd:26;// Offset=0x0 Size=0x4 BitOffset=0x5 BitSize=0x1a
        unsigned long DataObjectReady:1;// Offset=0x0 Size=0x4 BitOffset=0x1f BitSize=0x1
    };
    unsigned long AsULONG;// Offset=0x0 Size=0x4
};

struct _PCI_EXPRESS_DOE_WRITE_MAILBOX_REGISTER// Size=0x4 (Id=2018)
{
    unsigned long WriteDataMailbox;// Offset=0x0 Size=0x4
};

struct _PCI_EXPRESS_DOE_READ_MAILBOX_REGISTER// Size=0x4 (Id=1308)
{
    unsigned long ReadDataMailbox;// Offset=0x0 Size=0x4
};

struct _PCI_EXPRESS_DATA_OBJECT_EXCHANGE_EXTENDED_CAPABILITY// Size=0x18 (Id=3654)
{
    struct _PCI_EXPRESS_ENHANCED_CAPABILITY_HEADER Header;// Offset=0x0 Size=0x4
    union _PCI_EXPRESS_DOE_CAPABILITIES_REGISTER DoeCapabilities;// Offset=0x4 Size=0x4
    union _PCI_EXPRESS_DOE_CONTROL_REGISTER DoeControl;// Offset=0x8 Size=0x4
    union _PCI_EXPRESS_DOE_STATUS_REGISTER DoeStatus;// Offset=0xc Size=0x4
    struct _PCI_EXPRESS_DOE_WRITE_MAILBOX_REGISTER WriteMailbox;// Offset=0x10 Size=0x4
    struct _PCI_EXPRESS_DOE_READ_MAILBOX_REGISTER ReadMailbox;// Offset=0x14 Size=0x4
};
