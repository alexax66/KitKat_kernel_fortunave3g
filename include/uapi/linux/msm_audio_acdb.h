#ifndef _UAPI_MSM_AUDIO_ACDB_H
#define _UAPI_MSM_AUDIO_ACDB_H

#include <linux/msm_audio.h>

#define AUDIO_SET_VOCPROC_CAL		_IOW(AUDIO_IOCTL_MAGIC, \
			(AUDIO_MAX_COMMON_IOCTL_NUM+0), unsigned)
#define AUDIO_SET_VOCPROC_STREAM_CAL	_IOW(AUDIO_IOCTL_MAGIC, \
			(AUDIO_MAX_COMMON_IOCTL_NUM+1), unsigned)
#define AUDIO_SET_VOCPROC_VOL_CAL	_IOW(AUDIO_IOCTL_MAGIC, \
			(AUDIO_MAX_COMMON_IOCTL_NUM+2), unsigned)
#define AUDIO_SET_AUDPROC_RX_CAL	_IOW(AUDIO_IOCTL_MAGIC, \
			(AUDIO_MAX_COMMON_IOCTL_NUM+3), unsigned)
#define AUDIO_SET_AUDPROC_RX_STREAM_CAL	_IOW(AUDIO_IOCTL_MAGIC, \
			(AUDIO_MAX_COMMON_IOCTL_NUM+4), unsigned)
#define AUDIO_SET_AUDPROC_RX_VOL_CAL	_IOW(AUDIO_IOCTL_MAGIC, \
			(AUDIO_MAX_COMMON_IOCTL_NUM+5), unsigned)
#define AUDIO_SET_AUDPROC_TX_CAL	_IOW(AUDIO_IOCTL_MAGIC, \
			(AUDIO_MAX_COMMON_IOCTL_NUM+6), unsigned)
#define AUDIO_SET_AUDPROC_TX_STREAM_CAL	_IOW(AUDIO_IOCTL_MAGIC, \
			(AUDIO_MAX_COMMON_IOCTL_NUM+7), unsigned)
#define AUDIO_SET_AUDPROC_TX_VOL_CAL	_IOW(AUDIO_IOCTL_MAGIC, \
			(AUDIO_MAX_COMMON_IOCTL_NUM+8), unsigned)
#define AUDIO_SET_SIDETONE_CAL		_IOW(AUDIO_IOCTL_MAGIC, \
			(AUDIO_MAX_COMMON_IOCTL_NUM+9), unsigned)
#define AUDIO_SET_ANC_CAL		_IOW(AUDIO_IOCTL_MAGIC, \
			(AUDIO_MAX_COMMON_IOCTL_NUM+10), unsigned)
#define AUDIO_SET_VOICE_RX_TOPOLOGY	_IOW(AUDIO_IOCTL_MAGIC, \
			(AUDIO_MAX_COMMON_IOCTL_NUM+11), unsigned)
#define AUDIO_SET_VOICE_TX_TOPOLOGY	_IOW(AUDIO_IOCTL_MAGIC, \
			(AUDIO_MAX_COMMON_IOCTL_NUM+12), unsigned)
#define AUDIO_SET_ADM_RX_TOPOLOGY	_IOW(AUDIO_IOCTL_MAGIC, \
			(AUDIO_MAX_COMMON_IOCTL_NUM+13), unsigned)
#define AUDIO_SET_ADM_TX_TOPOLOGY	_IOW(AUDIO_IOCTL_MAGIC, \
			(AUDIO_MAX_COMMON_IOCTL_NUM+14), unsigned)
#define AUDIO_SET_ASM_TOPOLOGY	_IOW(AUDIO_IOCTL_MAGIC, \
			(AUDIO_MAX_COMMON_IOCTL_NUM+15), unsigned)
#define AUDIO_SET_AFE_TX_CAL		_IOW(AUDIO_IOCTL_MAGIC, \
			(AUDIO_MAX_COMMON_IOCTL_NUM+16), unsigned)
#define AUDIO_SET_AFE_RX_CAL		_IOW(AUDIO_IOCTL_MAGIC, \
			(AUDIO_MAX_COMMON_IOCTL_NUM+17), unsigned)
#define AUDIO_SET_VOCPROC_COL_CAL	_IOW(AUDIO_IOCTL_MAGIC, \
			(AUDIO_MAX_COMMON_IOCTL_NUM+18), unsigned)
#define AUDIO_SET_VOCSTRM_COL_CAL	_IOW(AUDIO_IOCTL_MAGIC, \
			(AUDIO_MAX_COMMON_IOCTL_NUM+19), unsigned)
#define AUDIO_SET_VOCVOL_COL_CAL	_IOW(AUDIO_IOCTL_MAGIC, \
			(AUDIO_MAX_COMMON_IOCTL_NUM+20), unsigned)
#define AUDIO_SET_VOCPROC_DEV_CFG_CAL	_IOW(AUDIO_IOCTL_MAGIC, \
			(AUDIO_MAX_COMMON_IOCTL_NUM+21), unsigned)
#define AUDIO_SET_LSM_CAL		_IOW(AUDIO_IOCTL_MAGIC, \
			(AUDIO_MAX_COMMON_IOCTL_NUM+22), unsigned)
#define AUDIO_SET_ADM_CUSTOM_TOPOLOGY	_IOW(AUDIO_IOCTL_MAGIC, \
			(AUDIO_MAX_COMMON_IOCTL_NUM+23), unsigned)
