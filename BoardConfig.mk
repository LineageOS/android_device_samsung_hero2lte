BOARD_MKBOOTIMG_ARGS := --kernel_offset 0x10008000 --ramdisk_offset 0x11000000 --tags_offset 0x10000100 --dt device/samsung/$(TARGET_DEVICE)/dt.img
TARGET_KERNEL_SOURCE := kernel/samsung/universal8890
TARGET_KERNEL_CONFIG := exynos8890-hero2lte_defconfig

# Partitions
BOARD_BOOTIMAGE_PARTITION_SIZE     := 41943040
BOARD_RECOVERYIMAGE_PARTITION_SIZE := 48234496
BOARD_SYSTEMIMAGE_PARTITION_SIZE   := 4508876800
BOARD_USERDATAIMAGE_PARTITION_SIZE := 27044851712
BOARD_CACHEIMAGE_PARTITION_SIZE    := 209715200
BOARD_FLASH_BLOCK_SIZE := 131072

TARGET_RECOVERY_FSTAB := device/samsung/universal8890/ramdisk/fstab.samsungexynos8890

# RIL
BOARD_MODEM_TYPE := ss333

# Recovery
TARGET_OTA_ASSERT_DEVICE := hero2ltebmc,hero2lteskt,hero2ltektt,hero2ltelgt,hero2ltexx

# Inherit common board flags
include device/samsung/universal8890/BoardConfigCommon.mk
