union _KPRCB::_anonymous_536::_anonymous_536::_anonymous_536// Size=0x1 (Id=536)
{
    unsigned char BpbState;// Offset=0x0 Size=0x1
    struct // Size=0x1 (Id=0)
    {
        unsigned char BpbCpuIdle:1;// Offset=0x0 Size=0x1 BitOffset=0x0 BitSize=0x1
        unsigned char BpbFlushRsbOnTrap:1;// Offset=0x0 Size=0x1 BitOffset=0x1 BitSize=0x1
        unsigned char BpbIbpbOnReturn:1;// Offset=0x0 Size=0x1 BitOffset=0x2 BitSize=0x1
        unsigned char BpbIbpbOnTrap:1;// Offset=0x0 Size=0x1 BitOffset=0x3 BitSize=0x1
        unsigned char BpbIbpbOnRetpolineExit:1;// Offset=0x0 Size=0x1 BitOffset=0x4 BitSize=0x1
        unsigned char BpbStateReserved:2;// Offset=0x0 Size=0x1 BitOffset=0x5 BitSize=0x2
        unsigned char BpbDivideOnReturn:1;// Offset=0x0 Size=0x1 BitOffset=0x7 BitSize=0x1
    };
};
