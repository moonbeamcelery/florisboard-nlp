/*
 * Copyright 2022 Patrick Goldinger
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef __FLORISNLP_CORE_DICTIONARY_SESSION_H__
#define __FLORISNLP_CORE_DICTIONARY_SESSION_H__

#include "core/common.hpp"
#include "core/dictionary.hpp"
#include "core/string.hpp"

#include <filesystem>
#include <string>

namespace fl::nlp {

class dictionary_session {
  public:
    dictionary_session() = default;
    ~dictionary_session() = default;

  public:
    void load_base_dictionary(std::filesystem::path& dict_path);

    void load_user_dictionary(std::filesystem::path& dict_path);

    spelling_result* spell(
        fl::u8str& word,
        std::vector<std::string> prev_words,
        std::vector<std::string> next_words,
        suggestion_request_flags& flags
    );

    std::vector<suggestion_candidate*> suggest(
        fl::u8str& word,
        std::vector<fl::u8str> prev_words,
        suggestion_request_flags& flags
    );

    std::vector<fl::u8str> get_list_of_words() const noexcept;

    freq_t get_frequency_for_word(fl::u8str& word);

  private:
    std::vector<std::unique_ptr<dictionary>> base_dictionaries;
    std::unique_ptr<mutable_dictionary> user_dictionary = nullptr;
};

} // namespace fl::nlp

#endif