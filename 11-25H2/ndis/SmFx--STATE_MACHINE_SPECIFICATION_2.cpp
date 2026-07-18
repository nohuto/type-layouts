struct SmFx::STATE_MACHINE_SPECIFICATION// Size=0x20 (Id=1498)
{
    unsigned char mainMachine;// Offset=0x0 Size=0x1
    unsigned short defaultSyncEvent;// Offset=0x2 Size=0x2
    struct SmFx::SUBMACHINE_SPECIFICATION * machineTable;// Offset=0x8 Size=0x8
    struct SmFx::EVENT_SPECIFICATION * eventTable;// Offset=0x10 Size=0x8
    struct SmFx::STATE_SPECIFICATION * stateTable;// Offset=0x18 Size=0x8
};
