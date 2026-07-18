struct _FLOATING_SAVE_AREA// Size=0x70 (Id=415)
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

struct _CONTEXT// Size=0x2cc (Id=408)
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

struct _DESCRIPTOR// Size=0x8 (Id=582)
{
    unsigned short Pad;// Offset=0x0 Size=0x2
    unsigned short Limit;// Offset=0x2 Size=0x2
    unsigned long Base;// Offset=0x4 Size=0x4
};

struct _KSPECIAL_REGISTERS// Size=0x54 (Id=511)
{
    unsigned long Cr0;// Offset=0x0 Size=0x4
    unsigned long Cr2;// Offset=0x4 Size=0x4
    unsigned long Cr3;// Offset=0x8 Size=0x4
    unsigned long Cr4;// Offset=0xc Size=0x4
    unsigned long KernelDr0;// Offset=0x10 Size=0x4
    unsigned long KernelDr1;// Offset=0x14 Size=0x4
    unsigned long KernelDr2;// Offset=0x18 Size=0x4
    unsigned long KernelDr3;// Offset=0x1c Size=0x4
    unsigned long KernelDr6;// Offset=0x20 Size=0x4
    unsigned long KernelDr7;// Offset=0x24 Size=0x4
    struct _DESCRIPTOR Gdtr;// Offset=0x28 Size=0x8
    struct _DESCRIPTOR Idtr;// Offset=0x30 Size=0x8
    unsigned short Tr;// Offset=0x38 Size=0x2
    unsigned short Ldtr;// Offset=0x3a Size=0x2
    unsigned long long Xcr0;// Offset=0x3c Size=0x8
    unsigned long ExceptionList;// Offset=0x44 Size=0x4
    unsigned long Reserved[3];// Offset=0x48 Size=0xc
};

struct _KPROCESSOR_STATE// Size=0x320 (Id=414)
{
    struct _CONTEXT ContextFrame;// Offset=0x0 Size=0x2cc
    struct _KSPECIAL_REGISTERS SpecialRegisters;// Offset=0x2cc Size=0x54
};
