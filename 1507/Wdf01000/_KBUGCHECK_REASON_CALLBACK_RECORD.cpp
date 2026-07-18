struct _LIST_ENTRY// Size=0x10 (Id=81)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

enum _KBUGCHECK_CALLBACK_REASON
{
    KbCallbackInvalid=0,
    KbCallbackReserved1=1,
    KbCallbackSecondaryDumpData=2,
    KbCallbackDumpIo=3,
    KbCallbackAddPages=4,
    KbCallbackSecondaryMultiPartDumpData=5,
    KbCallbackRemovePages=6
};

struct _KBUGCHECK_REASON_CALLBACK_RECORD// Size=0x30 (Id=508)
{
    struct _LIST_ENTRY Entry;// Offset=0x0 Size=0x10
    void  ( * CallbackRoutine)(enum _KBUGCHECK_CALLBACK_REASON ,struct _KBUGCHECK_REASON_CALLBACK_RECORD * ,void * ,unsigned long );// Offset=0x10 Size=0x8
    unsigned char * Component;// Offset=0x18 Size=0x8
    unsigned long long Checksum;// Offset=0x20 Size=0x8
    enum _KBUGCHECK_CALLBACK_REASON Reason;// Offset=0x28 Size=0x4
    unsigned char State;// Offset=0x2c Size=0x1
};
