struct SmFx::STATE_MACHINE_ENGINE_CONFIG// Size=0x48 (Id=1503)
{
    struct SmFx::STATE_MACHINE_SPECIFICATION * machineSpec;// Offset=0x0 Size=0x8
    void * context;// Offset=0x8 Size=0x8
    struct _DEVICE_OBJECT * deviceObject;// Offset=0x10 Size=0x8
    unsigned int poolTag;// Offset=0x18 Size=0x4
    void  ( * logExceptionCallback)(void * ,enum SmFx::MachineException ,unsigned short ,unsigned short );// Offset=0x20 Size=0x8
    void  ( * logEventEnqueueCallback)(void * ,unsigned short );// Offset=0x28 Size=0x8
    void  ( * logTransitionCallback)(void * ,enum SmFx::TransitionType ,unsigned short ,unsigned short ,unsigned short );// Offset=0x30 Size=0x8
    void  ( * machineDestroyedCallback)(void * );// Offset=0x38 Size=0x8
    bool isWorkerRequired;// Offset=0x40 Size=0x1
    unsigned char stackSize;// Offset=0x41 Size=0x1
};
