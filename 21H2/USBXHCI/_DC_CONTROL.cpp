union _DC_CONTROL// Size=0x4 (Id=919)
{
    unsigned long AsUlong32;// Offset=0x0 Size=0x4
    struct // Size=0x4 (Id=0)
    {
        unsigned long Running:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long LinkStatusEventEnable:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
        unsigned long HaltOutTR:1;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x1
        unsigned long HaltInTR:1;// Offset=0x0 Size=0x4 BitOffset=0x3 BitSize=0x1
        unsigned long RunChange:1;// Offset=0x0 Size=0x4 BitOffset=0x4 BitSize=0x1
        unsigned long Reserved:11;// Offset=0x0 Size=0x4 BitOffset=0x5 BitSize=0xb
        unsigned long MaxBurstSize:8;// Offset=0x0 Size=0x4 BitOffset=0x10 BitSize=0x8
        unsigned long DeviceAddress:7;// Offset=0x0 Size=0x4 BitOffset=0x18 BitSize=0x7
        unsigned long Enable:1;// Offset=0x0 Size=0x4 BitOffset=0x1f BitSize=0x1
    };
};
