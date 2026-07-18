struct FxWmiInstanceInternalCallbacks// Size=0x20 (Id=1556)
{
    void FxWmiInstanceInternalCallbacks();
    long  ( * QueryInstance)(class FxDevice * ,class FxWmiInstanceInternal * ,unsigned long ,void * ,unsigned long * );// Offset=0x0 Size=0x8
    long  ( * SetInstance)(class FxDevice * ,class FxWmiInstanceInternal * ,unsigned long ,void * );// Offset=0x8 Size=0x8
    long  ( * SetItem)(class FxDevice * ,class FxWmiInstanceInternal * ,unsigned long ,unsigned long ,void * );// Offset=0x10 Size=0x8
    long  ( * ExecuteMethod)(class FxDevice * ,class FxWmiInstanceInternal * ,unsigned long ,unsigned long ,unsigned long ,void * ,unsigned long * );// Offset=0x18 Size=0x8
};
