struct SmFx::STATE_SPECIFICATION// Size=0x10 (Id=1525)
{
    unsigned short id;// Offset=0x0 Size=0x2
    enum SmFx::StateFlags flags;// Offset=0x2 Size=0x1
    enum SmFx::StateType type;// Offset=0x3 Size=0x1
    enum SmFx::StateSlotType activeSlots;// Offset=0x4 Size=0x2
    unsigned char callSubmachine;// Offset=0x6 Size=0x1
    void ** slots;// Offset=0x8 Size=0x8
};
