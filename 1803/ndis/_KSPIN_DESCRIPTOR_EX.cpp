struct _KSPIN_DESCRIPTOR_EX// Size=0x88 (Id=394)
{
    struct _KSPIN_DISPATCH * Dispatch;// Offset=0x0 Size=0x8
    struct KSAUTOMATION_TABLE_ * AutomationTable;// Offset=0x8 Size=0x8
    struct KSPIN_DESCRIPTOR PinDescriptor;// Offset=0x10 Size=0x58
    unsigned long Flags;// Offset=0x68 Size=0x4
    unsigned long InstancesPossible;// Offset=0x6c Size=0x4
    unsigned long InstancesNecessary;// Offset=0x70 Size=0x4
    struct KSALLOCATOR_FRAMING_EX * AllocatorFraming;// Offset=0x78 Size=0x8
    long  ( * IntersectHandler)(void * ,struct _IRP * ,struct KSP_PIN * ,union KSDATAFORMAT * ,union KSDATAFORMAT * ,unsigned long ,void * ,unsigned long * );// Offset=0x80 Size=0x8
};
