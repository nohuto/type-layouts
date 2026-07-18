union _PCIX_BRIDGE_CAPABILITY::<unnamed-type-EccControlStatus>// Size=0x4 (Id=4066)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long SelectSecondaryRegisters:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long ErrorPresentInOtherBank:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
        unsigned long AdditionalCorrectableError:1;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x1
        unsigned long AdditionalUncorrectableError:1;// Offset=0x0 Size=0x4 BitOffset=0x3 BitSize=0x1
        unsigned long ErrorPhase:3;// Offset=0x0 Size=0x4 BitOffset=0x4 BitSize=0x3
        unsigned long ErrorCorrected:1;// Offset=0x0 Size=0x4 BitOffset=0x7 BitSize=0x1
        unsigned long Syndrome:8;// Offset=0x0 Size=0x4 BitOffset=0x8 BitSize=0x8
        unsigned long ErrorFirstCommand:4;// Offset=0x0 Size=0x4 BitOffset=0x10 BitSize=0x4
        unsigned long ErrorSecondCommand:4;// Offset=0x0 Size=0x4 BitOffset=0x14 BitSize=0x4
        unsigned long ErrorUpperAttributes:4;// Offset=0x0 Size=0x4 BitOffset=0x18 BitSize=0x4
        unsigned long ControlUpdateEnable:1;// Offset=0x0 Size=0x4 BitOffset=0x1c BitSize=0x1
        unsigned long Rsvd:1;// Offset=0x0 Size=0x4 BitOffset=0x1d BitSize=0x1
        unsigned long DisableSingleBitCorrection:1;// Offset=0x0 Size=0x4 BitOffset=0x1e BitSize=0x1
        unsigned long EccMode:1;// Offset=0x0 Size=0x4 BitOffset=0x1f BitSize=0x1
    };
    unsigned long AsULONG;// Offset=0x0 Size=0x4
};
