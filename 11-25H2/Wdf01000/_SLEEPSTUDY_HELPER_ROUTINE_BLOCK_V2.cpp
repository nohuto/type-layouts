struct _SLEEPSTUDY_HELPER_ROUTINE_BLOCK_V2// Size=0x110 (Id=1581)
{
    unsigned long Version;// Offset=0x0 Size=0x4
    long  ( * BlockerActiveDereference)(struct _SLEEPSTUDY_BLOCKER * );// Offset=0x8 Size=0x8
    long  ( * BlockerActiveReference)(struct _SLEEPSTUDY_BLOCKER * );// Offset=0x10 Size=0x8
    long  ( * BuildBlocker)(struct _SLEEPSTUDY_BLOCKER_BUILDER * ,struct _SLEEPSTUDY_BLOCKER ** );// Offset=0x18 Size=0x8
    long  ( * CreateBlockerData)(struct _SLEEPSTUDY_LIBRARY * ,union _SLEEPSTUDY_BLOCKER_GUID * ,unsigned long ,struct _SLEEPSTUDY_DATA_ENTRY * ,struct _SLEEPSTUDY_BLOCKER_DATA ** );// Offset=0x20 Size=0x8
    long  ( * CreateBlockerFromComponent)(struct _SLEEPSTUDY_LIBRARY * ,union _SLEEPSTUDY_BLOCKER_GUID * ,struct _DEVICE_OBJECT * ,unsigned long ,struct _SLEEPSTUDY_BLOCKER_BUILDER ** );// Offset=0x28 Size=0x8
    long  ( * CreateBlockerFromDevice)(struct _SLEEPSTUDY_LIBRARY * ,union _SLEEPSTUDY_BLOCKER_GUID * ,struct _DEVICE_OBJECT * ,struct _SLEEPSTUDY_BLOCKER_BUILDER ** );// Offset=0x30 Size=0x8
    long  ( * CreateBlockerFromGuid)(struct _SLEEPSTUDY_LIBRARY * ,union _SLEEPSTUDY_BLOCKER_GUID * ,union _SLEEPSTUDY_BLOCKER_GUID * ,struct _UNICODE_STRING * ,enum _SLEEPSTUDY_BLOCKER_TYPE ,struct _SLEEPSTUDY_BLOCKER_BUILDER ** );// Offset=0x38 Size=0x8
    long  ( * CreateLibrary)(unsigned long ,struct _SLEEPSTUDY_LIBRARY ** );// Offset=0x40 Size=0x8
    long  ( * DestroyBlocker)(struct _SLEEPSTUDY_BLOCKER * );// Offset=0x48 Size=0x8
    long  ( * DestroyBlockerBuilder)(struct _SLEEPSTUDY_BLOCKER_BUILDER * );// Offset=0x50 Size=0x8
    long  ( * DestroyBlockerData)(struct _SLEEPSTUDY_BLOCKER_DATA * );// Offset=0x58 Size=0x8
    long  ( * DestroyLibrary)(struct _SLEEPSTUDY_LIBRARY * );// Offset=0x60 Size=0x8
    long  ( * GetBlockerGuid)(struct _SLEEPSTUDY_BLOCKER * ,union _SLEEPSTUDY_BLOCKER_GUID * );// Offset=0x68 Size=0x8
    long  ( * QueryBlockerStatistics)(struct _SLEEPSTUDY_BLOCKER * ,unsigned char * ,unsigned long long * );// Offset=0x70 Size=0x8
    long  ( * SetBlockerFriendlyName)(struct _SLEEPSTUDY_BLOCKER_BUILDER * ,struct _UNICODE_STRING * );// Offset=0x78 Size=0x8
    long  ( * SetBlockerParentHandle)(struct _SLEEPSTUDY_BLOCKER_BUILDER * ,struct _SLEEPSTUDY_BLOCKER * );// Offset=0x80 Size=0x8
    long  ( * SetBlockerVisible)(struct _SLEEPSTUDY_BLOCKER_BUILDER * ,unsigned char );// Offset=0x88 Size=0x8
    long  ( * Initialize)(struct SS_LIBRARY__ ** ,void * );// Offset=0x90 Size=0x8
    void  ( * Uninitialize)(struct SS_LIBRARY__ * );// Offset=0x98 Size=0x8
    long  ( * GenerateGuid)(enum _SleepstudyHelper_Namespace ,unsigned long long ,struct _GUID * );// Offset=0xa0 Size=0x8
    long  ( * RegisterPdoWithParentPdo)(struct SS_LIBRARY__ * ,struct _DEVICE_OBJECT * ,struct _DEVICE_OBJECT * ,struct SS_COMPONENT__ ** );// Offset=0xa8 Size=0x8
    long  ( * RegisterPdoWithParentHandle)(struct SS_LIBRARY__ * ,void * ,struct _DEVICE_OBJECT * ,struct SS_COMPONENT__ ** );// Offset=0xb0 Size=0x8
    long  ( * RegisterPdoWithParentGuid)(struct SS_LIBRARY__ * ,struct _GUID ,struct _DEVICE_OBJECT * ,struct SS_COMPONENT__ ** );// Offset=0xb8 Size=0x8
    long  ( * RegisterComponentEx)(struct SS_LIBRARY__ * ,struct _GUID ,struct _GUID ,struct _UNICODE_STRING * ,struct SS_COMPONENT__ ** );// Offset=0xc0 Size=0x8
    long  ( * UnregisterComponent)(struct SS_COMPONENT__ * );// Offset=0xc8 Size=0x8
    long  ( * ComponentActive)(struct SS_COMPONENT__ * );// Offset=0xd0 Size=0x8
    long  ( * ComponentInactive)(struct SS_COMPONENT__ * );// Offset=0xd8 Size=0x8
    long  ( * ComponentActiveLocked)(struct SS_COMPONENT__ * );// Offset=0xe0 Size=0x8
    long  ( * ResetComponentsStartTime)(struct SS_COMPONENT__ * );// Offset=0xe8 Size=0x8
    long  ( * AcquireComponentLock)(struct SS_COMPONENT__ * ,unsigned char * );// Offset=0xf0 Size=0x8
    long  ( * ReleaseComponentLock)(struct SS_COMPONENT__ * ,unsigned char );// Offset=0xf8 Size=0x8
    long  ( * GetPdoFriendlyName)(struct _DEVICE_OBJECT * ,struct _UNICODE_STRING * );// Offset=0x100 Size=0x8
    long  ( * CreateLibraryEx)(struct _SLEEPSTUDY_LIBRARY_PARAMETERS_V1 * ,struct _SLEEPSTUDY_LIBRARY ** );// Offset=0x108 Size=0x8
};
