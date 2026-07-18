union _KUSER_SHARED_DATA::<unnamed-type-UserCetAvailableEnvironments>// Size=0x4 (Id=2810)
{
    unsigned long AllFlags;// Offset=0x0 Size=0x4
    struct // Size=0x4 (Id=0)
    {
        unsigned long Win32Process:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long Sgx2Enclave:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
        unsigned long VbsBasicEnclave:1;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x1
        unsigned long SpareBits:29;// Offset=0x0 Size=0x4 BitOffset=0x3 BitSize=0x1d
    };
};
