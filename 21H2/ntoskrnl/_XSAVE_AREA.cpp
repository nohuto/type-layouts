struct _M128A// Size=0x10 (Id=236)
{
    unsigned long long Low;// Offset=0x0 Size=0x8
    long long High;// Offset=0x8 Size=0x8
};

struct _XSAVE_FORMAT// Size=0x200 (Id=278)
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

struct _XSAVE_AREA_HEADER// Size=0x40 (Id=183)
{
    unsigned long long Mask;// Offset=0x0 Size=0x8
    unsigned long long CompactionMask;// Offset=0x8 Size=0x8
    unsigned long long Reserved2[6];// Offset=0x10 Size=0x30
};

struct _XSAVE_AREA// Size=0x240 (Id=615)
{
    struct _XSAVE_FORMAT LegacyState;// Offset=0x0 Size=0x200
    struct _XSAVE_AREA_HEADER Header;// Offset=0x200 Size=0x40
};
