struct _MI_COMMIT_CHARGE_FAILURES// Size=0x20 (Id=2029)
{
    long ExpandFailed;// Offset=0x0 Size=0x4
    long AtMaximum;// Offset=0x4 Size=0x4
    long ExpandNoWait;// Offset=0x8 Size=0x4
    long Wrap;// Offset=0xc Size=0x4
    long ExpandTimedOut;// Offset=0x10 Size=0x4
    long ExpandFailures[3];// Offset=0x14 Size=0xc
};
