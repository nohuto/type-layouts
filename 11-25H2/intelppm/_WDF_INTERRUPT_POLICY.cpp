enum _WDF_INTERRUPT_POLICY
{
    WdfIrqPolicyMachineDefault=0,
    WdfIrqPolicyAllCloseProcessors=1,
    WdfIrqPolicyOneCloseProcessor=2,
    WdfIrqPolicyAllProcessorsInMachine=3,
    WdfIrqPolicySpecifiedProcessors=4,
    WdfIrqPolicySpreadMessagesAcrossAllProcessors=5
};
