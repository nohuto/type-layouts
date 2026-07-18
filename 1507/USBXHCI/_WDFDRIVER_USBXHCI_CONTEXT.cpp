struct _LIST_ENTRY// Size=0x10 (Id=20)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

struct _WDFDRIVER_USBXHCI_CONTEXT// Size=0x20 (Id=379)
{
    struct _LIST_ENTRY ControllerListHead;// Offset=0x0 Size=0x10
    unsigned long long ControllerListLock;// Offset=0x10 Size=0x8
    unsigned long ControllerListCount;// Offset=0x18 Size=0x4
    unsigned char TestModeOn;// Offset=0x1c Size=0x1
};
