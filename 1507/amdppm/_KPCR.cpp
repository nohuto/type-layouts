struct _NT_TIB// Size=0x38 (Id=353)
{
    struct _EXCEPTION_REGISTRATION_RECORD * ExceptionList;// Offset=0x0 Size=0x8
    void * StackBase;// Offset=0x8 Size=0x8
    void * StackLimit;// Offset=0x10 Size=0x8
    void * SubSystemTib;// Offset=0x18 Size=0x8
    union // Size=0x8 (Id=0)
    {
        void * FiberData;// Offset=0x20 Size=0x8
        unsigned long Version;// Offset=0x20 Size=0x4
    };
    void * ArbitraryUserPointer;// Offset=0x28 Size=0x8
    struct _NT_TIB * Self;// Offset=0x30 Size=0x8
};

struct _KDESCRIPTOR// Size=0x10 (Id=566)
{
    unsigned short Pad[3];// Offset=0x0 Size=0x6
    unsigned short Limit;// Offset=0x6 Size=0x2
    void * Base;// Offset=0x8 Size=0x8
};

struct _KSPECIAL_REGISTERS// Size=0xe0 (Id=495)
{
    unsigned long long Cr0;// Offset=0x0 Size=0x8
    unsigned long long Cr2;// Offset=0x8 Size=0x8
    unsigned long long Cr3;// Offset=0x10 Size=0x8
    unsigned long long Cr4;// Offset=0x18 Size=0x8
    unsigned long long KernelDr0;// Offset=0x20 Size=0x8
    unsigned long long KernelDr1;// Offset=0x28 Size=0x8
    unsigned long long KernelDr2;// Offset=0x30 Size=0x8
    unsigned long long KernelDr3;// Offset=0x38 Size=0x8
    unsigned long long KernelDr6;// Offset=0x40 Size=0x8
    unsigned long long KernelDr7;// Offset=0x48 Size=0x8
    struct _KDESCRIPTOR Gdtr;// Offset=0x50 Size=0x10
    struct _KDESCRIPTOR Idtr;// Offset=0x60 Size=0x10
    unsigned short Tr;// Offset=0x70 Size=0x2
    unsigned short Ldtr;// Offset=0x72 Size=0x2
    unsigned long MxCsr;// Offset=0x74 Size=0x4
    unsigned long long DebugControl;// Offset=0x78 Size=0x8
    unsigned long long LastBranchToRip;// Offset=0x80 Size=0x8
    unsigned long long LastBranchFromRip;// Offset=0x88 Size=0x8
    unsigned long long LastExceptionToRip;// Offset=0x90 Size=0x8
    unsigned long long LastExceptionFromRip;// Offset=0x98 Size=0x8
    unsigned long long Cr8;// Offset=0xa0 Size=0x8
    unsigned long long MsrGsBase;// Offset=0xa8 Size=0x8
    unsigned long long MsrGsSwap;// Offset=0xb0 Size=0x8
    unsigned long long MsrStar;// Offset=0xb8 Size=0x8
    unsigned long long MsrLStar;// Offset=0xc0 Size=0x8
    unsigned long long MsrCStar;// Offset=0xc8 Size=0x8
    unsigned long long MsrSyscallMask;// Offset=0xd0 Size=0x8
    unsigned long long Xcr0;// Offset=0xd8 Size=0x8
};

struct _M128A// Size=0x10 (Id=473)
{
    unsigned long long Low;// Offset=0x0 Size=0x8
    long long High;// Offset=0x8 Size=0x8
};

