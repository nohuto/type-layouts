struct _OB_OPERATION_REGISTRATION// Size=0x20 (Id=2934)
{
    struct _OBJECT_TYPE ** ObjectType;// Offset=0x0 Size=0x8
    unsigned long Operations;// Offset=0x8 Size=0x4
    enum _OB_PREOP_CALLBACK_STATUS  ( * PreOperation)(void * ,struct _OB_PRE_OPERATION_INFORMATION * );// Offset=0x10 Size=0x8
    void  ( * PostOperation)(void * ,struct _OB_POST_OPERATION_INFORMATION * );// Offset=0x18 Size=0x8
};
