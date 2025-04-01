/*
 * Copyright (c) 2022 Nordic Semiconductor ASA
 *
 * SPDX-License-Identifier: LicenseRef-Nordic-5-Clause
 */

/**
 * @brief Common structures and definitions.
 */

#ifndef __RPU_LMAC_STATS_H__
#define __RPU_LMAC_STATS_H__

/**
 * @brief Common debug variables structure.
 */
struct stat {	
	char name[32];
	unsigned int addr;
};

/**
* @brief MAC debug variables.
*/
struct stat rpu_lmac_stats[] = {
	{"resetCmdCnt", 0x80040f2c },
	{"resetCompleteEventCnt", 0x80040f30 },
	{"unableGenEvent", 0x80040f44 },
	{"chProgCmdCnt", 0x80040f4c },
	{"channelProgDone", 0x80040f50 },
	{"txPktCnt", 0x80040fd0 },
	{"txPktDoneCnt", 0x80040fd4 },
	{"scanPktCnt", 0x80040ff4 },
	{"internalPktCnt", 0x80040ff8 },
	{"internalPktDoneCnt", 0x80040ffc },
	{"ackRespCnt", 0x8004100c },
	{"txTimeout", 0x80041010 },
	{"deaggIsr", 0x8004106c },
	{"deaggInptrDescEmpty", 0x80041070 },
	{"deaggCircularBufferFull", 0x80041074 },
	{"lmacRxisrCnt", 0x80041078 },
	{"rxDecryptcnt", 0x8004107c },
	{"processDecryptFail", 0x80041080 },
	{"prepaRxEventFail", 0x80041084 },
	{"rxDeadlockCnt", 0x800410d8 },
	{"rxMpduCrcSuccessCnt", 0x80041088 },
	{"rxMpduCrcFailCnt", 0x8004108c },
	{"rxOfdmCrcSuccessCnt", 0x80041090 },
	{"rxOfdmCrcFailCnt", 0x80041094 },
	{"rxDSSSCrcSuccessCnt", 0x80041098 },
	{"rxDSSSCrcFailCnt", 0x800410c0 },
	{"rxCryptoStartCnt", 0x800410c4 },
	{"rxCryptoDoneCnt", 0x800410c8 },
	{"rxEventBufFull", 0x800410dc },
	{"rxExtramBufFull", 0x800410e0 },
	{"scanReq", 0x800410f0 },
	{"scanComplete", 0x800410f4 },
	{"scanAbortReq", 0x800410f8 },
	{"scanAbortComplete", 0x800410fc },
	{"internalBufPoolNull", 0x80040f6c },
};
 
/**
* @brief MAC softrecovery debug variables.
*/
struct rpu_soft_recovery_stats[] = {
	{"rpusoftLockup", 0x80040f24 },
	{"rpusoftLockupRecoverySuccess", 0x80040f28 },
};
 
/**
* @brief PHY debug variables.
*/
struct rpu_phy_stats[] = {
	{"dsss_crc32_fail_cnt", 0x800410c0 },
	{"dsss_crc32_pass_cnt", 0x80041098 },
	{"ofdm_crc32_fail_cnt", 0x80041094 },
	{"ofdm_crc32_pass_cnt", 0x80041090 },
};
 
/**
* @brief offload raw tx debug variables.
*/
struct rpu_offload_raw_tx_stats[] = {
	{"offLoad_raw_tx_state", 0x800473b4 },
	{"offload_raw_tx_cnt", 0x80047398 },
	{"offload_raw_tx_complete_cnt", 0x8004739c },
	{"offload_raw_tx_stats.warm_boot_cnt", 0x8004116c },
};
 
#endif /* __RPU_LMAC_STATS_H__ */
