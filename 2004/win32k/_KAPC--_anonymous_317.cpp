union _KAPC::_anonymous_317// Size=0xc (Id=317)
{
    void  ( * KernelRoutine)(struct _KAPC * ,void  ( ** )(void * ,void * ,void * ),void ** ,void ** ,void ** );// Offset=0x0 Size=0x4
    void  ( * RundownRoutine)(struct _KAPC * );// Offset=0x4 Size=0x4
    void  ( * NormalRoutine)(void * ,void * ,void * );// Offset=0x8 Size=0x4
    void * Reserved[3];// Offset=0x0 Size=0xc
};
