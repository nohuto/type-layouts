struct _OBJECTOWNER_S// Size=0x4 (Id=576)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long Lock:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long Pid_Shifted:31;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1f
    };
};

union _OBJECTOWNER// Size=0x4 (Id=493)
{
    struct _OBJECTOWNER_S Share;// Offset=0x0 Size=0x4
    unsigned long ulObj;// Offset=0x0 Size=0x4
};
