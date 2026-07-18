struct IDeviceCompanion// Size=0x8 (Id=1735)
{
    void QueryPnPDeviceStateNotification();
    long SendTaskMessageSynchronously(unsigned short ,unsigned long ,void * ,unsigned long ,void * ,unsigned long ,long long * ,unsigned long long * );
    long SendPrepareHardware(struct _CM_RESOURCE_LIST * ,struct _CM_RESOURCE_LIST * );
    long SendReleaseHardware();
    long SendD0Entry(unsigned long );
    long SendD0Exit(unsigned long );
    long SendSurpriseRemove();
    struct _EPROCESS * GetCompanionProcess();
};
