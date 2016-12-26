LOCAL_PATH := device/samsung/hero2lte

###########################################################
### RAMDISK
###########################################################

PRODUCT_PACKAGES += \
    init.baseband.rc

###########################################################
### RADIO
###########################################################

# cpboot-daemon for modem
PRODUCT_COPY_FILES += \
    $(LOCAL_PATH)/ril/sbin/cbd:root/sbin/cbd
