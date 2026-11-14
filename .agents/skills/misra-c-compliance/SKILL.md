---
name: misra-c-compliance
description: Remediation playbook for Helix QAC MISRA C:2012 Rule 11.3 pointer cast violations and AUTOSAR CAN bus alignment errors in src/can_bus.c.
---
# MISRA C:2012 Rule 11.3 Remediation Playbook

Replace direct pointer casts (`(uint32_t *)buf`) with `memcpy(&aligned_val, buf, sizeof(uint32_t))` to prevent unaligned hardware faults on ARM Cortex-R/M targets.
