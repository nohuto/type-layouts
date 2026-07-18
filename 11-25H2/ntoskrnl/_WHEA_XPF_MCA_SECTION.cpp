enum _WHEA_CPU_VENDOR
{
    WheaCpuVendorOther=0,
    WheaCpuVendorIntel=1,
    WheaCpuVendorAmd=2
};

struct _unnamed_9// Size=0x8 (Id=9)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
};

union _LARGE_INTEGER// Size=0x8 (Id=587)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
    struct _unnamed_9 u;// Offset=0x0 Size=0x8
    long long QuadPart;// Offset=0x0 Size=0x8
};

union _MCG_STATUS// Size=0x8 (Id=251)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long RestartIpValid:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long ErrorIpValid:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
        unsigned long MachineCheckInProgress:1;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x1
        unsigned long LocalMceValid:1;// Offset=0x0 Size=0x4 BitOffset=0x3 BitSize=0x1
        unsigned long Reserved1:28;// Offset=0x0 Size=0x4 BitOffset=0x4 BitSize=0x1c
    };
    unsigned long Reserved2;// Offset=0x4 Size=0x4
    unsigned long long QuadPart;// Offset=0x0 Size=0x8
};

struct _MCI_STATUS_BITS_COMMON// Size=0x8 (Id=391)
{
    struct // Size=0x8 (Id=0)
    {
        unsigned long long McaErrorCode:16;// Offset=0x0 Size=0x8 BitOffset=0x0 BitSize=0x10
        unsigned long long ModelErrorCode:16;// Offset=0x0 Size=0x8 BitOffset=0x10 BitSize=0x10
        unsigned long long Reserved:25;// Offset=0x0 Size=0x8 BitOffset=0x20 BitSize=0x19
        unsigned long long ContextCorrupt:1;// Offset=0x0 Size=0x8 BitOffset=0x39 BitSize=0x1
        unsigned long long AddressValid:1;// Offset=0x0 Size=0x8 BitOffset=0x3a BitSize=0x1
        unsigned long long MiscValid:1;// Offset=0x0 Size=0x8 BitOffset=0x3b BitSize=0x1
        unsigned long long ErrorEnabled:1;// Offset=0x0 Size=0x8 BitOffset=0x3c BitSize=0x1
        unsigned long long UncorrectedError:1;// Offset=0x0 Size=0x8 BitOffset=0x3d BitSize=0x1
        unsigned long long StatusOverFlow:1;// Offset=0x0 Size=0x8 BitOffset=0x3e BitSize=0x1
        unsigned long long Valid:1;// Offset=0x0 Size=0x8 BitOffset=0x3f BitSize=0x1
    };
};

struct _MCI_STATUS_AMD_BITS// Size=0x8 (Id=433)
{
    struct // Size=0x8 (Id=0)
    {
        unsigned long long McaErrorCode:16;// Offset=0x0 Size=0x8 BitOffset=0x0 BitSize=0x10
        unsigned long long ModelErrorCode:16;// Offset=0x0 Size=0x8 BitOffset=0x10 BitSize=0x10
        unsigned long long ImplementationSpecific2:11;// Offset=0x0 Size=0x8 BitOffset=0x20 BitSize=0xb
        unsigned long long Poison:1;// Offset=0x0 Size=0x8 BitOffset=0x2b BitSize=0x1
        unsigned long long Deferred:1;// Offset=0x0 Size=0x8 BitOffset=0x2c BitSize=0x1
        unsigned long long ImplementationSpecific1:12;// Offset=0x0 Size=0x8 BitOffset=0x2d BitSize=0xc
        unsigned long long ContextCorrupt:1;// Offset=0x0 Size=0x8 BitOffset=0x39 BitSize=0x1
        unsigned long long AddressValid:1;// Offset=0x0 Size=0x8 BitOffset=0x3a BitSize=0x1
        unsigned long long MiscValid:1;// Offset=0x0 Size=0x8 BitOffset=0x3b BitSize=0x1
        unsigned long long ErrorEnabled:1;// Offset=0x0 Size=0x8 BitOffset=0x3c BitSize=0x1
        unsigned long long UncorrectedError:1;// Offset=0x0 Size=0x8 BitOffset=0x3d BitSize=0x1
        unsigned long long StatusOverFlow:1;// Offset=0x0 Size=0x8 BitOffset=0x3e BitSize=0x1
        unsigned long long Valid:1;// Offset=0x0 Size=0x8 BitOffset=0x3f BitSize=0x1
    };
};

