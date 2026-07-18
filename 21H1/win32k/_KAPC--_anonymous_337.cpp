union _KAPC::_anonymous_337// Size=0x18 (Id=337)
{
    void  ( * KernelRoutine)(struct _KAPC * ,void  ( ** )(void * ,void * ,void * ),void ** ,void ** ,void ** );// Offset=0x0 Size=0x8
    void  ( * RundownRoutine)(struct _KAPC * );// Offset=0x8 Size=0x8
    void  ( * NormalRoutine)(void * ,void * ,void * );// Offset=0x10 Size=0x8
    void * Reserved[3];// Offset=0x0 Size=0x18
};
