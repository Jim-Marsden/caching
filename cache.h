//
// Created by snizzfox on 5/18/21.
//

#ifndef CASHING_CACHE_H
#define CASHING_CACHE_H

#include <iostream>

#include <string>
#include <array>
#include <fstream>
#include <exception>

namespace il {
    struct not_implemented_exception : std::exception {
        const char *what() const noexcept override {
            return "Not implemented, am lazy.\n";
        }

    };

    template<class element_t, class id_t = std::string, size_t size = 0xf>
    class my_cache {
        struct container_element {
            element_t element;
            id_t id;
        };
    protected:
        std::array<container_element, size> data;
    public:
        template<class file_output_t = std::ostream>
        bool save(file_output_t &fileOutput, id_t const &id, element_t const &element);

        template<class file_input_t = std::istream>
        bool load(file_input_t &fileInput, id_t const &id, element_t const &element);

        template<class file_input_t = std::istream>
        bool load(file_input_t &fileInput, id_t const &id);


    };

    template<class element_t, class id_t, size_t size>
    template<class file_output_t>
    bool my_cache<element_t, id_t, size>::save(file_output_t &fileOutput, const id_t &id, const element_t &element) {
        throw not_implemented_exception{};
        return false;
    }

    template<class element_t, class id_t, size_t size>
    template<class file_input_t>
    bool my_cache<element_t, id_t, size>::load(file_input_t &fileInput, const id_t &id, const element_t &element) {
        throw not_implemented_exception{};
        return false;
    }

    template<class element_t, class id_t, size_t size>
    template<class file_input_t>
    bool my_cache<element_t, id_t, size>::load(file_input_t &fileInput, const id_t &id) {
        throw not_implemented_exception{};
        return false;
    }

} // namespace il
#endif //CASHING_CACHE_H