struct _XSAVE_FORMAT// Size=0x200 (Id=554)
{
    unsigned short ControlWord;// Offset=0x0 Size=0x2
    unsigned short StatusWord;// Offset=0x2 Size=0x2
    unsigned char TagWord;// Offset=0x4 Size=0x1
    unsigned char Reserved1;// Offset=0x5 Size=0x1
    unsigned short ErrorOpcode;// Offset=0x6 Size=0x2
    unsigned long ErrorOffset;// Offset=0x8 Size=0x4
    unsigned short ErrorSelector;// Offset=0xc Size=0x2
    unsigned short Reserved2;// Offset=0xe Size=0x2
    unsigned long DataOffset;// Offset=0x10 Size=0x4
    unsigned short DataSelector;// Offset=0x14 Size=0x2
    unsigned short Reserved3;// Offset=0x16 Size=0x2
    unsigned long MxCsr;// Offset=0x18 Size=0x4
    unsigned long MxCsr_Mask;// Offset=0x1c Size=0x4
    struct _M128A FloatRegisters[8];// Offset=0x20 Size=0x80
    struct _M128A XmmRegisters[16];// Offset=0xa0 Size=0x100
    unsigned char Reserved4[96];// Offset=0x1a0 Size=0x60
};

struct _CONTEXT// Size=0x4d0 (Id=455)
{
    unsigned long long P1Home;// Offset=0x0 Size=0x8
    unsigned long long P2Home;// Offset=0x8 Size=0x8
    unsigned long long P3Home;// Offset=0x10 Size=0x8
    unsigned long long P4Home;// Offset=0x18 Size=0x8
    unsigned long long P5Home;// Offset=0x20 Size=0x8
    unsigned long long P6Home;// Offset=0x28 Size=0x8
    unsigned long ContextFlags;// Offset=0x30 Size=0x4
    unsigned long MxCsr;// Offset=0x34 Size=0x4
    unsigned short SegCs;// Offset=0x38 Size=0x2
    unsigned short SegDs;// Offset=0x3a Size=0x2
    unsigned short SegEs;// Offset=0x3c Size=0x2
    unsigned short SegFs;// Offset=0x3e Size=0x2
    unsigned short SegGs;// Offset=0x40 Size=0x2
    unsigned short SegSs;// Offset=0x42 Size=0x2
    unsigned long EFlags;// Offset=0x44 Size=0x4
    unsigned long long Dr0;// Offset=0x48 Size=0x8
    unsigned long long Dr1;// Offset=0x50 Size=0x8
    unsigned long long Dr2;// Offset=0x58 Size=0x8
    unsigned long long Dr3;// Offset=0x60 Size=0x8
    unsigned long long Dr6;// Offset=0x68 Size=0x8
    unsigned long long Dr7;// Offset=0x70 Size=0x8
    unsigned long long Rax;// Offset=0x78 Size=0x8
    unsigned long long Rcx;// Offset=0x80 Size=0x8
    unsigned long long Rdx;// Offset=0x88 Size=0x8
    unsigned long long Rbx;// Offset=0x90 Size=0x8
    unsigned long long Rsp;// Offset=0x98 Size=0x8
    unsigned long long Rbp;// Offset=0xa0 Size=0x8
    unsigned long long Rsi;// Offset=0xa8 Size=0x8
    unsigned long long Rdi;// Offset=0xb0 Size=0x8
    unsigned long long R8;// Offset=0xb8 Size=0x8
    unsigned long long R9;// Offset=0xc0 Size=0x8
    unsigned long long R10;// Offset=0xc8 Size=0x8
    unsigned long long R11;// Offset=0xd0 Size=0x8
    unsigned long long R12;// Offset=0xd8 Size=0x8
    unsigned long long R13;// Offset=0xe0 Size=0x8
    unsigned long long R14;// Offset=0xe8 Size=0x8
    unsigned long long R15;// Offset=0xf0 Size=0x8
    unsigned long long Rip;// Offset=0xf8 Size=0x8
    union // Size=0x200 (Id=0)
    {
        struct _XSAVE_FORMAT FltSave;// Offset=0x100 Size=0x200
        struct _M128A Header[2];// Offset=0x100 Size=0x20
        struct _M128A Legacy[8];// Offset=0x120 Size=0x80
        struct _M128A Xmm0;// Offset=0x1a0 Size=0x10
        struct _M128A Xmm1;// Offset=0x1b0 Size=0x10
        struct _M128A Xmm2;// Offset=0x1c0 Size=0x10
        struct _M128A Xmm3;// Offset=0x1d0 Size=0x10
        struct _M128A Xmm4;// Offset=0x1e0 Size=0x10
        struct _M128A Xmm5;// Offset=0x1f0 Size=0x10
    };
    struct _M128A Xmm6;// Offset=0x200 Size=0x10
    struct _M128A Xmm7;// Offset=0x210 Size=0x10
    struct _M128A Xmm8;// Offset=0x220 Size=0x10
    struct _M128A Xmm9;// Offset=0x230 Size=0x10
    struct _M128A Xmm10;// Offset=0x240 Size=0x10
    struct _M128A Xmm11;// Offset=0x250 Size=0x10
    struct _M128A Xmm12;// Offset=0x260 Size=0x10
    struct _M128A Xmm13;// Offset=0x270 Size=0x10
    struct _M128A Xmm14;// Offset=0x280 Size=0x10
    struct _M128A Xmm15;// Offset=0x290 Size=0x10
    struct _M128A VectorRegister[26];// Offset=0x300 Size=0x1a0
    unsigned long long VectorControl;// Offset=0x4a0 Size=0x8
    unsigned long long DebugControl;// Offset=0x4a8 Size=0x8
    unsigned long long LastBranchToRip;// Offset=0x4b0 Size=0x8
    unsigned long long LastBranchFromRip;// Offset=0x4b8 Size=0x8
    unsigned long long LastExceptionToRip;// Offset=0x4c0 Size=0x8
    unsigned long long LastExceptionFromRip;// Offset=0x4c8 Size=0x8
};

