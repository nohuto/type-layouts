union _OPCODE_STATUS// Size=0x4 (Id=708)
{
    unsigned long AsUlong32;// Offset=0x0 Size=0x4
    struct // Size=0x4 (Id=0)
    {
        unsigned long Opcode:16;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x10
        unsigned long Reserved:8;// Offset=0x0 Size=0x4 BitOffset=0x10 BitSize=0x8
        unsigned long Status:6;// Offset=0x0 Size=0x4 BitOffset=0x18 BitSize=0x6
        unsigned long Error:1;// Offset=0x0 Size=0x4 BitOffset=0x1e BitSize=0x1
        unsigned long OperationValid:1;// Offset=0x0 Size=0x4 BitOffset=0x1f BitSize=0x1
    };
};
