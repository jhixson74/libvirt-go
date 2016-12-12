#ifndef LIBVIRT_GO_DOMAIN_COMPAT_H__
#define LIBVIRT_GO_ERROR_COMPAT_H__

/* 1.3.5 */

#ifndef VIR_PERF_PARAM_MBML
#define VIR_PERF_PARAM_MBML "mbml"
#endif

#ifndef VIR_PERF_PARAM_MBMT
#define VIR_PERF_PARAM_MBMT "mbmt"
#endif


/* 2.0.0 */

#ifndef VIR_DOMAIN_JOB_AUTO_CONVERGE_THROTTLE
#define VIR_DOMAIN_JOB_AUTO_CONVERGE_THROTTLE "auto_converge_throttle"
#endif

#ifndef VIR_MIGRATE_PARAM_AUTO_CONVERGE_INITIAL
#define VIR_MIGRATE_PARAM_AUTO_CONVERGE_INITIAL "auto_converge.initial"
#endif

#ifndef VIR_MIGRATE_PARAM_AUTO_CONVERGE_INCREMENT
#define VIR_MIGRATE_PARAM_AUTO_CONVERGE_INCREMENT "auto_converge.increment"
#endif

int virDomainGetGuestVcpusCompat(virDomainPtr domain,
				 virTypedParameterPtr *params,
				 unsigned int *nparams,
				 unsigned int flags);

int virDomainSetGuestVcpusCompat(virDomainPtr domain,
				 const char *cpumap,
				 int state,
				 unsigned int flags);


/* 2.1.0 */

#ifndef VIR_DOMAIN_MEMORY_STAT_USABLE
#define VIR_DOMAIN_MEMORY_STAT_USABLE 8
#endif

#ifndef VIR_DOMAIN_MEMORY_STAT_LAST_UPDATE
#define VIR_DOMAIN_MEMORY_STAT_LAST_UPDATE 9
#endif

/* 2.2.0 */

#ifndef VIR_DOMAIN_SCHEDULER_IOTHREAD_PERIOD
#define VIR_DOMAIN_SCHEDULER_IOTHREAD_PERIOD "iothread_period"
#endif

#ifndef VIR_DOMAIN_SCHEDULER_IOTHREAD_QUOTA
#define VIR_DOMAIN_SCHEDULER_IOTHREAD_QUOTA "iothread_quota"
#endif

#ifndef VIR_DOMAIN_TUNABLE_CPU_IOTHREAD_PERIOD
#define VIR_DOMAIN_TUNABLE_CPU_IOTHREAD_PERIOD "cputune.iothread_period"
#endif

#ifndef VIR_DOMAIN_TUNABLE_CPU_IOTHREAD_QUOTA
# define VIR_DOMAIN_TUNABLE_CPU_IOTHREAD_QUOTA "cputune.iothread_quota"
#endif


/* 2.3.0 */

#ifndef VIR_DOMAIN_UNDEFINE_KEEP_NVRAM
#define VIR_DOMAIN_UNDEFINE_KEEP_NVRAM (1 << 3)
#endif

#ifndef VIR_PERF_PARAM_CACHE_MISSES
#define VIR_PERF_PARAM_CACHE_MISSES "cache_misses"
#endif

#ifndef VIR_PERF_PARAM_CACHE_REFERENCES
#define VIR_PERF_PARAM_CACHE_REFERENCES "cache_references"
#endif

#ifndef VIR_PERF_PARAM_INSTRUCTIONS
#define VIR_PERF_PARAM_INSTRUCTIONS "instructions"
#endif

#ifndef VIR_PERF_PARAM_CPU_CYCLES
#define VIR_PERF_PARAM_CPU_CYCLES "cpu_cycles"
#endif


/* 2.4.0 */

#ifndef VIR_DOMAIN_BLOCK_IOTUNE_READ_BYTES_SEC_MAX_LENGTH
#define VIR_DOMAIN_BLOCK_IOTUNE_READ_BYTES_SEC_MAX_LENGTH "read_bytes_sec_max_length"
#endif

