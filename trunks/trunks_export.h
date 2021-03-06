//
// Copyright (C) 2015 The Android Open Source Project
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//      http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
//

#ifndef TRUNKS_TRUNKS_EXPORT_H_
#define TRUNKS_TRUNKS_EXPORT_H_

// Use this for any class or function that needs to be exported from libtrunks.
// E.g. TRUNKS_EXPORT void foo();
#define TRUNKS_EXPORT __attribute__((__visibility__("default")))

#endif  // TRUNKS_TRUNKS_EXPORT_H_
