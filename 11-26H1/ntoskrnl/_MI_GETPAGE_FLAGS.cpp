struct _MI_GETPAGE_FLAGS// Size=0x4 (Id=675)
{
    union // Size=0x4 (Id=0)
    {
        unsigned long EntireField;// Offset=0x0 Size=0x4
        struct // Size=0x4 (Id=0)
        {
            unsigned long AtDpc:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
            unsigned long PageLockHeld:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
            unsigned long RecursingToDemote:1;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x1
            unsigned long PageAttributeOptional:1;// Offset=0x0 Size=0x4 BitOffset=0x3 BitSize=0x1
            unsigned long PreferZero:1;// Offset=0x0 Size=0x4 BitOffset=0x4 BitSize=0x1
            unsigned long RequireZero:1;// Offset=0x0 Size=0x4 BitOffset=0x5 BitSize=0x1
            unsigned long ColorAlignment:1;// Offset=0x0 Size=0x4 BitOffset=0x6 BitSize=0x1
            unsigned long SystemUse:1;// Offset=0x0 Size=0x4 BitOffset=0x7 BitSize=0x1
            unsigned long PreserveAvailable:1;// Offset=0x0 Size=0x4 BitOffset=0x8 BitSize=0x1
            unsigned long IgnoreAvailable:1;// Offset=0x0 Size=0x4 BitOffset=0x9 BitSize=0x1
            unsigned long ContendForListLocks:1;// Offset=0x0 Size=0x4 BitOffset=0xa BitSize=0x1
            unsigned long DontDemoteLargePages:1;// Offset=0x0 Size=0x4 BitOffset=0xb BitSize=0x1
            unsigned long NodeMandatory:1;// Offset=0x0 Size=0x4 BitOffset=0xc BitSize=0x1
            unsigned long ChannelMandatory:1;// Offset=0x0 Size=0x4 BitOffset=0xd BitSize=0x1
            unsigned long DontDemote:1;// Offset=0x0 Size=0x4 BitOffset=0xe BitSize=0x1
            unsigned long DontDemote64KPages:1;// Offset=0x0 Size=0x4 BitOffset=0xf BitSize=0x1
            unsigned long NoStandby:1;// Offset=0x0 Size=0x4 BitOffset=0x10 BitSize=0x1
            unsigned long NoStandbySwap:1;// Offset=0x0 Size=0x4 BitOffset=0x11 BitSize=0x1
            unsigned long OnlyStandby:1;// Offset=0x0 Size=0x4 BitOffset=0x12 BitSize=0x1
            unsigned long FreeZeroQueryIncludeLarge:1;// Offset=0x0 Size=0x4 BitOffset=0x13 BitSize=0x1
            unsigned long BadPageAllowed:1;// Offset=0x0 Size=0x4 BitOffset=0x14 BitSize=0x1
            unsigned long DontUpdateAvailable:1;// Offset=0x0 Size=0x4 BitOffset=0x15 BitSize=0x1
            unsigned long DontUpdateMirrorBitmaps:1;// Offset=0x0 Size=0x4 BitOffset=0x16 BitSize=0x1
            unsigned long MustBeZero:9;// Offset=0x0 Size=0x4 BitOffset=0x17 BitSize=0x9
        };
    };
};
