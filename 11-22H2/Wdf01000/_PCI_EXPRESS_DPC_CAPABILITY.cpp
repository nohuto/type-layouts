struct _PCI_EXPRESS_ENHANCED_CAPABILITY_HEADER// Size=0x4 (Id=3457)
{
    unsigned short CapabilityID;// Offset=0x0 Size=0x2
    struct // Size=0x2 (Id=0)
    {
        unsigned short Version:4;// Offset=0x2 Size=0x2 BitOffset=0x0 BitSize=0x4
        unsigned short Next:12;// Offset=0x2 Size=0x2 BitOffset=0x4 BitSize=0xc
    };
};

union _PCI_EXPRESS_DPC_CAPS_REGISTER// Size=0x2 (Id=3579)
{
    struct // Size=0x2 (Id=0)
    {
        unsigned short InterruptMsgNumber:5;// Offset=0x0 Size=0x2 BitOffset=0x0 BitSize=0x5
        unsigned short RpExtensionsForDpc:1;// Offset=0x0 Size=0x2 BitOffset=0x5 BitSize=0x1
        unsigned short PoisonedTlpEgressBlockingSupported:1;// Offset=0x0 Size=0x2 BitOffset=0x6 BitSize=0x1
        unsigned short DpcSoftwareTriggeringSupported:1;// Offset=0x0 Size=0x2 BitOffset=0x7 BitSize=0x1
        unsigned short RpPioLogSize:4;// Offset=0x0 Size=0x2 BitOffset=0x8 BitSize=0x4
        unsigned short DlActiveErrCorSignalingSupported:1;// Offset=0x0 Size=0x2 BitOffset=0xc BitSize=0x1
        unsigned short Reserved:3;// Offset=0x0 Size=0x2 BitOffset=0xd BitSize=0x3
    };
    unsigned short AsUSHORT;// Offset=0x0 Size=0x2
};

union _PCI_EXPRESS_DPC_CONTROL_REGISTER// Size=0x2 (Id=1697)
{
    struct // Size=0x2 (Id=0)
    {
        unsigned short TriggerEnable:2;// Offset=0x0 Size=0x2 BitOffset=0x0 BitSize=0x2
        unsigned short CompletionControl:1;// Offset=0x0 Size=0x2 BitOffset=0x2 BitSize=0x1
        unsigned short InterruptEnable:1;// Offset=0x0 Size=0x2 BitOffset=0x3 BitSize=0x1
        unsigned short ErrCorEnable:1;// Offset=0x0 Size=0x2 BitOffset=0x4 BitSize=0x1
        unsigned short PoisonedTlpEgressBlockingEnable:1;// Offset=0x0 Size=0x2 BitOffset=0x5 BitSize=0x1
        unsigned short SoftwareTrigger:1;// Offset=0x0 Size=0x2 BitOffset=0x6 BitSize=0x1
        unsigned short DlActiveErrCorEnable:1;// Offset=0x0 Size=0x2 BitOffset=0x7 BitSize=0x1
        unsigned short Reserved:8;// Offset=0x0 Size=0x2 BitOffset=0x8 BitSize=0x8
    };
    unsigned short AsUSHORT;// Offset=0x0 Size=0x2
};

union _PCI_EXPRESS_DPC_STATUS_REGISTER// Size=0x2 (Id=3156)
{
    struct // Size=0x2 (Id=0)
    {
        unsigned short TriggerStatus:1;// Offset=0x0 Size=0x2 BitOffset=0x0 BitSize=0x1
        unsigned short TriggerReason:2;// Offset=0x0 Size=0x2 BitOffset=0x1 BitSize=0x2
        unsigned short InterruptStatus:1;// Offset=0x0 Size=0x2 BitOffset=0x3 BitSize=0x1
        unsigned short RpBusy:1;// Offset=0x0 Size=0x2 BitOffset=0x4 BitSize=0x1
        unsigned short TriggerReasonExtension:2;// Offset=0x0 Size=0x2 BitOffset=0x5 BitSize=0x2
        unsigned short Reserved1:1;// Offset=0x0 Size=0x2 BitOffset=0x7 BitSize=0x1
        unsigned short PioFirstErrPointer:5;// Offset=0x0 Size=0x2 BitOffset=0x8 BitSize=0x5
        unsigned short Reserved2:3;// Offset=0x0 Size=0x2 BitOffset=0xd BitSize=0x3
    };
    unsigned short AsUSHORT;// Offset=0x0 Size=0x2
};

union _PCI_EXPRESS_DPC_ERROR_SOURCE_ID// Size=0x2 (Id=3307)
{
    struct // Size=0x2 (Id=0)
    {
        unsigned short Function:3;// Offset=0x0 Size=0x2 BitOffset=0x0 BitSize=0x3
        unsigned short Device:5;// Offset=0x0 Size=0x2 BitOffset=0x3 BitSize=0x5
        unsigned short Bus:8;// Offset=0x0 Size=0x2 BitOffset=0x8 BitSize=0x8
    };
    unsigned short AsUSHORT;// Offset=0x0 Size=0x2
};

