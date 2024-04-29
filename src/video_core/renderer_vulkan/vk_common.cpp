// SPDX-FileCopyrightText: Copyright 2024 shadPS4 Emulator Project
// SPDX-License-Identifier: GPL-2.0-or-later

#include "video_core/renderer_vulkan/vk_common.h"

// Implement vma functions
#define VMA_IMPLEMENTATION
#include <vk_mem_alloc.h>

// Store the dispatch loader here
VULKAN_HPP_DEFAULT_DISPATCH_LOADER_DYNAMIC_STORAGE
