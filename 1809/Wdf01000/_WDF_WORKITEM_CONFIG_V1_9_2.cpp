struct _WDF_WORKITEM_CONFIG_V1_9// Size=0x18 (Id=4189)
{
    unsigned long Size;// Offset=0x0 Size=0x4
    void  ( * EvtWorkItemFunc)(struct WDFWORKITEM__ * );// Offset=0x8 Size=0x8
    unsigned char AutomaticSerialization;// Offset=0x10 Size=0x1
};
