// Copyright 2020 Google LLC
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     https://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#ifndef CORE_V2_OPTIONS_H_
#define CORE_V2_OPTIONS_H_

#include "core_v2/strategy.h"

namespace location {
namespace nearby {
namespace connections {

// Connection Options: used for both Advertising and Discovery.
// All fields are mutable, to make the type copy-assignable.
struct ConnectionOptions {
  Strategy strategy;
  bool auto_upgrade_bandwidth;
  bool enforce_topology_constraints;
  // Verify if  ConnectionOptions is in a not-initialized (Empty) state.
  bool Empty() const {
    return strategy.IsNone();
  }
  // Bring  ConnectionOptions to a not-initialized (Empty) state.
  void Clear() {
    strategy.Clear();
  }
};

}  // namespace connections
}  // namespace nearby
}  // namespace location

#endif  // CORE_V2_OPTIONS_H_