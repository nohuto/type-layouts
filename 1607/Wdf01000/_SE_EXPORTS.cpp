struct _LUID// Size=0x8 (Id=44)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
};

struct _SE_EXPORTS// Size=0x228 (Id=4422)
{
    struct _LUID SeCreateTokenPrivilege;// Offset=0x0 Size=0x8
    struct _LUID SeAssignPrimaryTokenPrivilege;// Offset=0x8 Size=0x8
    struct _LUID SeLockMemoryPrivilege;// Offset=0x10 Size=0x8
    struct _LUID SeIncreaseQuotaPrivilege;// Offset=0x18 Size=0x8
    struct _LUID SeUnsolicitedInputPrivilege;// Offset=0x20 Size=0x8
    struct _LUID SeTcbPrivilege;// Offset=0x28 Size=0x8
    struct _LUID SeSecurityPrivilege;// Offset=0x30 Size=0x8
    struct _LUID SeTakeOwnershipPrivilege;// Offset=0x38 Size=0x8
    struct _LUID SeLoadDriverPrivilege;// Offset=0x40 Size=0x8
    struct _LUID SeCreatePagefilePrivilege;// Offset=0x48 Size=0x8
    struct _LUID SeIncreaseBasePriorityPrivilege;// Offset=0x50 Size=0x8
    struct _LUID SeSystemProfilePrivilege;// Offset=0x58 Size=0x8
    struct _LUID SeSystemtimePrivilege;// Offset=0x60 Size=0x8
    struct _LUID SeProfileSingleProcessPrivilege;// Offset=0x68 Size=0x8
    struct _LUID SeCreatePermanentPrivilege;// Offset=0x70 Size=0x8
    struct _LUID SeBackupPrivilege;// Offset=0x78 Size=0x8
    struct _LUID SeRestorePrivilege;// Offset=0x80 Size=0x8
    struct _LUID SeShutdownPrivilege;// Offset=0x88 Size=0x8
    struct _LUID SeDebugPrivilege;// Offset=0x90 Size=0x8
    struct _LUID SeAuditPrivilege;// Offset=0x98 Size=0x8
    struct _LUID SeSystemEnvironmentPrivilege;// Offset=0xa0 Size=0x8
    struct _LUID SeChangeNotifyPrivilege;// Offset=0xa8 Size=0x8
    struct _LUID SeRemoteShutdownPrivilege;// Offset=0xb0 Size=0x8
    void * SeNullSid;// Offset=0xb8 Size=0x8
    void * SeWorldSid;// Offset=0xc0 Size=0x8
    void * SeLocalSid;// Offset=0xc8 Size=0x8
    void * SeCreatorOwnerSid;// Offset=0xd0 Size=0x8
    void * SeCreatorGroupSid;// Offset=0xd8 Size=0x8
    void * SeNtAuthoritySid;// Offset=0xe0 Size=0x8
    void * SeDialupSid;// Offset=0xe8 Size=0x8
    void * SeNetworkSid;// Offset=0xf0 Size=0x8
    void * SeBatchSid;// Offset=0xf8 Size=0x8
    void * SeInteractiveSid;// Offset=0x100 Size=0x8
    void * SeLocalSystemSid;// Offset=0x108 Size=0x8
    void * SeAliasAdminsSid;// Offset=0x110 Size=0x8
    void * SeAliasUsersSid;// Offset=0x118 Size=0x8
    void * SeAliasGuestsSid;// Offset=0x120 Size=0x8
    void * SeAliasPowerUsersSid;// Offset=0x128 Size=0x8
    void * SeAliasAccountOpsSid;// Offset=0x130 Size=0x8
    void * SeAliasSystemOpsSid;// Offset=0x138 Size=0x8
    void * SeAliasPrintOpsSid;// Offset=0x140 Size=0x8
    void * SeAliasBackupOpsSid;// Offset=0x148 Size=0x8
    void * SeAuthenticatedUsersSid;// Offset=0x150 Size=0x8
    void * SeRestrictedSid;// Offset=0x158 Size=0x8
    void * SeAnonymousLogonSid;// Offset=0x160 Size=0x8
    struct _LUID SeUndockPrivilege;// Offset=0x168 Size=0x8
    struct _LUID SeSyncAgentPrivilege;// Offset=0x170 Size=0x8
    struct _LUID SeEnableDelegationPrivilege;// Offset=0x178 Size=0x8
    void * SeLocalServiceSid;// Offset=0x180 Size=0x8
    void * SeNetworkServiceSid;// Offset=0x188 Size=0x8
    struct _LUID SeManageVolumePrivilege;// Offset=0x190 Size=0x8
    struct _LUID SeImpersonatePrivilege;// Offset=0x198 Size=0x8
    struct _LUID SeCreateGlobalPrivilege;// Offset=0x1a0 Size=0x8
    struct _LUID SeTrustedCredManAccessPrivilege;// Offset=0x1a8 Size=0x8
    struct _LUID SeRelabelPrivilege;// Offset=0x1b0 Size=0x8
    struct _LUID SeIncreaseWorkingSetPrivilege;// Offset=0x1b8 Size=0x8
    struct _LUID SeTimeZonePrivilege;// Offset=0x1c0 Size=0x8
    struct _LUID SeCreateSymbolicLinkPrivilege;// Offset=0x1c8 Size=0x8
    void * SeIUserSid;// Offset=0x1d0 Size=0x8
    void * SeUntrustedMandatorySid;// Offset=0x1d8 Size=0x8
    void * SeLowMandatorySid;// Offset=0x1e0 Size=0x8
    void * SeMediumMandatorySid;// Offset=0x1e8 Size=0x8
    void * SeHighMandatorySid;// Offset=0x1f0 Size=0x8
    void * SeSystemMandatorySid;// Offset=0x1f8 Size=0x8
    void * SeOwnerRightsSid;// Offset=0x200 Size=0x8
    void * SeAllAppPackagesSid;// Offset=0x208 Size=0x8
    void * SeUserModeDriversSid;// Offset=0x210 Size=0x8
    void * SeTrustedInstallerSid;// Offset=0x218 Size=0x8
    struct _LUID SeDelegateSessionUserImpersonatePrivilege;// Offset=0x220 Size=0x8
};
