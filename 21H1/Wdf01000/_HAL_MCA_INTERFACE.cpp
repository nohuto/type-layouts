struct _HAL_MCA_INTERFACE// Size=0x18 (Id=2580)
{
    void  ( * Lock)();// Offset=0x0 Size=0x8
    void  ( * Unlock)();// Offset=0x8 Size=0x8
    long  ( * ReadRegister)(unsigned char ,void * );// Offset=0x10 Size=0x8
};
