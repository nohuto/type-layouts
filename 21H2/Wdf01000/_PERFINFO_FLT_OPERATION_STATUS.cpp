struct _PERFINFO_FLT_OPERATION_STATUS// Size=0x30 (Id=2253)
{
    void * RoutineAddr;// Offset=0x0 Size=0x8
    void * FileObject;// Offset=0x8 Size=0x8
    void * FsContext;// Offset=0x10 Size=0x8
    void * IrpPtr;// Offset=0x18 Size=0x8
    void * CbdPtr;// Offset=0x20 Size=0x8
    long MajorFunction;// Offset=0x28 Size=0x4
    long Status;// Offset=0x2c Size=0x4
};
