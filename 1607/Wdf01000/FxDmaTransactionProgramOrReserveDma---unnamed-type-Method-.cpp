union FxDmaTransactionProgramOrReserveDma::<unnamed-type-Method>// Size=0x8 (Id=1004)
{
    unsigned char  ( * ProgramDma)(struct WDFDMATRANSACTION__ * ,struct WDFDEVICE__ * ,void * ,enum _WDF_DMA_DIRECTION ,struct _SCATTER_GATHER_LIST * );// Offset=0x0 Size=0x8
    void  ( * ReserveDma)(struct WDFDMATRANSACTION__ * ,void * );// Offset=0x0 Size=0x8
};