struct _KPROCESSOR_STATE// Size=0x5b0 (Id=440)
{
    struct _KSPECIAL_REGISTERS SpecialRegisters;// Offset=0x0 Size=0xe0
    struct _CONTEXT ContextFrame;// Offset=0xe0 Size=0x4d0
};

struct _KPRCB// Size=0x670 (Id=42)
{
    unsigned long MxCsr;// Offset=0x0 Size=0x4
    unsigned char LegacyNumber;// Offset=0x4 Size=0x1
    unsigned char ReservedMustBeZero;// Offset=0x5 Size=0x1
    unsigned char InterruptRequest;// Offset=0x6 Size=0x1
    unsigned char IdleHalt;// Offset=0x7 Size=0x1
    struct _KTHREAD * CurrentThread;// Offset=0x8 Size=0x8
    struct _KTHREAD * NextThread;// Offset=0x10 Size=0x8
    struct _KTHREAD * IdleThread;// Offset=0x18 Size=0x8
    unsigned char NestingLevel;// Offset=0x20 Size=0x1
    unsigned char ClockOwner;// Offset=0x21 Size=0x1
    union // Size=0x1 (Id=0)
    {
        unsigned char PendingTickFlags;// Offset=0x22 Size=0x1
        struct // Size=0x1 (Id=0)
        {
            unsigned char PendingTick:1;// Offset=0x22 Size=0x1 BitOffset=0x0 BitSize=0x1
            unsigned char PendingBackupTick:1;// Offset=0x22 Size=0x1 BitOffset=0x1 BitSize=0x1
        };
    };
    unsigned char IdleState;// Offset=0x23 Size=0x1
    unsigned long Number;// Offset=0x24 Size=0x4
    unsigned long long RspBase;// Offset=0x28 Size=0x8
    unsigned long long PrcbLock;// Offset=0x30 Size=0x8
    char * PriorityState;// Offset=0x38 Size=0x8
    struct _KPROCESSOR_STATE ProcessorState;// Offset=0x40 Size=0x5b0
    char CpuType;// Offset=0x5f0 Size=0x1
    char CpuID;// Offset=0x5f1 Size=0x1
    union // Size=0x2 (Id=0)
    {
        unsigned short CpuStep;// Offset=0x5f2 Size=0x2
        unsigned char CpuStepping;// Offset=0x5f2 Size=0x1
    };
    unsigned char CpuModel;// Offset=0x5f3 Size=0x1
    unsigned long MHz;// Offset=0x5f4 Size=0x4
    unsigned long long HalReserved[8];// Offset=0x5f8 Size=0x40
    unsigned short MinorVersion;// Offset=0x638 Size=0x2
    unsigned short MajorVersion;// Offset=0x63a Size=0x2
    unsigned char BuildType;// Offset=0x63c Size=0x1
    unsigned char CpuVendor;// Offset=0x63d Size=0x1
    unsigned char CoresPerPhysicalProcessor;// Offset=0x63e Size=0x1
    unsigned char LogicalProcessorsPerCore;// Offset=0x63f Size=0x1
    struct _KNODE * ParentNode;// Offset=0x640 Size=0x8
    unsigned long long GroupSetMember;// Offset=0x648 Size=0x8
    unsigned char Group;// Offset=0x650 Size=0x1
    unsigned char GroupIndex;// Offset=0x651 Size=0x1
    unsigned char PrcbPad05[2];// Offset=0x652 Size=0x2
    unsigned long InitialApicId;// Offset=0x654 Size=0x4
    unsigned long ScbOffset;// Offset=0x658 Size=0x4
    unsigned long ApicMask;// Offset=0x65c Size=0x4
    void * AcpiReserved;// Offset=0x660 Size=0x8
    unsigned long CFlushSize;// Offset=0x668 Size=0x4
    unsigned long PrcbPad10;// Offset=0x66c Size=0x4
};

