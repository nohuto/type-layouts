struct _XILPROXY_DEVICESLOT_DATA// Size=0x10 (Id=783)
{
    void * RemoteDeviceSlotHandle;// Offset=0x0 Size=0x8
    void ** LocalUsbDeviceHandleArray;// Offset=0x8 Size=0x8
};

struct _LIST_ENTRY// Size=0x10 (Id=23)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

struct _XILCORE_DEVICESLOT_DATA// Size=0x40 (Id=420)
{
    void * DeviceSlotHandle;// Offset=0x0 Size=0x8
    void * ControllerHandle;// Offset=0x8 Size=0x8
    unsigned long NumberOfDeviceSlots;// Offset=0x10 Size=0x4
    unsigned long NumberOfScratchpadBuffers;// Offset=0x14 Size=0x4
    struct _XIL_BUFFER_DATA * DeviceContextBaseBufferData;// Offset=0x18 Size=0x8
    struct _XIL_BUFFER_DATA * ScratchpadBufferArrayData;// Offset=0x20 Size=0x8
    struct _LIST_ENTRY ScratchpadBufferDatas;// Offset=0x28 Size=0x10
    void ** UsbDeviceHandleArray;// Offset=0x38 Size=0x8
};

struct _XILDIRECT_DEVICESLOT_DATA// Size=0x40 (Id=799)
{
    struct _XILCORE_DEVICESLOT_DATA XilCoreDeviceSlotData;// Offset=0x0 Size=0x40
};

struct _XIL_DEVICESLOT_DATA// Size=0x58 (Id=766)
{
    union // Size=0x10 (Id=0)
    {
        struct _XILPROXY_DEVICESLOT_DATA XilProxyDeviceSlotData;// Offset=0x0 Size=0x10
        struct _XILDIRECT_DEVICESLOT_DATA XilDirectDeviceSlotData;// Offset=0x0 Size=0x40
    };
    unsigned char IsProxyDeviceSlot;// Offset=0x40 Size=0x1
    void * DeviceSlotHandle;// Offset=0x48 Size=0x8
    unsigned long NumberOfDeviceSlots;// Offset=0x50 Size=0x4
};
