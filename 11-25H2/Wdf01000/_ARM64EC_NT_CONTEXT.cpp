union _ARM64_NT_NEON128// Size=0x10 (Id=3497)
{
    unsigned long long Low;// Offset=0x0 Size=0x8
    long long High;// Offset=0x8 Size=0x8
    float D[2];// Offset=0x0 Size=0x10
    float S[4];// Offset=0x0 Size=0x10
    unsigned short H[8];// Offset=0x0 Size=0x10
    unsigned char B[16];// Offset=0x0 Size=0x10
};

struct _ARM64EC_NT_CONTEXT// Size=0x4d0 (Id=3836)
{
    unsigned long long AMD64_P1Home;// Offset=0x0 Size=0x8
    unsigned long long AMD64_P2Home;// Offset=0x8 Size=0x8
    unsigned long long AMD64_P3Home;// Offset=0x10 Size=0x8
    unsigned long long AMD64_P4Home;// Offset=0x18 Size=0x8
    unsigned long long AMD64_P5Home;// Offset=0x20 Size=0x8
    unsigned long long AMD64_P6Home;// Offset=0x28 Size=0x8
    unsigned long ContextFlags;// Offset=0x30 Size=0x4
    unsigned long AMD64_MxCsr_copy;// Offset=0x34 Size=0x4
    unsigned short AMD64_SegCs;// Offset=0x38 Size=0x2
    unsigned short AMD64_SegDs;// Offset=0x3a Size=0x2
    unsigned short AMD64_SegEs;// Offset=0x3c Size=0x2
    unsigned short AMD64_SegFs;// Offset=0x3e Size=0x2
    unsigned short AMD64_SegGs;// Offset=0x40 Size=0x2
    unsigned short AMD64_SegSs;// Offset=0x42 Size=0x2
    unsigned long AMD64_EFlags;// Offset=0x44 Size=0x4
    unsigned long long AMD64_Dr0;// Offset=0x48 Size=0x8
    unsigned long long AMD64_Dr1;// Offset=0x50 Size=0x8
    unsigned long long AMD64_Dr2;// Offset=0x58 Size=0x8
    unsigned long long AMD64_Dr3;// Offset=0x60 Size=0x8
    unsigned long long AMD64_Dr6;// Offset=0x68 Size=0x8
    unsigned long long AMD64_Dr7;// Offset=0x70 Size=0x8
    unsigned long long X8;// Offset=0x78 Size=0x8
    unsigned long long X0;// Offset=0x80 Size=0x8
    unsigned long long X1;// Offset=0x88 Size=0x8
    unsigned long long X27;// Offset=0x90 Size=0x8
    unsigned long long Sp;// Offset=0x98 Size=0x8
    unsigned long long Fp;// Offset=0xa0 Size=0x8
    unsigned long long X25;// Offset=0xa8 Size=0x8
    unsigned long long X26;// Offset=0xb0 Size=0x8
    unsigned long long X2;// Offset=0xb8 Size=0x8
    unsigned long long X3;// Offset=0xc0 Size=0x8
    unsigned long long X4;// Offset=0xc8 Size=0x8
    unsigned long long X5;// Offset=0xd0 Size=0x8
    unsigned long long X19;// Offset=0xd8 Size=0x8
    unsigned long long X20;// Offset=0xe0 Size=0x8
    unsigned long long X21;// Offset=0xe8 Size=0x8
    unsigned long long X22;// Offset=0xf0 Size=0x8
    unsigned long long Pc;// Offset=0xf8 Size=0x8
    unsigned short AMD64_ControlWord;// Offset=0x100 Size=0x2
    unsigned short AMD64_StatusWord;// Offset=0x102 Size=0x2
    unsigned char AMD64_TagWord;// Offset=0x104 Size=0x1
    unsigned char AMD64_Reserved1;// Offset=0x105 Size=0x1
    unsigned short AMD64_ErrorOpcode;// Offset=0x106 Size=0x2
    unsigned long AMD64_ErrorOffset;// Offset=0x108 Size=0x4
    unsigned short AMD64_ErrorSelector;// Offset=0x10c Size=0x2
    unsigned short AMD64_Reserved2;// Offset=0x10e Size=0x2
    unsigned long AMD64_DataOffset;// Offset=0x110 Size=0x4
    unsigned short AMD64_DataSelector;// Offset=0x114 Size=0x2
    unsigned short AMD64_Reserved3;// Offset=0x116 Size=0x2
    unsigned long AMD64_MxCsr;// Offset=0x118 Size=0x4
    unsigned long AMD64_MxCsr_Mask;// Offset=0x11c Size=0x4
    unsigned long long Lr;// Offset=0x120 Size=0x8
    unsigned short X16_0;// Offset=0x128 Size=0x2
    unsigned short AMD64_St0_Reserved1;// Offset=0x12a Size=0x2
    unsigned long AMD64_St0_Reserved2;// Offset=0x12c Size=0x4
    unsigned long long X6;// Offset=0x130 Size=0x8
    unsigned short X16_1;// Offset=0x138 Size=0x2
    unsigned short AMD64_St1_Reserved1;// Offset=0x13a Size=0x2
    unsigned long AMD64_St1_Reserved2;// Offset=0x13c Size=0x4
    unsigned long long X7;// Offset=0x140 Size=0x8
    unsigned short X16_2;// Offset=0x148 Size=0x2
    unsigned short AMD64_St2_Reserved1;// Offset=0x14a Size=0x2
    unsigned long AMD64_St2_Reserved2;// Offset=0x14c Size=0x4
    unsigned long long X9;// Offset=0x150 Size=0x8
    unsigned short X16_3;// Offset=0x158 Size=0x2
    unsigned short AMD64_St3_Reserved1;// Offset=0x15a Size=0x2
    unsigned long AMD64_St3_Reserved2;// Offset=0x15c Size=0x4
    unsigned long long X10;// Offset=0x160 Size=0x8
    unsigned short X17_0;// Offset=0x168 Size=0x2
    unsigned short AMD64_St4_Reserved1;// Offset=0x16a Size=0x2
    unsigned long AMD64_St4_Reserved2;// Offset=0x16c Size=0x4
    unsigned long long X11;// Offset=0x170 Size=0x8
    unsigned short X17_1;// Offset=0x178 Size=0x2
    unsigned short AMD64_St5_Reserved1;// Offset=0x17a Size=0x2
    unsigned long AMD64_St5_Reserved2;// Offset=0x17c Size=0x4
    unsigned long long X12;// Offset=0x180 Size=0x8
    unsigned short X17_2;// Offset=0x188 Size=0x2
    unsigned short AMD64_St6_Reserved1;// Offset=0x18a Size=0x2
    unsigned long AMD64_St6_Reserved2;// Offset=0x18c Size=0x4
    unsigned long long X15;// Offset=0x190 Size=0x8
    unsigned short X17_3;// Offset=0x198 Size=0x2
    unsigned short AMD64_St7_Reserved1;// Offset=0x19a Size=0x2
    unsigned long AMD64_St7_Reserved2;// Offset=0x19c Size=0x4
    union _ARM64_NT_NEON128 V[16];// Offset=0x1a0 Size=0x100
    unsigned char AMD64_XSAVE_FORMAT_Reserved4[96];// Offset=0x2a0 Size=0x60
    union _ARM64_NT_NEON128 AMD64_VectorRegister[26];// Offset=0x300 Size=0x1a0
    unsigned long long AMD64_VectorControl;// Offset=0x4a0 Size=0x8
    unsigned long long AMD64_DebugControl;// Offset=0x4a8 Size=0x8
    unsigned long long AMD64_LastBranchToRip;// Offset=0x4b0 Size=0x8
    unsigned long long AMD64_LastBranchFromRip;// Offset=0x4b8 Size=0x8
    unsigned long long AMD64_LastExceptionToRip;// Offset=0x4c0 Size=0x8
    unsigned long long AMD64_LastExceptionFromRip;// Offset=0x4c8 Size=0x8
};