struct _MCI_STATUS_INTEL_BITS// Size=0x8 (Id=338)
{
    struct // Size=0x8 (Id=0)
    {
        unsigned long long McaErrorCode:16;// Offset=0x0 Size=0x8 BitOffset=0x0 BitSize=0x10
        unsigned long long ModelErrorCode:16;// Offset=0x0 Size=0x8 BitOffset=0x10 BitSize=0x10
        unsigned long long OtherInfo:5;// Offset=0x0 Size=0x8 BitOffset=0x20 BitSize=0x5
        unsigned long long FirmwareUpdateError:1;// Offset=0x0 Size=0x8 BitOffset=0x25 BitSize=0x1
        unsigned long long CorrectedErrorCount:15;// Offset=0x0 Size=0x8 BitOffset=0x26 BitSize=0xf
        unsigned long long ThresholdErrorStatus:2;// Offset=0x0 Size=0x8 BitOffset=0x35 BitSize=0x2
        unsigned long long ActionRequired:1;// Offset=0x0 Size=0x8 BitOffset=0x37 BitSize=0x1
        unsigned long long Signalling:1;// Offset=0x0 Size=0x8 BitOffset=0x38 BitSize=0x1
        unsigned long long ContextCorrupt:1;// Offset=0x0 Size=0x8 BitOffset=0x39 BitSize=0x1
        unsigned long long AddressValid:1;// Offset=0x0 Size=0x8 BitOffset=0x3a BitSize=0x1
        unsigned long long MiscValid:1;// Offset=0x0 Size=0x8 BitOffset=0x3b BitSize=0x1
        unsigned long long ErrorEnabled:1;// Offset=0x0 Size=0x8 BitOffset=0x3c BitSize=0x1
        unsigned long long UncorrectedError:1;// Offset=0x0 Size=0x8 BitOffset=0x3d BitSize=0x1
        unsigned long long StatusOverFlow:1;// Offset=0x0 Size=0x8 BitOffset=0x3e BitSize=0x1
        unsigned long long Valid:1;// Offset=0x0 Size=0x8 BitOffset=0x3f BitSize=0x1
    };
};

union _MCI_STATUS// Size=0x8 (Id=328)
{
    struct _MCI_STATUS_BITS_COMMON CommonBits;// Offset=0x0 Size=0x8
    struct _MCI_STATUS_AMD_BITS AmdBits;// Offset=0x0 Size=0x8
    struct _MCI_STATUS_INTEL_BITS IntelBits;// Offset=0x0 Size=0x8
    unsigned long long QuadPart;// Offset=0x0 Size=0x8
};

struct _WHEA_AMD_EXTENDED_REGISTERS// Size=0xc0 (Id=303)
{
    unsigned long long IPID;// Offset=0x0 Size=0x8
    unsigned long long SYND;// Offset=0x8 Size=0x8
    unsigned long long CONFIG;// Offset=0x10 Size=0x8
    unsigned long long DESTAT;// Offset=0x18 Size=0x8
    unsigned long long DEADDR;// Offset=0x20 Size=0x8
    unsigned long long MISC1;// Offset=0x28 Size=0x8
    unsigned long long MISC2;// Offset=0x30 Size=0x8
    unsigned long long MISC3;// Offset=0x38 Size=0x8
    unsigned long long MISC4;// Offset=0x40 Size=0x8
    unsigned long long RasCap;// Offset=0x48 Size=0x8
    unsigned long long Reserved[14];// Offset=0x50 Size=0x70
};

union _MCG_CAP// Size=0x8 (Id=266)
{
    struct // Size=0x8 (Id=0)
    {
        unsigned long long CountField:8;// Offset=0x0 Size=0x8 BitOffset=0x0 BitSize=0x8
        unsigned long long ControlMsrPresent:1;// Offset=0x0 Size=0x8 BitOffset=0x8 BitSize=0x1
        unsigned long long ExtendedMsrsPresent:1;// Offset=0x0 Size=0x8 BitOffset=0x9 BitSize=0x1
        unsigned long long SignalingExtensionPresent:1;// Offset=0x0 Size=0x8 BitOffset=0xa BitSize=0x1
        unsigned long long ThresholdErrorStatusPresent:1;// Offset=0x0 Size=0x8 BitOffset=0xb BitSize=0x1
        unsigned long long Reserved:4;// Offset=0x0 Size=0x8 BitOffset=0xc BitSize=0x4
        unsigned long long ExtendedRegisterCount:8;// Offset=0x0 Size=0x8 BitOffset=0x10 BitSize=0x8
        unsigned long long SoftwareErrorRecoverySupported:1;// Offset=0x0 Size=0x8 BitOffset=0x18 BitSize=0x1
        unsigned long long EnhancedMachineCheckCapability:1;// Offset=0x0 Size=0x8 BitOffset=0x19 BitSize=0x1
        unsigned long long ExtendedErrorLogging:1;// Offset=0x0 Size=0x8 BitOffset=0x1a BitSize=0x1
        unsigned long long LocalMachineCheckException:1;// Offset=0x0 Size=0x8 BitOffset=0x1b BitSize=0x1
    };
    unsigned long long QuadPart;// Offset=0x0 Size=0x8
};

