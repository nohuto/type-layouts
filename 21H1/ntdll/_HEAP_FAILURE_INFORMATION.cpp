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
    heap_failure_invalid_va_mgr_query=22
};

struct _FAKE_HEAP_ENTRY// Size=0x8 (Id=671)
{
    unsigned long Size;// Offset=0x0 Size=0x4
    unsigned long PreviousSize;// Offset=0x4 Size=0x4
};

struct _EXCEPTION_RECORD// Size=0x50 (Id=686)
{
    long ExceptionCode;// Offset=0x0 Size=0x4
    unsigned long ExceptionFlags;// Offset=0x4 Size=0x4
    struct _EXCEPTION_RECORD * ExceptionRecord;// Offset=0x8 Size=0x4
    void * ExceptionAddress;// Offset=0xc Size=0x4
    unsigned long NumberParameters;// Offset=0x10 Size=0x4
    unsigned long ExceptionInformation[15];// Offset=0x14 Size=0x3c
};

struct _FLOATING_SAVE_AREA// Size=0x70 (Id=537)
{
    unsigned long ControlWord;// Offset=0x0 Size=0x4
    unsigned long StatusWord;// Offset=0x4 Size=0x4
    unsigned long TagWord;// Offset=0x8 Size=0x4
    unsigned long ErrorOffset;// Offset=0xc Size=0x4
    unsigned long ErrorSelector;// Offset=0x10 Size=0x4
    unsigned long DataOffset;// Offset=0x14 Size=0x4
    unsigned long DataSelector;// Offset=0x18 Size=0x4
    unsigned char RegisterArea[80];// Offset=0x1c Size=0x50
    unsigned long Spare0;// Offset=0x6c Size=0x4
};

struct _CONTEXT// Size=0x2cc (Id=424)
{
    unsigned long ContextFlags;// Offset=0x0 Size=0x4
    unsigned long Dr0;// Offset=0x4 Size=0x4
    unsigned long Dr1;// Offset=0x8 Size=0x4
    unsigned long Dr2;// Offset=0xc Size=0x4
    unsigned long Dr3;// Offset=0x10 Size=0x4
    unsigned long Dr6;// Offset=0x14 Size=0x4
    unsigned long Dr7;// Offset=0x18 Size=0x4
    struct _FLOATING_SAVE_AREA FloatSave;// Offset=0x1c Size=0x70
    unsigned long SegGs;// Offset=0x8c Size=0x4
    unsigned long SegFs;// Offset=0x90 Size=0x4
    unsigned long SegEs;// Offset=0x94 Size=0x4
    unsigned long SegDs;// Offset=0x98 Size=0x4
    unsigned long Edi;// Offset=0x9c Size=0x4
    unsigned long Esi;// Offset=0xa0 Size=0x4
    unsigned long Ebx;// Offset=0xa4 Size=0x4
    unsigned long Edx;// Offset=0xa8 Size=0x4
    unsigned long Ecx;// Offset=0xac Size=0x4
    unsigned long Eax;// Offset=0xb0 Size=0x4
    unsigned long Ebp;// Offset=0xb4 Size=0x4
    unsigned long Eip;// Offset=0xb8 Size=0x4
    unsigned long SegCs;// Offset=0xbc Size=0x4
    unsigned long EFlags;// Offset=0xc0 Size=0x4
    unsigned long Esp;// Offset=0xc4 Size=0x4
    unsigned long SegSs;// Offset=0xc8 Size=0x4
    unsigned char ExtendedRegisters[512];// Offset=0xcc Size=0x200
};

struct _HEAP_FAILURE_INFORMATION// Size=0x3d0 (Id=530)
{
    unsigned long Version;// Offset=0x0 Size=0x4
    unsigned long StructureSize;// Offset=0x4 Size=0x4
    enum _HEAP_FAILURE_TYPE FailureType;// Offset=0x8 Size=0x4
    void * HeapAddress;// Offset=0xc Size=0x4
    void * Address;// Offset=0x10 Size=0x4
    void * Param1;// Offset=0x14 Size=0x4
    void * Param2;// Offset=0x18 Size=0x4
    void * Param3;// Offset=0x1c Size=0x4
    void * PreviousBlock;// Offset=0x20 Size=0x4
    void * NextBlock;// Offset=0x24 Size=0x4
    struct _FAKE_HEAP_ENTRY ExpectedDecodedEntry;// Offset=0x28 Size=0x8
    void * StackTrace[32];// Offset=0x30 Size=0x80
    unsigned char HeapMajorVersion;// Offset=0xb0 Size=0x1
    unsigned char HeapMinorVersion;// Offset=0xb1 Size=0x1
    struct _EXCEPTION_RECORD ExceptionRecord;// Offset=0xb4 Size=0x50
    struct _CONTEXT ContextRecord;// Offset=0x104 Size=0x2cc
};
