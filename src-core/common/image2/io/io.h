#pragma once

#include <string>
#include "common/image2/image.h"

namespace image2
{
    void save_png(Image &img, std::string file, bool fast = true);
    void load_png(Image &img, std::string file, bool disableIndexing = false);
    void load_png(Image &img, uint8_t *buffer, int size, bool disableIndexing = false);

    void load_jpeg(Image &img, std::string file);
    void load_jpeg(Image &img, uint8_t *buffer, int size);
    void save_jpeg(Image &img, std::string file);

    void load_img(Image &img, std::string file);
    void load_img(Image &img, uint8_t *buffer, int size);
    void save_img(Image &img, std::string file, bool fast = true);

    bool append_ext(Image &img, std::string *file, bool prod = false);
}