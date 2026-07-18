struct _SLEEP_STUDY_INTERFACE// Size=0x20 (Id=1032)
{
    struct SS_LIBRARY__ * SleepStudyLibContext;// Offset=0x0 Size=0x8
    struct _MX_WNF_SUBSCRIPTION_CONTEXT * WnfContext;// Offset=0x8 Size=0x8
    struct SS_COMPONENT__ * ComponentPowerRef;// Offset=0x10 Size=0x8
    long LibInitializing;// Offset=0x18 Size=0x4
    void _SLEEP_STUDY_INTERFACE(struct _SLEEP_STUDY_INTERFACE * );
    void _SLEEP_STUDY_INTERFACE(struct _SLEEP_STUDY_INTERFACE & );
    struct _SLEEP_STUDY_INTERFACE & operator=(struct _SLEEP_STUDY_INTERFACE * );
    struct _SLEEP_STUDY_INTERFACE & operator=(struct _SLEEP_STUDY_INTERFACE & );
};