union _PCI_EXPRESS_DPC_RP_PIO_STATUS_REGISTER// Size=0x4 (Id=3249)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long CfgURCpl:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long CfgCACpl:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
        unsigned long CfgCTO:1;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x1
        unsigned long Reserved1:5;// Offset=0x0 Size=0x4 BitOffset=0x3 BitSize=0x5
        unsigned long IoURCpl:1;// Offset=0x0 Size=0x4 BitOffset=0x8 BitSize=0x1
        unsigned long IoCACpl:1;// Offset=0x0 Size=0x4 BitOffset=0x9 BitSize=0x1
        unsigned long IoCTO:1;// Offset=0x0 Size=0x4 BitOffset=0xa BitSize=0x1
        unsigned long Reserved2:5;// Offset=0x0 Size=0x4 BitOffset=0xb BitSize=0x5
        unsigned long MemURCpl:1;// Offset=0x0 Size=0x4 BitOffset=0x10 BitSize=0x1
        unsigned long MemCACpl:1;// Offset=0x0 Size=0x4 BitOffset=0x11 BitSize=0x1
        unsigned long MemCTO:1;// Offset=0x0 Size=0x4 BitOffset=0x12 BitSize=0x1
        unsigned long Reserved3:12;// Offset=0x0 Size=0x4 BitOffset=0x13 BitSize=0xc
        unsigned long Reserved4:1;// Offset=0x0 Size=0x4 BitOffset=0x1f BitSize=0x1
    };
    unsigned long AsULONG;// Offset=0x0 Size=0x4
};

union _PCI_EXPRESS_DPC_RP_PIO_MASK_REGISTER// Size=0x4 (Id=2349)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long CfgURCpl:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long CfgCACpl:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
        unsigned long CfgCTO:1;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x1
        unsigned long Reserved1:5;// Offset=0x0 Size=0x4 BitOffset=0x3 BitSize=0x5
        unsigned long IoURCpl:1;// Offset=0x0 Size=0x4 BitOffset=0x8 BitSize=0x1
        unsigned long IoCACpl:1;// Offset=0x0 Size=0x4 BitOffset=0x9 BitSize=0x1
        unsigned long IoCTO:1;// Offset=0x0 Size=0x4 BitOffset=0xa BitSize=0x1
        unsigned long Reserved2:5;// Offset=0x0 Size=0x4 BitOffset=0xb BitSize=0x5
        unsigned long MemURCpl:1;// Offset=0x0 Size=0x4 BitOffset=0x10 BitSize=0x1
        unsigned long MemCACpl:1;// Offset=0x0 Size=0x4 BitOffset=0x11 BitSize=0x1
        unsigned long MemCTO:1;// Offset=0x0 Size=0x4 BitOffset=0x12 BitSize=0x1
        unsigned long Reserved3:13;// Offset=0x0 Size=0x4 BitOffset=0x13 BitSize=0xd
    };
    unsigned long AsULONG;// Offset=0x0 Size=0x4
};

union _PCI_EXPRESS_DPC_RP_PIO_SEVERITY_REGISTER// Size=0x4 (Id=2867)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long CfgURCpl:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long CfgCACpl:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
        unsigned long CfgCTO:1;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x1
        unsigned long Reserved1:5;// Offset=0x0 Size=0x4 BitOffset=0x3 BitSize=0x5
        unsigned long IoURCpl:1;// Offset=0x0 Size=0x4 BitOffset=0x8 BitSize=0x1
        unsigned long IoCACpl:1;// Offset=0x0 Size=0x4 BitOffset=0x9 BitSize=0x1
        unsigned long IoCTO:1;// Offset=0x0 Size=0x4 BitOffset=0xa BitSize=0x1
        unsigned long Reserved2:5;// Offset=0x0 Size=0x4 BitOffset=0xb BitSize=0x5
        unsigned long MemURCpl:1;// Offset=0x0 Size=0x4 BitOffset=0x10 BitSize=0x1
        unsigned long MemCACpl:1;// Offset=0x0 Size=0x4 BitOffset=0x11 BitSize=0x1
        unsigned long MemCTO:1;// Offset=0x0 Size=0x4 BitOffset=0x12 BitSize=0x1
        unsigned long Reserved3:13;// Offset=0x0 Size=0x4 BitOffset=0x13 BitSize=0xd
    };
    unsigned long AsULONG;// Offset=0x0 Size=0x4
};

