/***********************************************************************************************************************
* Copyright (c) 2022-2022 Daemyung Jang.
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
***********************************************************************************************************************/

#include "Context.h"

#include "Dispatch.h"
#include "Device.h"

namespace clmtl {

Context *Context::DownCast(cl_context context) {
    return (Context *) context;
}

Context::Context()
        : _cl_context{Dispatch::GetTable()}, Object{}, mDevice{Device::GetSingleton()} {
    assert(Dispatch);
}

Device *Context::GetDevice() const {
    return mDevice;
}

} //namespace clmtl