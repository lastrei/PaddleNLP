/* Copyright (c) 2022 PaddlePaddle Authors. All Rights Reserved.

Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at

    http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License. */

#pragma once

#include "nlohmann/json.hpp"
#include "fast_tokenizer/pretokenizers/pretokenizer.h"
#include "fast_tokenizer/utils/utils.h"

namespace paddlenlp {
namespace fast_tokenizer {
namespace pretokenizers {

struct FASTERTOKENIZER_DECL BertPreTokenizer : public PreTokenizer {
  virtual void operator()(PreTokenizedString* pretokenized) const override;
  friend void to_json(nlohmann::json& j,
                      const BertPreTokenizer& bert_pre_tokenizer);
  friend void from_json(const nlohmann::json& j,
                        BertPreTokenizer& bert_pre_tokenizer);
};

}  // namespace pretokenizers
}  // namespace fast_tokenizer
}  // namespace paddlenlp