struct _unnamed_228// Size=0x4 (Id=228)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned int NotSupported:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned int Overflow:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
        unsigned int ContextCorrupt:1;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x1
        unsigned int RestartIpErrorIpNotValid:1;// Offset=0x0 Size=0x4 BitOffset=0x3 BitSize=0x1
        unsigned int NoRecoveryContext:1;// Offset=0x0 Size=0x4 BitOffset=0x4 BitSize=0x1
        unsigned int MiscOrAddrNotValid:1;// Offset=0x0 Size=0x4 BitOffset=0x5 BitSize=0x1
        unsigned int InvalidAddressMode:1;// Offset=0x0 Size=0x4 BitOffset=0x6 BitSize=0x1
        unsigned int HighIrql:1;// Offset=0x0 Size=0x4 BitOffset=0x7 BitSize=0x1
        unsigned int InterruptsDisabled:1;// Offset=0x0 Size=0x4 BitOffset=0x8 BitSize=0x1
        unsigned int SwapBusy:1;// Offset=0x0 Size=0x4 BitOffset=0x9 BitSize=0x1
        unsigned int StackOverflow:1;// Offset=0x0 Size=0x4 BitOffset=0xa BitSize=0x1
        unsigned int Reserved:21;// Offset=0x0 Size=0x4 BitOffset=0xb BitSize=0x15
    };
};

struct _unnamed_229// Size=0x4 (Id=229)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned int RecoveryAttempted:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned int HvHandled:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
        unsigned int Reserved:30;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x1e
    };
};

struct _XPF_RECOVERY_INFO// Size=0x14 (Id=230)
{
    struct _unnamed_228 FailureReason;// Offset=0x0 Size=0x4
    struct _unnamed_229 Action;// Offset=0x4 Size=0x4
    unsigned char ActionRequired;// Offset=0x8 Size=0x1
    unsigned char RecoverySucceeded;// Offset=0x9 Size=0x1
    unsigned char RecoveryKernel;// Offset=0xa Size=0x1
    unsigned char Reserved;// Offset=0xb Size=0x1
    unsigned short Reserved2;// Offset=0xc Size=0x2
    unsigned short Reserved3;// Offset=0xe Size=0x2
    unsigned int Reserved4;// Offset=0x10 Size=0x4
};

struct _WHEA_XPF_MCA_SECTION// Size=0x4a8 (Id=200)
{
    unsigned long VersionNumber;// Offset=0x0 Size=0x4
    enum _WHEA_CPU_VENDOR CpuVendor;// Offset=0x4 Size=0x4
    union _LARGE_INTEGER Timestamp;// Offset=0x8 Size=0x8
    unsigned long ProcessorNumber;// Offset=0x10 Size=0x4
    union _MCG_STATUS GlobalStatus;// Offset=0x14 Size=0x8
    unsigned long long InstructionPointer;// Offset=0x1c Size=0x8
    unsigned long BankNumber;// Offset=0x24 Size=0x4
    union _MCI_STATUS Status;// Offset=0x28 Size=0x8
    unsigned long long Address;// Offset=0x30 Size=0x8
    unsigned long long Misc;// Offset=0x38 Size=0x8
    unsigned long ExtendedRegisterCount;// Offset=0x40 Size=0x4
    unsigned long ApicId;// Offset=0x44 Size=0x4
    union // Size=0xc0 (Id=0)
    {
        unsigned long long ExtendedRegisters[24];// Offset=0x48 Size=0xc0
        struct _WHEA_AMD_EXTENDED_REGISTERS AMDExtendedRegisters;// Offset=0x48 Size=0xc0
    };
    union _MCG_CAP GlobalCapability;// Offset=0x108 Size=0x8
    struct _XPF_RECOVERY_INFO RecoveryInfo;// Offset=0x110 Size=0x14
    unsigned long ExBankCount;// Offset=0x124 Size=0x4
    unsigned long BankNumberEx[32];// Offset=0x128 Size=0x80
    union _MCI_STATUS StatusEx[32];// Offset=0x1a8 Size=0x100
    unsigned long long AddressEx[32];// Offset=0x2a8 Size=0x100
    unsigned long long MiscEx[32];// Offset=0x3a8 Size=0x100
};
