struct _HAL_REGISTER_PMU_NOTIFICATION_INPUT// Size=0x18 (Id=2549)
{
    unsigned short Version;// Offset=0x0 Size=0x2
    unsigned short Size;// Offset=0x2 Size=0x2
    unsigned long OwnerTag;// Offset=0x4 Size=0x4
    void  ( * CallbackRoutine)(void * ,struct HAL_PMU_NOTIFICATION * );// Offset=0x8 Size=0x8
    void * CallbackContext;// Offset=0x10 Size=0x8
};
