enum _WHEA_CPU_VENDOR
{
    WheaCpuVendorOther=0,
    WheaCpuVendorIntel=1,
    WheaCpuVendorAmd=2
};

struct _unnamed_73// Size=0x8 (Id=73)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
};

union _LARGE_INTEGER// Size=0x8 (Id=74)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
    struct _unnamed_73 u;// Offset=0x0 Size=0x8
    long long QuadPart;// Offset=0x0 Size=0x8
};

union _MCG_STATUS// Size=0x8 (Id=3269)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long RestartIpValid:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long ErrorIpValid:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
        unsigned long MachineCheckInProgress:1;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x1
        unsigned long Reserved1:29;// Offset=0x0 Size=0x4 BitOffset=0x3 BitSize=0x1d
    };
    unsigned long Reserved2;// Offset=0x4 Size=0x4
    unsigned long long QuadPart;// Offset=0x0 Size=0x8
};

union _MCI_STATUS// Size=0x8 (Id=2275)
{
    unsigned short McaErrorCode;// Offset=0x0 Size=0x2
    unsigned short ModelErrorCode;// Offset=0x2 Size=0x2
    struct // Size=0x4 (Id=0)
    {
        unsigned long OtherInformation:23;// Offset=0x4 Size=0x4 BitOffset=0x0 BitSize=0x17
        unsigned long ActionRequired:1;// Offset=0x4 Size=0x4 BitOffset=0x17 BitSize=0x1
        unsigned long Signalling:1;// Offset=0x4 Size=0x4 BitOffset=0x18 BitSize=0x1
        unsigned long ContextCorrupt:1;// Offset=0x4 Size=0x4 BitOffset=0x19 BitSize=0x1
        unsigned long AddressValid:1;// Offset=0x4 Size=0x4 BitOffset=0x1a BitSize=0x1
        unsigned long MiscValid:1;// Offset=0x4 Size=0x4 BitOffset=0x1b BitSize=0x1
        unsigned long ErrorEnabled:1;// Offset=0x4 Size=0x4 BitOffset=0x1c BitSize=0x1
        unsigned long UncorrectedError:1;// Offset=0x4 Size=0x4 BitOffset=0x1d BitSize=0x1
        unsigned long StatusOverFlow:1;// Offset=0x4 Size=0x4 BitOffset=0x1e BitSize=0x1
        unsigned long Valid:1;// Offset=0x4 Size=0x4 BitOffset=0x1f BitSize=0x1
    };
    unsigned long long QuadPart;// Offset=0x0 Size=0x8
};

struct _WHEA_XPF_MCA_SECTION// Size=0x108 (Id=2446)
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
    unsigned long Reserved2;// Offset=0x44 Size=0x4
    unsigned long long ExtendedRegisters[24];// Offset=0x48 Size=0xc0
};