struct _KPCR// Size=0x7f0 (Id=40)
{
    union // Size=0x38 (Id=0)
    {
        struct _NT_TIB NtTib;// Offset=0x0 Size=0x38
        union _KGDTENTRY64 * GdtBase;// Offset=0x0 Size=0x8
        struct _KTSS64 * TssBase;// Offset=0x8 Size=0x8
        unsigned long long UserRsp;// Offset=0x10 Size=0x8
        struct _KPCR * Self;// Offset=0x18 Size=0x8
        struct _KPRCB * CurrentPrcb;// Offset=0x20 Size=0x8
        struct _KSPIN_LOCK_QUEUE * LockArray;// Offset=0x28 Size=0x8
        void * Used_Self;// Offset=0x30 Size=0x8
    };
    union _KIDTENTRY64 * IdtBase;// Offset=0x38 Size=0x8
    unsigned long long Unused[2];// Offset=0x40 Size=0x10
    unsigned char Irql;// Offset=0x50 Size=0x1
    unsigned char SecondLevelCacheAssociativity;// Offset=0x51 Size=0x1
    unsigned char ObsoleteNumber;// Offset=0x52 Size=0x1
    unsigned char Fill0;// Offset=0x53 Size=0x1
    unsigned long Unused0[3];// Offset=0x54 Size=0xc
    unsigned short MajorVersion;// Offset=0x60 Size=0x2
    unsigned short MinorVersion;// Offset=0x62 Size=0x2
    unsigned long StallScaleFactor;// Offset=0x64 Size=0x4
    void * Unused1[3];// Offset=0x68 Size=0x18
    unsigned long KernelReserved[15];// Offset=0x80 Size=0x3c
    unsigned long SecondLevelCacheSize;// Offset=0xbc Size=0x4
    unsigned long HalReserved[16];// Offset=0xc0 Size=0x40
    unsigned long Unused2;// Offset=0x100 Size=0x4
    void * KdVersionBlock;// Offset=0x108 Size=0x8
    void * Unused3;// Offset=0x110 Size=0x8
    unsigned long PcrAlign1[24];// Offset=0x118 Size=0x60
    struct _KPRCB Prcb;// Offset=0x180 Size=0x670
};