#define AUDIO_SET_ASM_CUSTOM_TOPOLOGY	_IOW(AUDIO_IOCTL_MAGIC, \
			(AUDIO_MAX_COMMON_IOCTL_NUM+24), unsigned)
#define AUDIO_SET_SPEAKER_PROT _IOW(AUDIO_IOCTL_MAGIC, 25, \
			struct msm_spk_prot_cfg)
#define AUDIO_GET_SPEAKER_PROT _IOR(AUDIO_IOCTL_MAGIC, 26, \
			struct msm_spk_prot_status)
#define AUDIO_SET_AANC_CAL		_IOW(AUDIO_IOCTL_MAGIC, \
			(AUDIO_MAX_COMMON_IOCTL_NUM+27), unsigned)
#define AUDIO_REGISTER_VOCPROC_VOL_TABLE	_IOW(AUDIO_IOCTL_MAGIC, \
			(AUDIO_MAX_COMMON_IOCTL_NUM+28), unsigned)
#define AUDIO_DEREGISTER_VOCPROC_VOL_TABLE	_IOW(AUDIO_IOCTL_MAGIC, \
			(AUDIO_MAX_COMMON_IOCTL_NUM+29), unsigned)
#define AUDIO_SET_HW_DELAY_RX	_IOW(AUDIO_IOCTL_MAGIC, \
			(AUDIO_MAX_COMMON_IOCTL_NUM+30), struct hw_delay)
#define AUDIO_SET_HW_DELAY_TX	_IOW(AUDIO_IOCTL_MAGIC, \
			(AUDIO_MAX_COMMON_IOCTL_NUM+31), struct hw_delay)
#define AUDIO_SET_META_INFO		_IOW(AUDIO_IOCTL_MAGIC, \
			(AUDIO_MAX_COMMON_IOCTL_NUM+34), void *)

#define	AUDIO_MAX_ACDB_IOCTL	(AUDIO_MAX_COMMON_IOCTL_NUM+40)

/* ACDB structures */
struct cal_block {
	uint32_t	cal_size;	/* Size of Cal Data */
	uint32_t	cal_offset;	/* offset pointer to Cal Data */
};

struct sidetone_cal {
	uint16_t	enable;
	uint16_t	gain;
};

enum msm_spkr_prot_states {
	MSM_SPKR_PROT_CALIBRATED,
	MSM_SPKR_PROT_CALIBRATION_IN_PROGRESS,
	MSM_SPKR_PROT_DISABLED,
	MSM_SPKR_PROT_NOT_CALIBRATED
};

struct msm_spk_prot_cfg {
	int r0;
	int t0;
	uint32_t mode; /*0 - Start spk prot
	1 - Start calib
	2 - Disable spk prot*/
};

struct msm_spk_prot_status {
	int r0;
	int status;
};

struct hw_delay {
	uint32_t num_entries;
	void *delay_info;
};

/* For Real-Time Audio Calibration */
#define AUDIO_GET_RTAC_ADM_INFO		_IOR(AUDIO_IOCTL_MAGIC, \
			(AUDIO_MAX_ACDB_IOCTL+1), unsigned)
#define AUDIO_GET_RTAC_VOICE_INFO	_IOR(AUDIO_IOCTL_MAGIC, \
			(AUDIO_MAX_ACDB_IOCTL+2), unsigned)
#define AUDIO_GET_RTAC_ADM_CAL	_IOWR(AUDIO_IOCTL_MAGIC, \
			(AUDIO_MAX_ACDB_IOCTL+3), unsigned)
#define AUDIO_SET_RTAC_ADM_CAL	_IOWR(AUDIO_IOCTL_MAGIC, \
			(AUDIO_MAX_ACDB_IOCTL+4), unsigned)
#define AUDIO_GET_RTAC_ASM_CAL	_IOWR(AUDIO_IOCTL_MAGIC, \
			(AUDIO_MAX_ACDB_IOCTL+5), unsigned)
#define AUDIO_SET_RTAC_ASM_CAL	_IOWR(AUDIO_IOCTL_MAGIC, \
			(AUDIO_MAX_ACDB_IOCTL+6), unsigned)
#define AUDIO_GET_RTAC_CVS_CAL	_IOWR(AUDIO_IOCTL_MAGIC, \
			(AUDIO_MAX_ACDB_IOCTL+7), unsigned)
#define AUDIO_SET_RTAC_CVS_CAL	_IOWR(AUDIO_IOCTL_MAGIC, \
			(AUDIO_MAX_ACDB_IOCTL+8), unsigned)
#define AUDIO_GET_RTAC_CVP_CAL	_IOWR(AUDIO_IOCTL_MAGIC, \
			(AUDIO_MAX_ACDB_IOCTL+9), unsigned)
#define AUDIO_SET_RTAC_CVP_CAL	_IOWR(AUDIO_IOCTL_MAGIC, \
			(AUDIO_MAX_ACDB_IOCTL+10), unsigned)
#define AUDIO_GET_RTAC_ADM_INFO_V2	_IOWR(AUDIO_IOCTL_MAGIC, \
			(AUDIO_MAX_ACDB_IOCTL+11), unsigned)

#define	AUDIO_MAX_RTAC_IOCTL	(AUDIO_MAX_ACDB_IOCTL+20)

#endif /* _UAPI_MSM_AUDIO_ACDB_H */
