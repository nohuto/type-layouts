union _MI_LDR_DATA_TABLE_ENTRY_FLAGS// Size=0x4 (Id=711)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long FullSize:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long LoadFinished:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
        unsigned long AliasedImage:1;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x1
        unsigned long EntireImageLocked:1;// Offset=0x0 Size=0x4 BitOffset=0x3 BitSize=0x1
        unsigned long PageFileBacked:1;// Offset=0x0 Size=0x4 BitOffset=0x4 BitSize=0x1
        unsigned long PageFileBackedImports:1;// Offset=0x0 Size=0x4 BitOffset=0x5 BitSize=0x1
        unsigned long PageFileBackedInProgress:1;// Offset=0x0 Size=0x4 BitOffset=0x6 BitSize=0x1
        unsigned long IsPatch:1;// Offset=0x0 Size=0x4 BitOffset=0x7 BitSize=0x1
        unsigned long BeingCreated:1;// Offset=0x0 Size=0x4 BitOffset=0x8 BitSize=0x1
        unsigned long BeingDeleted:1;// Offset=0x0 Size=0x4 BitOffset=0x9 BitSize=0x1
        unsigned long InsertedInPsLoadedList:1;// Offset=0x0 Size=0x4 BitOffset=0xa BitSize=0x1
        unsigned long SubsectionCharged:1;// Offset=0x0 Size=0x4 BitOffset=0xb BitSize=0x1
        unsigned long NoHotPatch:1;// Offset=0x0 Size=0x4 BitOffset=0xc BitSize=0x1
        unsigned long ChargedSystemCommit:1;// Offset=0x0 Size=0x4 BitOffset=0xd BitSize=0x1
        unsigned long NotifiedVerifier:1;// Offset=0x0 Size=0x4 BitOffset=0xe BitSize=0x1
        unsigned long NotifiedShimEngine:1;// Offset=0x0 Size=0x4 BitOffset=0xf BitSize=0x1
        unsigned long NotifiedKasan:1;// Offset=0x0 Size=0x4 BitOffset=0x10 BitSize=0x1
        unsigned long ScpAndRetpolinePerformed:1;// Offset=0x0 Size=0x4 BitOffset=0x11 BitSize=0x1
        unsigned long ReferencedControlArea:1;// Offset=0x0 Size=0x4 BitOffset=0x12 BitSize=0x1
        unsigned long ResolvingBootImports:1;// Offset=0x0 Size=0x4 BitOffset=0x13 BitSize=0x1
        unsigned long ImageProtectionChanged:1;// Offset=0x0 Size=0x4 BitOffset=0x14 BitSize=0x1
        unsigned long Spare:10;// Offset=0x0 Size=0x4 BitOffset=0x15 BitSize=0xa
    };
    unsigned long EntireField;// Offset=0x0 Size=0x4
};
