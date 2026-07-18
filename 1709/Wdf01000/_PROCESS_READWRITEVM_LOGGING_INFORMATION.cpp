union _PROCESS_READWRITEVM_LOGGING_INFORMATION// Size=0x1 (Id=1621)
{
    unsigned char Flags;// Offset=0x0 Size=0x1
    struct // Size=0x1 (Id=0)
    {
        unsigned char EnableReadVmLogging:1;// Offset=0x0 Size=0x1 BitOffset=0x0 BitSize=0x1
        unsigned char EnableWriteVmLogging:1;// Offset=0x0 Size=0x1 BitOffset=0x1 BitSize=0x1
        unsigned char Unused:6;// Offset=0x0 Size=0x1 BitOffset=0x2 BitSize=0x6
    };
};
