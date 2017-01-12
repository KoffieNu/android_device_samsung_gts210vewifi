/*
 * Copyright (C) 2014 The CyanogenMod Project
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#define CAMERA_PARAMETERS_EXTRA_C \
const char CameraParameters::KEY_CITYID[] = "cityid"; \
const char CameraParameters::KEY_WEATHER[] = "weather"; \
const char CameraParameters::KEY_METERING[] = "metering"; \
const char CameraParameters::METERING_MATRIX[] = "matrix"; \
const char CameraParameters::METERING_SPOT[] = "spot"; \
const char CameraParameters::PIXEL_FORMAT_YUV420SP_NV21[] = "nv21"; \
const char CameraParameters::KEY_OIS_SUPPORTED[] = "ois_supported"; \
int CameraParameters::getInt64(__attribute__((__unused__)) const char *key) const { return -1; } \
\
/* LAST_LINE OF CAMERA_PARAMETERS_EXTRA_C, every line before this one *MUST* have
 * a backslash \ at the end of the line or else everything will break.
 */

#define CAMERA_PARAMETERS_EXTRA_H \
    static const char KEY_CITYID[]; \
    static const char KEY_WEATHER[]; \
    static const char KEY_METERING[]; \
    \
    static const char METERING_MATRIX[]; \
    static const char METERING_SPOT[]; \
    \
    static const char PIXEL_FORMAT_YUV420SP_NV21[]; \
    \
    static const char KEY_OIS_SUPPORTED[]; \
    int getInt64(const char *key) const; \
    \
    /* LAST_LINE OF CAMERA_PARAMETERS_EXTRA_H, every line before this one *MUST* have
     * a backslash \ at the end of the line or else everything will break.
     */