#ifndef VIR_DOMAIN_BLOCK_IOTUNE_READ_IOPS_SEC_MAX_LENGTH
#define VIR_DOMAIN_BLOCK_IOTUNE_READ_IOPS_SEC_MAX_LENGTH "read_iops_sec_max_length"
#endif

#ifndef VIR_DOMAIN_BLOCK_IOTUNE_TOTAL_BYTES_SEC_MAX_LENGTH
#define VIR_DOMAIN_BLOCK_IOTUNE_TOTAL_BYTES_SEC_MAX_LENGTH "total_bytes_sec_max_length"
#endif

#ifndef VIR_DOMAIN_BLOCK_IOTUNE_TOTAL_IOPS_SEC_MAX_LENGTH
#define VIR_DOMAIN_BLOCK_IOTUNE_TOTAL_IOPS_SEC_MAX_LENGTH "total_iops_sec_max_length"
#endif

#ifndef VIR_DOMAIN_BLOCK_IOTUNE_WRITE_BYTES_SEC_MAX_LENGTH
#define VIR_DOMAIN_BLOCK_IOTUNE_WRITE_BYTES_SEC_MAX_LENGTH "write_bytes_sec_max_length"
#endif

#ifndef VIR_DOMAIN_BLOCK_IOTUNE_WRITE_IOPS_SEC_MAX_LENGTH
#define VIR_DOMAIN_BLOCK_IOTUNE_WRITE_IOPS_SEC_MAX_LENGTH "write_iopcs_sec_max_length"
#endif

#ifndef VIR_DOMAIN_TUNABLE_BLKDEV_TOTAL_BYTES_SEC_MAX_LENGTH
#define VIR_DOMAIN_TUNABLE_BLKDEV_TOTAL_BYTES_SEC_MAX_LENGTH "blkdeviotune.total_bytes_sec_max_length"
#endif

#ifndef VIR_DOMAIN_TUNABLE_BLKDEV_READ_BYTES_SEC_MAX_LENGTH
#define VIR_DOMAIN_TUNABLE_BLKDEV_READ_BYTES_SEC_MAX_LENGTH "blkdeviotune.read_bytes_sec_max_length"
#endif

#ifndef VIR_DOMAIN_TUNABLE_BLKDEV_WRITE_BYTES_SEC_MAX_LENGTH
#define VIR_DOMAIN_TUNABLE_BLKDEV_WRITE_BYTES_SEC_MAX_LENGTH "blkdeviotune.write_bytes_sec_max_length"
#endif

#ifndef VIR_DOMAIN_TUNABLE_BLKDEV_TOTAL_IOPS_SEC_MAX_LENGTH
#define VIR_DOMAIN_TUNABLE_BLKDEV_TOTAL_IOPS_SEC_MAX_LENGTH "blkdeviotune.total_iops_sec_max_length"
#endif

#ifndef VIR_DOMAIN_TUNABLE_BLKDEV_READ_IOPS_SEC_MAX_LENGTH
#define VIR_DOMAIN_TUNABLE_BLKDEV_READ_IOPS_SEC_MAX_LENGTH "blkdeviotune.read_iops_sec_max_length"
#endif

#ifndef VIR_DOMAIN_TUNABLE_BLKDEV_WRITE_IOPS_SEC_MAX_LENGTH
#define VIR_DOMAIN_TUNABLE_BLKDEV_WRITE_IOPS_SEC_MAX_LENGTH "blkdeviotune.write_iops_sec_max_length"
#endif

#ifndef VIR_DOMAIN_VCPU_HOTPLUGGABLE
#define VIR_DOMAIN_VCPU_HOTPLUGGABLE (1 << 4)
#endif

#endif /* LIBVIRT_GO_ERROR_COMPAT_H__ */