union _PCI_EXPRESS_DPC_RP_PIO_SYSERR_REGISTER// Size=0x4 (Id=869)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long CfgURCpl:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long CfgCACpl:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
        unsigned long CfgCTO:1;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x1
        unsigned long Reserved1:5;// Offset=0x0 Size=0x4 BitOffset=0x3 BitSize=0x5
        unsigned long IoURCpl:1;// Offset=0x0 Size=0x4 BitOffset=0x8 BitSize=0x1
        unsigned long IoCACpl:1;// Offset=0x0 Size=0x4 BitOffset=0x9 BitSize=0x1
        unsigned long IoCTO:1;// Offset=0x0 Size=0x4 BitOffset=0xa BitSize=0x1
        unsigned long Reserved2:5;// Offset=0x0 Size=0x4 BitOffset=0xb BitSize=0x5
        unsigned long MemURCpl:1;// Offset=0x0 Size=0x4 BitOffset=0x10 BitSize=0x1
        unsigned long MemCACpl:1;// Offset=0x0 Size=0x4 BitOffset=0x11 BitSize=0x1
        unsigned long MemCTO:1;// Offset=0x0 Size=0x4 BitOffset=0x12 BitSize=0x1
        unsigned long Reserved3:13;// Offset=0x0 Size=0x4 BitOffset=0x13 BitSize=0xd
    };
    unsigned long AsULONG;// Offset=0x0 Size=0x4
};

union _PCI_EXPRESS_DPC_RP_PIO_EXCEPTION_REGISTER// Size=0x4 (Id=2000)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long CfgURCpl:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long CfgCACpl:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
        unsigned long CfgCTO:1;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x1
        unsigned long Reserved1:5;// Offset=0x0 Size=0x4 BitOffset=0x3 BitSize=0x5
        unsigned long IoURCpl:1;// Offset=0x0 Size=0x4 BitOffset=0x8 BitSize=0x1
        unsigned long IoCACpl:1;// Offset=0x0 Size=0x4 BitOffset=0x9 BitSize=0x1
        unsigned long IoCTO:1;// Offset=0x0 Size=0x4 BitOffset=0xa BitSize=0x1
        unsigned long Reserved2:5;// Offset=0x0 Size=0x4 BitOffset=0xb BitSize=0x5
        unsigned long MemURCpl:1;// Offset=0x0 Size=0x4 BitOffset=0x10 BitSize=0x1
        unsigned long MemCACpl:1;// Offset=0x0 Size=0x4 BitOffset=0x11 BitSize=0x1
        unsigned long MemCTO:1;// Offset=0x0 Size=0x4 BitOffset=0x12 BitSize=0x1
        unsigned long Reserved3:13;// Offset=0x0 Size=0x4 BitOffset=0x13 BitSize=0xd
    };
    unsigned long AsULONG;// Offset=0x0 Size=0x4
};

struct _PCI_EXPRESS_DPC_RP_PIO_HEADERLOG_REGISTER// Size=0x10 (Id=3482)
{
    unsigned long PioHeaderLogRegister[4];// Offset=0x0 Size=0x10
};

union _PCI_EXPRESS_DPC_RP_PIO_IMPSPECLOG_REGISTER// Size=0x4 (Id=364)
{
    unsigned long PioImpSpecLog;// Offset=0x0 Size=0x4
};

struct _PCI_EXPRESS_DPC_RP_PIO_TLPPREFIXLOG_REGISTER// Size=0x10 (Id=1084)
{
    unsigned long PioTlpPrefixLogRegister[4];// Offset=0x0 Size=0x10
};

struct _PCI_EXPRESS_DPC_CAPABILITY// Size=0x44 (Id=1976)
{
    struct _PCI_EXPRESS_ENHANCED_CAPABILITY_HEADER Header;// Offset=0x0 Size=0x4
    union _PCI_EXPRESS_DPC_CAPS_REGISTER DpcCapabilities;// Offset=0x4 Size=0x2
    union _PCI_EXPRESS_DPC_CONTROL_REGISTER DpcControl;// Offset=0x6 Size=0x2
    union _PCI_EXPRESS_DPC_STATUS_REGISTER DpcStatus;// Offset=0x8 Size=0x2
    union _PCI_EXPRESS_DPC_ERROR_SOURCE_ID DpcErrSrcId;// Offset=0xa Size=0x2
    union _PCI_EXPRESS_DPC_RP_PIO_STATUS_REGISTER RpPioStatus;// Offset=0xc Size=0x4
    union _PCI_EXPRESS_DPC_RP_PIO_MASK_REGISTER RpPioMask;// Offset=0x10 Size=0x4
    union _PCI_EXPRESS_DPC_RP_PIO_SEVERITY_REGISTER RpPioSeverity;// Offset=0x14 Size=0x4
    union _PCI_EXPRESS_DPC_RP_PIO_SYSERR_REGISTER RpPioSysError;// Offset=0x18 Size=0x4
    union _PCI_EXPRESS_DPC_RP_PIO_EXCEPTION_REGISTER RpPioException;// Offset=0x1c Size=0x4
    struct _PCI_EXPRESS_DPC_RP_PIO_HEADERLOG_REGISTER RpPioHeaderLog;// Offset=0x20 Size=0x10
    union _PCI_EXPRESS_DPC_RP_PIO_IMPSPECLOG_REGISTER RpPioImpSpecLog;// Offset=0x30 Size=0x4
    struct _PCI_EXPRESS_DPC_RP_PIO_TLPPREFIXLOG_REGISTER RpPioPrefixLog;// Offset=0x34 Size=0x10
};
