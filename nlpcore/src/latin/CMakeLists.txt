add_library(fl_nlp_core_latin)
add_library(fl::nlp::core::latin ALIAS fl_nlp_core_latin)
target_module_sources(fl_nlp_core_latin PUBLIC
        latin.cppm
        algorithms.cppm
        definitions.cppm
        dictionary.cppm
        entry_properties.cppm
        nlp_session.cppm
        nlp_session_config.cppm
        nlp_session_state.cppm
        prediction.cppm
        prediction_weights.cppm
        )
target_link_libraries(fl_nlp_core_latin PUBLIC fmt::fmt fl::nlp::core::common fl::icuext fl::string fl::utils)
target_link_libraries(fl_nlp_core_latin PUBLIC FlorisICU::uc FlorisICU::data)
