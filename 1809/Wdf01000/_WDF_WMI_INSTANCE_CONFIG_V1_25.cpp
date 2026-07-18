struct _WDF_WMI_INSTANCE_CONFIG_V1_25// Size=0x40 (Id=4608)
{
    unsigned long Size;// Offset=0x0 Size=0x4
    struct WDFWMIPROVIDER__ * Provider;// Offset=0x8 Size=0x8
    struct _WDF_WMI_PROVIDER_CONFIG_V1_25 * ProviderConfig;// Offset=0x10 Size=0x8
    unsigned char UseContextForQuery;// Offset=0x18 Size=0x1
    unsigned char Register;// Offset=0x19 Size=0x1
    long  ( * EvtWmiInstanceQueryInstance)(struct WDFWMIINSTANCE__ * ,unsigned long ,void * ,unsigned long * );// Offset=0x20 Size=0x8
    long  ( * EvtWmiInstanceSetInstance)(struct WDFWMIINSTANCE__ * ,unsigned long ,void * );// Offset=0x28 Size=0x8
    long  ( * EvtWmiInstanceSetItem)(struct WDFWMIINSTANCE__ * ,unsigned long ,unsigned long ,void * );// Offset=0x30 Size=0x8
    long  ( * EvtWmiInstanceExecuteMethod)(struct WDFWMIINSTANCE__ * ,unsigned long ,unsigned long ,unsigned long ,void * ,unsigned long * );// Offset=0x38 Size=0x8
};
