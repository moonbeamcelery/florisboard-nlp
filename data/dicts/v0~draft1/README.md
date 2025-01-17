# Preprocessed word dictionaries

This document provides a quick overview of all currently available preprocessed word dictionaries:

Name | Language | Extension archive | Preprocessed with | Additional notes
---|---|---|---|---
`words_en-US` | English (US) | [Download](https://github.com/florisboard/nlp/raw/main/data/dicts/v0~draft1/org.florisboard.dictionaries.en-US.flex) | Wiktextract & Google Ngram | -
`words_en-GB` | English (UK) | [Download](https://github.com/florisboard/nlp/raw/main/data/dicts/v0~draft1/org.florisboard.dictionaries.en-GB.flex) | Wiktextract & Google Ngram | -
`words_de` | German | [Download](https://github.com/florisboard/nlp/raw/main/data/dicts/v0~draft1/org.florisboard.dictionaries.de.flex) | Wiktextract & Google Ngram | -
`words_es` | Spanish | [Download](https://github.com/florisboard/nlp/raw/main/data/dicts/v0~draft1/org.florisboard.dictionaries.es.flex) | Wiktextract & Google Ngram | -
`words_fr` | French | [Download](https://github.com/florisboard/nlp/raw/main/data/dicts/v0~draft1/org.florisboard.dictionaries.fr.flex) | Wiktextract & Google Ngram | -
`words_it` | Italian | [Download](https://github.com/florisboard/nlp/raw/main/data/dicts/v0~draft1/org.florisboard.dictionaries.it.flex) | Wiktextract & Google Ngram | -
`words_ru` | Russian | [Download](https://github.com/florisboard/nlp/raw/main/data/dicts/v0~draft1/org.florisboard.dictionaries.ru.flex) | Wiktextract & Google Ngram | -

User dictionaries (`user_dict_*`) are meant for testing and can be ignored.

## Notes on preprocessed dictionary content appropriateness

All preprocessed content is a best-effort result. For German and English quite some effort has been made to properly flag potentially offensive words, however for other languages the detection currently only relies on Wiktextract data which tends to miss curse words or other offensive terms quite often.

## Notes on the English dictionares (en-US and en-GB)

While some effort has been made to generate different dictionaries for American and British English it is currently unclear how exactly it affects the suggestions. Quick testing shows that American spelling is dominant in both dictionaries, here must definietly be made some effort to filter out the opposite spellings for each dictionary.

## Can I contribute custom preprocessed dictionary files?

Please see [CONTRIBUTING](../../../CONTRIBUTING.md) for more details.
