/**
 * @file sys/flush.c
 *
 * @copyright 2015 Bill Zissimopoulos
 */

#include <sys/driver.h>

DRIVER_DISPATCH FspFlushBuffers;

#ifdef ALLOC_PRAGMA
#pragma alloc_text(PAGE, FspFlushBuffers)
#endif

NTSTATUS
FspFlushBuffers(
    _In_ PDEVICE_OBJECT DeviceObject,
    _In_ PIRP Irp)
{
    FSP_ENTER_MJ(PAGED_CODE());

    ASSERT(IRP_MJ_FLUSH_BUFFERS == IrpSp->MajorFunction);

    Result = STATUS_INVALID_DEVICE_REQUEST;

    FSP_LEAVE_MJ("", 0);
}