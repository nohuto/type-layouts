enum _HEAP_FAILURE_TYPE
{
    heap_failure_internal=0,
    heap_failure_unknown=1,
    heap_failure_generic=2,
    heap_failure_entry_corruption=3,
    heap_failure_multiple_entries_corruption=4,
    heap_failure_virtual_block_corruption=5,
    heap_failure_buffer_overrun=6,
    heap_failure_buffer_underrun=7,
    heap_failure_block_not_busy=8,
    heap_failure_invalid_argument=9,
    heap_failure_invalid_allocation_type=10,
    heap_failure_usage_after_free=11,
    heap_failure_cross_heap_operation=12,
    heap_failure_freelists_corruption=13,
    heap_failure_listentry_corruption=14,
    heap_failure_lfh_bitmap_mismatch=15,
    heap_failure_segment_lfh_bitmap_corruption=16,
    heap_failure_segment_lfh_double_free=17,
    heap_failure_vs_subsegment_corruption=18,
    heap_failure_null_heap=19,
    heap_failure_allocation_limit=20,
    heap_failure_commit_limit=21,
    heap_failure_invalid_va_mgr_query=22,
    heap_failure_segment_lfh_delay_free_corruption=23
};

struct _FAKE_HEAP_ENTRY// Size=0x10 (Id=840)
{
    unsigned long long Size;// Offset=0x0 Size=0x8
    unsigned long long PreviousSize;// Offset=0x8 Size=0x8
};

struct _EXCEPTION_RECORD// Size=0x98 (Id=847)
{
    long ExceptionCode;// Offset=0x0 Size=0x4
    unsigned long ExceptionFlags;// Offset=0x4 Size=0x4
    struct _EXCEPTION_RECORD * ExceptionRecord;// Offset=0x8 Size=0x8
    void * ExceptionAddress;// Offset=0x10 Size=0x8
    unsigned long NumberParameters;// Offset=0x18 Size=0x4
    unsigned long long ExceptionInformation[15];// Offset=0x20 Size=0x78
};

struct _M128A// Size=0x10 (Id=689)
{
    unsigned long long Low;// Offset=0x0 Size=0x8
    long long High;// Offset=0x8 Size=0x8
};

struct _XSAVE_FORMAT// Size=0x200 (Id=761)
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

struct _CONTEXT// Size=0x4d0 (Id=675)
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

struct _HEAP_FAILURE_INFORMATION// Size=0x6d0 (Id=652)
{
    unsigned long Version;// Offset=0x0 Size=0x4
    unsigned long StructureSize;// Offset=0x4 Size=0x4
    enum _HEAP_FAILURE_TYPE FailureType;// Offset=0x8 Size=0x4
    void * HeapAddress;// Offset=0x10 Size=0x8
    void * Address;// Offset=0x18 Size=0x8
    void * Param1;// Offset=0x20 Size=0x8
    void * Param2;// Offset=0x28 Size=0x8
    void * Param3;// Offset=0x30 Size=0x8
    void * PreviousBlock;// Offset=0x38 Size=0x8
    void * NextBlock;// Offset=0x40 Size=0x8
    struct _FAKE_HEAP_ENTRY ExpectedDecodedEntry;// Offset=0x48 Size=0x10
    void * StackTrace[32];// Offset=0x58 Size=0x100
    unsigned char HeapMajorVersion;// Offset=0x158 Size=0x1
    unsigned char HeapMinorVersion;// Offset=0x159 Size=0x1
    struct _EXCEPTION_RECORD ExceptionRecord;// Offset=0x160 Size=0x98
    struct _CONTEXT ContextRecord;// Offset=0x200 Size=0x4d0
};
