struct _CPC_COMMAND_COMPLETION// Size=0x18 (Id=571)
{
    long PendingCompletions;// Offset=0x0 Size=0x4
    void  ( * CompletionCallback)();// Offset=0x8 Size=0x8
    unsigned char FinalizePccTransaction;// Offset=0x10 Size=0x1
};
