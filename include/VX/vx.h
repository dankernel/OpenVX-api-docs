/*
 * Copyright (c) 2012-2020 The Khronos Group Inc.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *    http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

/*
 * NOTE: Some safety-critical environments may enforce software development
 *       guidelines (for example MISRA C:2012) to facilitate code quality,
 *       safety, security, portability and reliability. In order to meet
 *       such guidelines, developers may modify OpenVX standard header files
 *       without deviating from the OpenVX specification.
 */

#ifndef _OPENVX_H_
#define _OPENVX_H_

/*!
 * \file
 * \brief 최상위 OpenVX 헤더입니다.
 */

/*! \brief Defines the length of the implementation name string, including the trailing zero.
 * \ingroup group_context
 */
#define VX_MAX_IMPLEMENTATION_NAME (64)

/*! \brief Defines the length of a kernel name string to be added to OpenVX, including the trailing zero.
 * \ingroup group_kernel
 */
#define VX_MAX_KERNEL_NAME (256)

/*! \brief Defines the length of a message buffer to copy from the log, including the trailing zero.
 * \ingroup group_basic_features
 */
#define VX_MAX_LOG_MESSAGE_LEN (1024)

/*! \brief Defines the length of the reference name string, including the trailing zero.
 * \ingroup group_reference
 * \see vxSetReferenceName
 */
#define VX_MAX_REFERENCE_NAME (64)

#include <VX/vx_vendors.h>
#include <VX/vx_types.h>
#include <VX/vx_kernels.h>
#include <VX/vx_api.h>
#include <VX/vx_nodes.h>

/*! \brief 주 버전 번호 매크로를 정의합니다..
 * \ingroup group_basic_features
 */
#define VX_VERSION_MAJOR(x) ((vx_uint32)((vx_uint32)(x) & 0xFFU) << 8)

/*! \brief 부 버전 번호 매크로를 정의합니다.
 * \ingroup group_basic_features
 */
#define VX_VERSION_MINOR(x) ((vx_uint32)((vx_uint32)(x) & 0xFFU) << 0)

/*! \brief 1.0에 대해 미리 정의 된 버전 번호를 정의합니다. 
 * \ingroup group_basic_features
 */
#define VX_VERSION_1_0      (VX_VERSION_MAJOR(1) | VX_VERSION_MINOR(0))

/*! \brief Defines the predefined version number for 1.1.
 * \ingroup group_basic_features
 */
#define VX_VERSION_1_1      (VX_VERSION_MAJOR(1) | VX_VERSION_MINOR(1))

/*! \brief Defines the predefined version number for 1.2.
 * \ingroup group_basic_features
 */
#define VX_VERSION_1_2      (VX_VERSION_MAJOR(1) | VX_VERSION_MINOR(2))

/*! \brief 1.3에 대해 미리 정의 된 버전 번호를 정의합니다.
 * \ingroup group_basic_features
 */
#define VX_VERSION_1_3      (VX_VERSION_MAJOR(1) | VX_VERSION_MINOR(3))

/*! \brief OpenVX 버전 번호를 정의합니다.
 * \ingroup group_basic_features
 */
#define VX_VERSION          (VX_VERSION_1_3)

#endif
