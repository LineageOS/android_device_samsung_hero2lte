/*
   Copyright (c) 2016, The Linux Foundation. All rights reserved.
   Copyright (c) 2017-2020, The LineageOS Project. All rights reserved.

   Redistribution and use in source and binary forms, with or without
   modification, are permitted provided that the following conditions are
   met:
    * Redistributions of source code must retain the above copyright
      notice, this list of conditions and the following disclaimer.
    * Redistributions in binary form must reproduce the above
      copyright notice, this list of conditions and the following
      disclaimer in the documentation and/or other materials provided
      with the distribution.
    * Neither the name of The Linux Foundation nor the names of its
      contributors may be used to endorse or promote products derived
      from this software without specific prior written permission.

   THIS SOFTWARE IS PROVIDED "AS IS" AND ANY EXPRESS OR IMPLIED
   WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF
   MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NON-INFRINGEMENT
   ARE DISCLAIMED.  IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS
   BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
   CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
   SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR
   BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY,
   WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE
   OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN
   IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

#include <android-base/logging.h>
#include <android-base/properties.h>

#include "property_service.h"

#include "init_universal8890.h"

using android::base::GetProperty;

void vendor_load_properties()
{
    std::string bootloader = GetProperty("ro.bootloader", "");

    if (bootloader.find("G935F") == 0) {
        /* hero2ltexx */
        property_override("ro.build.description", "hero2ltexx-user 8.0.0 R16NW G935FXXU2ERD5 release-keys");
        set_ro_product_prop("device", "hero2ltexx");
        set_ro_build_prop("fingerprint", "samsung/hero2ltexx/hero2lte:8.0.0/R16NW/G935FXXU2ERD5:user/release-keys");
        set_ro_product_prop("model", "SM-G935F");
        set_ro_product_prop("name", "hero2ltexx");
        gsm_properties("9");
    } else if (bootloader.find("G935W8") == 0) {
        /* hero2ltebmc */
        property_override("ro.build.description", "hero2ltebmc-user 8.0.0 R16NW G935W8VLS7CTB2 release-keys");
        set_ro_product_prop("device", "hero2ltebmc");
        set_ro_build_prop("fingerprint", "samsung/hero2ltebmc/hero2ltebmc:8.0.0/R16NW/G935W8VLS7CTB2:user/release-keys");
        set_ro_product_prop("model", "SM-G935W8");
        set_ro_product_prop("name", "hero2ltebmc");
        gsm_properties("9");
    } else if (bootloader.find("G935S") == 0) {
        /* hero2lteskt */
        property_override("ro.build.description", "hero2lteskt-user 8.0.0 R16NW G935SKSU3ETJ1 release-keys");
        set_ro_product_prop("device", "hero2lteskt");
        set_ro_build_prop("fingerprint", "samsung/hero2lteskt/hero2lteskt:8.0.0/R16NW/G935SKSU3ETJ1:user/release-keys");
        set_ro_product_prop("model", "SM-G935S");
        set_ro_product_prop("name", "hero2lteskt");
        gsm_properties("9");
    } else if (bootloader.find("G935K") == 0) {
        /* hero2ltektt */
        property_override("ro.build.description", "hero2ltektt-user 8.0.0 R16NW G935KKKU3ETD2 release-keys");
        set_ro_product_prop("device", "hero2ltektt");
        set_ro_build_prop("fingerprint", "samsung/hero2ltektt/hero2ltektt:8.0.0/R16NW/G935KKKU3ETD2:user/release-keys");
        set_ro_product_prop("model", "SM-G935K");
        set_ro_product_prop("name", "hero2ltektt");
        gsm_properties("9");
    }  else if (bootloader.find("G935L") == 0) {
        /* hero2ltelgt */
        property_override("ro.build.description", "hero2ltelgt-user 8.0.0 R16NW G935LKLU3ETD2 release-keys");
        set_ro_product_prop("device", "hero2ltelgt");
        set_ro_build_prop("fingerprint", "samsung/hero2ltelgt/hero2ltelgt:8.0.0/R16NW/G935LKLU3ETD2:user/release-keys");
        set_ro_product_prop("model", "SM-G935L");
        set_ro_product_prop("name", "hero2ltelgt");
        gsm_properties("9");
    } else {
        gsm_properties("9");
    }

    std::string device = GetProperty("ro.product.device", "");
    LOG(ERROR) << "Found bootloader id " << bootloader <<  " setting build properties for "
        << device <<  " device" << std::endl;
}
