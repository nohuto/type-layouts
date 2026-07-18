struct _RTL_BITMAP_EX// Size=0x10 (Id=1254)
{
    unsigned long long SizeOfBitMap;// Offset=0x0 Size=0x8
    unsigned long long * Buffer;// Offset=0x8 Size=0x8
};

enum _MI_FIXUP_FLAGS
{
    MiFixupBaseRelocation=1,
    MiFixupConditional=2,
    MiFixupPrivate=4,
    MiFixupRevert=8,
    MiFixupDeoptimize=16,
    MiFixupNoICacheFlush=32,
    MiFixupBatchICacheFlush=64
};

struct _MI_VAD_PRIVATE_FIXUPS// Size=0x20 (Id=1601)
{
    struct _RTL_BITMAP_EX BitMap;// Offset=0x0 Size=0x10
    enum _MI_FIXUP_FLAGS FixupFlags;// Offset=0x10 Size=0x4
    unsigned long long PrivateDiff;// Offset=0x18 Size=0x8
};
