/*
 *  Copyright (c) 2011 The WebRTC project authors. All Rights Reserved.
 *
 *  Use of this source code is governed by a BSD-style license
 *  that can be found in the LICENSE file in the root of the source
 *  tree. An additional intellectual property rights grant can be found
 *  in the file PATENTS.  All contributing project authors may
 *  be found in the AUTHORS file in the root of the source tree.
 */

#ifndef VIDEO_ERROR_CODES_H
#define VIDEO_ERROR_CODES_H

// NOTE: in sync with video_coding_module_defines.h

// Define return values

#define WEBRTC_VIDEO_CODEC_REQUEST_SLI 2
#define WEBRTC_VIDEO_CODEC_NO_OUTPUT 1
#define WEBRTC_VIDEO_CODEC_OK 0
#define WEBRTC_VIDEO_CODEC_ERROR -1
#define WEBRTC_VIDEO_CODEC_LEVEL_EXCEEDED -2
#define WEBRTC_VIDEO_CODEC_MEMORY -3
#define WEBRTC_VIDEO_CODEC_ERR_PARAMETER -4
#define WEBRTC_VIDEO_CODEC_ERR_SIZE -5
#define WEBRTC_VIDEO_CODEC_TIMEOUT -6
#define WEBRTC_VIDEO_CODEC_UNINITIALIZED -7
#define WEBRTC_VIDEO_CODEC_ERR_REQUEST_SLI -12

#endif // VIDEO_ERROR_CODES_H