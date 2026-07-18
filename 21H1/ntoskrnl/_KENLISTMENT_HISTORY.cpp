enum _KENLISTMENT_STATE
{
    KEnlistmentUninitialized=0,
    KEnlistmentActive=256,
    KEnlistmentPreparing=257,
    KEnlistmentPrepared=258,
    KEnlistmentInDoubt=259,
    KEnlistmentCommitted=260,
    KEnlistmentCommittedNotify=261,
    KEnlistmentCommitRequested=262,
    KEnlistmentAborted=263,
    KEnlistmentDelegated=264,
    KEnlistmentDelegatedDisconnected=265,
    KEnlistmentPrePreparing=266,
    KEnlistmentForgotten=267,
    KEnlistmentRecovering=268,
    KEnlistmentAborting=269,
    KEnlistmentReadOnly=270,
    KEnlistmentOutcomeUnavailable=271,
    KEnlistmentOffline=272,
    KEnlistmentPrePrepared=273,
    KEnlistmentInitialized=274
};

struct _KENLISTMENT_HISTORY// Size=0x8 (Id=1848)
{
    unsigned long Notification;// Offset=0x0 Size=0x4
    enum _KENLISTMENT_STATE NewState;// Offset=0x4 Size=0x4
};
