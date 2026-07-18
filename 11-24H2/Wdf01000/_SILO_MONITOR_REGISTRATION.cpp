struct _SILO_MONITOR_REGISTRATION// Size=0x20 (Id=388)
{
    unsigned char Version;// Offset=0x0 Size=0x1
    unsigned char MonitorHost;// Offset=0x1 Size=0x1
    unsigned char MonitorExistingSilos;// Offset=0x2 Size=0x1
    unsigned char Reserved[5];// Offset=0x3 Size=0x5
    union // Size=0x8 (Id=0)
    {
        struct _UNICODE_STRING * DriverObjectName;// Offset=0x8 Size=0x8
        struct _UNICODE_STRING * ComponentName;// Offset=0x8 Size=0x8
    };
    long  ( * CreateCallback)(struct _EJOB * );// Offset=0x10 Size=0x8
    void  ( * TerminateCallback)(struct _EJOB * );// Offset=0x18 Size=0x8
};
